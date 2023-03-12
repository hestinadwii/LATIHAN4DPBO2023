#include "Header.hh"

/* HUMAN SECTION */
Course::Course()
{
    nama_matkul = "";
}

Course::Course(string nama_matkul)
{
    this->nama_matkul = nama_matkul;
}

string Course::getNama_matkul()
{
    return this->nama_matkul;
}

void Course::setNama_matkul(string nama_matkul)
{
    this->nama_matkul = nama_matkul;
}

Course::~Course()
{
    
}