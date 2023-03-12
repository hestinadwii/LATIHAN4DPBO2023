#include "Header.hh"

Dosen::Dosen() : Sivitas()
{
    nip = "";
    faculty = "";
    pend_terakhir = "";
    keahlian = "";
}

Dosen::Dosen(string nik, string nama, string gender, string asal_univ, string email_edu, string nip, string faculty, string pend_terakhir, string keahlian) : Sivitas(nik, nama, gender, asal_univ, email_edu)
{
    this->nip = nip;
    this->faculty = faculty;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

string Dosen::getNip()
{
    return this->nip;
}

void Dosen::setNip(string nip)
{
    this->nip = nip;
}

string Dosen::getFaculty()
{
    return faculty;
}

void Dosen::setFaculty(string faculty)
{
    this->faculty = faculty;
}

string Dosen::getPend_terakhir()
{
    return this->pend_terakhir;
}

void Dosen::setPend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

string Dosen::getKeahlian()
{
    return this->keahlian;
}

void Dosen::setkeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

Dosen::~Dosen()
{

}