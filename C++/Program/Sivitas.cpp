#include "Header.hh"

Sivitas::Sivitas() : Human ()
{
    asal_univ = "";
    email_edu = "";
}

Sivitas::Sivitas(string nik, string nama, string gender, string asal_univ, string email_edu) : Human(nik, nama, gender)
{
    this->asal_univ = asal_univ;
    this->email_edu = email_edu;
}

string Sivitas::getAsal_univ()
{
    return this->asal_univ;
}

void Sivitas::setAsal_univ(string asal_univ)
{
    this->asal_univ = asal_univ;
}

string Sivitas::getEmail_edu()
{
    return email_edu;
}

void Sivitas::setEmail_edu(string email_edu)
{
    this->email_edu = email_edu;
}

Sivitas::~Sivitas()
{

}