Tutorial static _library_
=======================

1. **Membuat _library_**

    Buatlah _file_ <namafile>.c serta tulislah kode yang dibutuhkan untuk _library_ Anda.
    
    Tidak perlu ada fungsi _main_ pada _static library_

2. **Membuat _header file_**
    
    _file header_ berisi deklarasi dari source file, baca [tujuan _header files_](https://stackoverflow.com/questions/11527528/confused-about-the-actual-purpose-of-header-files-in-c)
    Gunakan [_include guards_](https://stackoverflow.com/questions/1653958/why-are-ifndef-and-define-used-in-c-header-files) ```#ifndef``` dan ```#define```

3. **Membuat _objek file_**
    
    Membuat _object file_ dengan command
    ```
    $ gcc -c <namafile>.c
    ```
    Akan dihasilkan <namafile>.o yang merupakan _object file_
    
4. **Membuat _static library_**
    
    Arsipkan _object file_ dan buatlah _static library_ dengan menggunakan ``ar``
    ```
    $ ar -rc <namastaticlibrary>.a <namaobjectfile>.o
    ```
    Perhatikan bahwa _static library_ harus diawali dengan lib
    contoh:
    ```
    $ ar -rc libpustaka.a mylib.o
    ```
    akan dihasilkan _static library_ libpustaka.a
    
5. **hubungkan static library**
    
    Memberitahukan kepada _linker_ letak _static library_
    ```
    $ gcc -o <namaprogram> <namaprogram>.c -L. -l<namalib>
    ```
    
    Perhatikan bahwa kata lib dan ekstensi .a pada nama _static library_ kita dihilangkan
    contoh:
    ```
    $ gcc -o main main.c -L. -lpustaka
    ```
    akan dihasilkan suatu _file binary_ yang dapat dieksekusi
6. **Jalankan Program**
    
    _Library_ telah berhasil di buat dan telah dihasilkan file binary, sehingga program siap di jalankan

    ```
    $ ./<namaprogram>
    ```
  
referensi: https://medium.com/@eightlimbed/how-to-create-and-use-a-c-static-library-eec33d502aeb
