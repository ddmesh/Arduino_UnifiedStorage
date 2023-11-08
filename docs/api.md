`public bool ` [`begin`](#class_arduino___unified_storage_1a350443027c76ea18f2812a54aa8ab437)`()` | Initializes the storage.
`public bool ` [`begin`](#class_arduino___unified_storage_1acb25f75f3dcdb89ebce3c7cd08970a99)`(FileSystems fs)` | Initializes the storage with the specified file system. 
`public bool ` [`unmount`](#class_arduino___unified_storage_1a4281bc190ee4f2ad35265eab64ef6f7f)`()` | Unmounts the storage. 
`public bool ` [`format`](#class_arduino___unified_storage_1ad6d045b4bdafd4dcb75daed305888e25)`(FileSystems fs)` | Formats the storage with the selected file system. 
### `public bool ` [`begin`](#class_arduino___unified_storage_1a350443027c76ea18f2812a54aa8ab437)`()` <a id="class_arduino___unified_storage_1a350443027c76ea18f2812a54aa8ab437" class="anchor"></a>
true if successful, false if failed.
### `public bool ` [`begin`](#class_arduino___unified_storage_1acb25f75f3dcdb89ebce3c7cd08970a99)`(FileSystems fs)` <a id="class_arduino___unified_storage_1acb25f75f3dcdb89ebce3c7cd08970a99" class="anchor"></a>
true if successful, false if failed.
### `public bool ` [`unmount`](#class_arduino___unified_storage_1a4281bc190ee4f2ad35265eab64ef6f7f)`()` <a id="class_arduino___unified_storage_1a4281bc190ee4f2ad35265eab64ef6f7f" class="anchor"></a>
true if successful, false if failed.
### `public bool ` [`format`](#class_arduino___unified_storage_1ad6d045b4bdafd4dcb75daed305888e25)`(FileSystems fs)` <a id="class_arduino___unified_storage_1ad6d045b4bdafd4dcb75daed305888e25" class="anchor"></a>
Formats the storage with the selected file system. 
true if successful, false if failed.
`public String ` [`getPathAsString`](#class_folder_1ac816d0fe5674c4648e97423b6f9c51f8)`()` | Returns the path of the file.
### `public String ` [`getPathAsString`](#class_folder_1ac816d0fe5674c4648e97423b6f9c51f8)`()` <a id="class_folder_1ac816d0fe5674c4648e97423b6f9c51f8" class="anchor"></a>
`public virtual bool ` [`begin`](#class_internal_storage_1a984731348dfbdade84e24250133a033e)`()` | Initializes the internal storage.
`public virtual bool ` [`begin`](#class_internal_storage_1a90cd409874d9c578ce3add4df88875e5)`(FileSystems fs)` | Initializes the internal storage with the specified file system.
`public virtual bool ` [`unmount`](#class_internal_storage_1a663446e2135a4e91d7fdb8ca638cc027)`()` | Unmounts the internal storage.
`public virtual bool ` [`format`](#class_internal_storage_1a9ee819a55de5d411e6b10bdc9942c601)`(FileSystems fs)` | Formats the internal storage with the selected file system.
### `public virtual bool ` [`begin`](#class_internal_storage_1a984731348dfbdade84e24250133a033e)`()` <a id="class_internal_storage_1a984731348dfbdade84e24250133a033e" class="anchor"></a>
true if successful, false if failed.
### `public virtual bool ` [`begin`](#class_internal_storage_1a90cd409874d9c578ce3add4df88875e5)`(FileSystems fs)` <a id="class_internal_storage_1a90cd409874d9c578ce3add4df88875e5" class="anchor"></a>
true if successful, false if failed.
### `public virtual bool ` [`unmount`](#class_internal_storage_1a663446e2135a4e91d7fdb8ca638cc027)`()` <a id="class_internal_storage_1a663446e2135a4e91d7fdb8ca638cc027" class="anchor"></a>
true if successful, false if failed.
### `public virtual bool ` [`format`](#class_internal_storage_1a9ee819a55de5d411e6b10bdc9942c601)`(FileSystems fs)` <a id="class_internal_storage_1a9ee819a55de5d411e6b10bdc9942c601" class="anchor"></a>
Formats the internal storage with the selected file system.
true if successful, false if failed.
Retrieves the block device associated with the internal storage.
The block device as a BlockDevice object.

`public virtual bool ` [`begin`](#class_s_d_storage_1ab49c772b785b6c97940baca60ae386ec)`()` | Initializes the SD card storage.
`public virtual bool ` [`begin`](#class_s_d_storage_1a19520df98c5a52d403ac26a873f65860)`(FileSystems fs)` | Initializes the SD card storage with the specified file system.
`public virtual bool ` [`unmount`](#class_s_d_storage_1a6f4d671e685d660d0aff8648d8288b9c)`()` | Unmounts the SD card storage.
`public virtual bool ` [`format`](#class_s_d_storage_1a93cac8330a5950138985e3712db1dc07)`(FileSystems fs)` | Formats the SD card storage with the selected file system.
### `public virtual bool ` [`begin`](#class_s_d_storage_1ab49c772b785b6c97940baca60ae386ec)`()` <a id="class_s_d_storage_1ab49c772b785b6c97940baca60ae386ec" class="anchor"></a>
true if successful, false if failed.
### `public virtual bool ` [`begin`](#class_s_d_storage_1a19520df98c5a52d403ac26a873f65860)`(FileSystems fs)` <a id="class_s_d_storage_1a19520df98c5a52d403ac26a873f65860" class="anchor"></a>
true if successful, false if failed.
### `public virtual bool ` [`unmount`](#class_s_d_storage_1a6f4d671e685d660d0aff8648d8288b9c)`()` <a id="class_s_d_storage_1a6f4d671e685d660d0aff8648d8288b9c" class="anchor"></a>
true if successful, false if failed.
### `public virtual bool ` [`format`](#class_s_d_storage_1a93cac8330a5950138985e3712db1dc07)`(FileSystems fs)` <a id="class_s_d_storage_1a93cac8330a5950138985e3712db1dc07" class="anchor"></a>
Formats the SD card storage with the selected file system.
true if successful, false if failed.
`public String ` [`getPathAsString`](#class_u_file_1a5adef9f3d538f92e51e52c4b1f3ada76)`()` | Returns the path of the directory.
`public uint32_t ` [`available`](#class_u_file_1a82ad0fb6cffaf23aea794b508ec57bbb)`()` | Returns the number of bytes available to read.
### `public String ` [`getPathAsString`](#class_u_file_1a5adef9f3d538f92e51e52c4b1f3ada76)`()` <a id="class_u_file_1a5adef9f3d538f92e51e52c4b1f3ada76" class="anchor"></a>
### `public uint32_t ` [`available`](#class_u_file_1a82ad0fb6cffaf23aea794b508ec57bbb)`()` <a id="class_u_file_1a82ad0fb6cffaf23aea794b508ec57bbb" class="anchor"></a>
`public virtual bool ` [`begin`](#class_u_s_b_storage_1aabf0868054a1741ffe4018301d145cb1)`()` | Initializes the USB storage.
`public virtual bool ` [`begin`](#class_u_s_b_storage_1a9fac27a863b6d73bb78f956be4517f67)`(FileSystems fs)` | Initializes the USB storage with the specified file system.
`public virtual bool ` [`unmount`](#class_u_s_b_storage_1acb602dc07465880ebaec64dca1b36506)`()` | Unmounts the USB storage.
`public virtual bool ` [`format`](#class_u_s_b_storage_1a8aec32e4e48d081183ad880a61836bc5)`(FileSystems fs)` | Formats the USB storage with the selected file system.
### `public virtual bool ` [`begin`](#class_u_s_b_storage_1aabf0868054a1741ffe4018301d145cb1)`()` <a id="class_u_s_b_storage_1aabf0868054a1741ffe4018301d145cb1" class="anchor"></a>
true if successful, false if failed.
### `public virtual bool ` [`begin`](#class_u_s_b_storage_1a9fac27a863b6d73bb78f956be4517f67)`(FileSystems fs)` <a id="class_u_s_b_storage_1a9fac27a863b6d73bb78f956be4517f67" class="anchor"></a>
true if successful, false if failed.
### `public virtual bool ` [`unmount`](#class_u_s_b_storage_1acb602dc07465880ebaec64dca1b36506)`()` <a id="class_u_s_b_storage_1acb602dc07465880ebaec64dca1b36506" class="anchor"></a>
true if successful, false if failed.
### `public virtual bool ` [`format`](#class_u_s_b_storage_1a8aec32e4e48d081183ad880a61836bc5)`(FileSystems fs)` <a id="class_u_s_b_storage_1a8aec32e4e48d081183ad880a61836bc5" class="anchor"></a>
Formats the USB storage with the selected file system.
true if successful, false if failed.