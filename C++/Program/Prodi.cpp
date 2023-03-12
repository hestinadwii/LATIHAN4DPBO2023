#include "Header.hh"

Prodi::Prodi()
{
    nama_prodi = "";
    kode = "";
}

Prodi::Prodi(string nama_prodi, string kode, Mahasiswa mahasiswa, Dosen dosen, Course course)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
}

string Prodi::getNama_prodi()
{
    return this->nama_prodi;
}

void Prodi::setNama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

string Prodi::getKode()
{
    return kode;
}

void Prodi::setKode(string kode)
{
    this->kode = kode;
}

Mahasiswa Prodi::getMahasiswa()
{
    return this->mahasiswa;
}

void Prodi::setMahasiswa(Mahasiswa mahasiswa)
{
    this->mahasiswa = mahasiswa;
}

Dosen Prodi::getDosen()
{
    return this->dosen;
}

void Prodi::setDosen(Dosen dosen)
{
    this->dosen = dosen;
}

Course Prodi::getCourse()
{
    return this->course;
}

void Prodi::setCourse(Course course)
{
    this->course = course;
}

Prodi::~Prodi()
{

}