#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Human
{
    private:
        string nik, nama, gender;

    public:
        Human();
        Human(string nik, string nama, string gender);

        string getNik();
        void setNik(string nik);
        string getNama();
        void setNama(string nama);
        string getGender();
        void setGender(string gender);

        ~Human();
};

class Sivitas : public Human
{
    private:
        string asal_univ, email_edu;

    public:
        Sivitas();
        Sivitas(string nik, string nama, string gender, string asal_univ, string email_edu);

        string getAsal_univ();
        void setAsal_univ(string asal_univ);
        string getEmail_edu();
        void setEmail_edu(string email_edu);

        ~Sivitas();
};

class Mahasiswa : public Sivitas
{
    private:
        string nim, faculty;

    public:
        Mahasiswa();
        Mahasiswa(string nik, string nama, string gender, string asal_univ, string email_edu, string nim, string faculty);

        string getNim();
        void setNim(string nim);
        string getFaculty();
        void setFaculty(string faculty);


        ~Mahasiswa();
};

class Dosen : public Sivitas
{
    private:
        string nip, faculty, pend_terakhir, keahlian;

    public:
        Dosen();
        Dosen(string nik, string nama, string gender, string asal_univ, string email_edu, string nip, string faculty, string pend_terakhir, string keahlian);

        string getNip();
        void setNip(string nip);
        string getFaculty();
        void setFaculty(string faculty);
        string getPend_terakhir();
        void setPend_terakhir(string pend_terakhir);
        string getKeahlian();
        void setkeahlian(string keahlian);

        ~Dosen();
};

class Course
{
    private:
        string nama_matkul;

    public:
        Course();
        Course(string nama_matkul);

        string getNama_matkul();
        void setNama_matkul(string nama_matkul);

        ~Course();
};

class Prodi 
{
    private:
        Mahasiswa mahasiswa;
        Dosen dosen;
        Course course;
        string nama_prodi, kode;

    public:
        Prodi();
        Prodi(string nama_prodi, string kode, Mahasiswa mahasiswa, Dosen dosen, Course course);

        string getNama_prodi();
        void setNama_prodi(string nama_prodi);
        string getKode();
        void setKode(string kode);
        Mahasiswa getMahasiswa();
        void setMahasiswa(Mahasiswa mahasiswa);
        Dosen getDosen();
        void setDosen(Dosen dosen);
        Course getCourse();
        void setCourse(Course course);
    ~Prodi();

};