#include "USBStorage.h"

#if defined(ARDUINO_PORTENTA_H7_M7)
    #include <Arduino_USBHostMbed5.h>
#endif

// The maximum number of attempts to mount the USB drive
constexpr auto MAX_MOUNT_ATTEMPTS = 10;

bool USBStorage::usbAvailable = false;

USBStorage::USBStorage(){
#if defined(ARDUINO_PORTENTA_C33)
    register_hotplug_callback(DEV_USB,  [](){
        usbAvailable = !usbAvailable;
    });
#endif
}

int USBStorage::begin(FileSystems fs){
  this -> fileSystem = fs;
  this -> begin();
}

int USBStorage::begin(){
    int attempts = 0;
    int err = mount(DEV_USB, this->fileSystem, MNT_DEFAULT);

    while (0 != err && attempts < MAX_MOUNT_ATTEMPTS) {
        attempts +=1;
        err = mount(DEV_USB, this->fileSystem, MNT_DEFAULT);
        delay(1000);
    }

    if(err == 0){
        this -> connected = true;
    } else {
        this -> connected = false;
    }

    return err == 0;
}

int USBStorage::unmount(){
  auto unmountResult = umount(DEV_USB);
    

  if(unmountResult == 0){
      this -> connected = false;
  }

  return unmountResult == 0;
}

Folder USBStorage::getRootFolder(){
    return Folder("/usb");
}

bool USBStorage::isAvailable(){
    return usbAvailable;
}

bool USBStorage::isConnected(){
    return this -> connected;
}

void USBStorage::checkConnection(){
    USBHost * host;
    USBDeviceConnected * dev;
#if defined(ARDUINO_PORTENTA_H7_M7)
    unsigned long currentMillis = millis();
    boolean found = false;

    if (currentMillis - previousMillis >= interval) {
      this->previousMillis = currentMillis;
      host = USBHost::getHostInst();

      if ((dev = host->getDevice(0)) != NULL){
          usbAvailable = true;
          found = true;
      } else{
          usbAvailable = false;
      }
    }
#endif
}

int USBStorage::formatFAT(){
    this -> begin();
    this -> unmount();
    this -> fileSystem = FS_FAT;
    return mkfs(DEV_USB, FS_FAT);
}

int USBStorage::formatLittleFS(){
    this -> begin();
    this -> unmount();
    this -> fileSystem = FS_LITTLEFS;
    return mkfs(DEV_USB, FS_LITTLEFS);
}
