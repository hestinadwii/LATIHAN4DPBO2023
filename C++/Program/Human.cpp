#include "Header.hh"

/* HUMAN SECTION */
Human::Human()
{
    nik = "";
    nama = "";
    gender = ""; 
}

Human::Human(string nik, string nama, string gender)
{
    this->nik = nik;
    this->nama = nama;
    this->gender = gender;
}

string Human::getNik()
{
    return this->nik;
}

void Human::setNik(string nik)
{
    this->nik = nik;
}

string Human::getNama()
{
    return this->nama;
}

void Human::setNama(string nama)
{
    this->nama = nama;
}

string Human::getGender()
{
    return this->gender;
}

void Human::setGender(string gender)
{
    this->gender = gender;
}

Human::~Human()
{

}