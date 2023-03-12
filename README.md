# LATIHAN4DPBO2023

    Saya Hestina Dwi Hartiwi NIM 2108077 mengerjakan soal Latihan 4 dalam Praktikum
    mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka 
    saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
    
## ABOUT THE REPOSITORY
Repositori ini berisi Latihan 4 dari praktikum mata kuliah Desain dan Pemrograman Berorientasi Objek.

## HOW TO DEVELOPED
Terdapat 2 macam bahasa pemrograman yang digunakan, yaitu C++ dan Python.

## INSIDE
![Latihan 4 drawio](https://user-images.githubusercontent.com/100210178/224528851-e85457c4-341f-4350-8263-d2a678dc0d3a.png)

### class Human
Class Human merupakan parent class atau kelas induk. Hal ini dikarenakan class Human berisi atribut mendasar yang bisa diturunkan atributnya ke kelas di bawahnya.
  
  -> Atribut: NIK, nama, dan jenis_kelamin
  
### class Sivitas
Class Sivitas merupakan child class dari class Human. Hal ini dikarenakan class di bawahnya (class Mahasiswa dan Dosen) merupakan komponen dari Sivitas Akademik.

  -> Atribut: asal_univ dan email_edu
  
### class Mahasiswa
Class Mahasiswa merupakan grandparent class atau kelas cucu. Hal ini dikarenakan atribut yang ada di kelas ini mencakup atribut pada kelas yang di atas. 

  -> Atribut: nim dan fakultas
 
### class Dosen
Class Dosen merupakan grandparent class atau kelas cucu. Hal ini dikarenakan atribut yang ada di kelas ini mencakup atribut pada kelas yang di atas. 

  -> Atribut: nip, fakultas, pend_terakhir, dan keahlian.

### class Course
Class Course bukan kelas anak ataupun kelas orang tua dari kelas lainnta. Hal ini dikarenakan atribut yang ada di kelas ini berbeda objek dengan kelas lainnya. 

  -> Atribut: nama_matkul
  
### class Prodi
Class Prodi merupakan composite ke class Mahasiswa, Dosen, dan Course. Hal ini karena Prodi memiliki (has a) dosen, mahasiswa, dan mata kuliah (course).

  -> Atribut: nama_prodi, kode, daftar_mahasiswa, daftar_dosen, dan daftar_matkul.
  
## PROGRAM's LOOK
![Screenshot (74)](https://user-images.githubusercontent.com/100210178/224529091-ad67a488-9485-4ad6-9c57-e09e92c81191.png)
![Screenshot (75)](https://user-images.githubusercontent.com/100210178/224529093-b6ab6333-17a7-40bf-a7c6-53f5232f0716.png)

