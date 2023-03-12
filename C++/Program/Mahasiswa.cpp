#include "Header.hh"

Mahasiswa::Mahasiswa() : Sivitas()
{
    nim = "";
    faculty = "";
}

Mahasiswa::Mahasiswa(string nik, string nama, string gender, string asal_univ, string email_edu, string nim, string faculty) : Sivitas(nik, nama, gender, asal_univ, email_edu)
{
    this->nim = nim;
    this->faculty = faculty;
}

string Mahasiswa::getNim()
{
    return this->nim;
}

void Mahasiswa::setNim(string nim)
{
    this->nim = nim;
}

string Mahasiswa::getFaculty()
{
    return faculty;
}

void Mahasiswa::setFaculty(string faculty)
{
    this->faculty = faculty;
}

Mahasiswa::~Mahasiswa()
{

}