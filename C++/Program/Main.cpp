#include "Header.hh"

int main()
{
    // data Mahasiswa
    Mahasiswa mahasiswa("123", "Jeon_Jungkook", "Male", "UPI", "jeonjungkook@upi.edu", "2457", "FPMIPA");

    // data Dosen
    Dosen dosen("146", "Bang_Shi_Hyuk", "Male", "UPI", "hitmanbang@upi.edu", "987056", 
                   "FPMIPA", "S3", "R_and_Python");

    // data Course
    Course course("Machine_Learning");

    // data prodi
    list<Prodi> dataProdi;
    Prodi prodi ("Computer_Science", "CS234", mahasiswa, dosen, course);
    prodi.setMahasiswa(mahasiswa);
    prodi.setDosen(dosen);
    prodi.setCourse(course);
    dataProdi.push_back(prodi);

    int i = 0;
    for (list<Prodi>::iterator it = dataProdi.begin(); it != dataProdi.end(); it ++) 
    {
        cout << "-------------------------------------" << '\n';
        cout << "                Major                " << '\n';
        cout << "-------------------------------------" << '\n';
        cout << (i + 1) << ") " << it->getNama_prodi() << '\n';
        cout << "Code       : " << it->getKode() << '\n';
        cout << "Course     : " << it->getCourse().getNama_matkul() << '\n';

        cout << "-------------------------------------" << '\n';
        cout << "             Student Data            " << '\n';
        cout << "-------------------------------------" << '\n';
        
        int j = 0;
        cout << (j + 1) << ") " << it->getMahasiswa().getNama() << '\n';
        cout << "NIK                : " << it->getMahasiswa().getNik() << '\n';
        cout << "Gender             : " << it->getMahasiswa().getGender() << '\n';
        cout << "Home University    : " << it->getMahasiswa().getAsal_univ() << '\n';
        cout << "Email Edu          : " << it->getMahasiswa().getEmail_edu() << '\n';
        cout << "NIM                : " << it->getMahasiswa().getNim() << '\n';
        cout << "Faculty            : " << it->getMahasiswa().getFaculty() << '\n';
        j++;

        cout << "-------------------------------------" << '\n';
        cout << "             Lecturer Data            " << '\n';
        cout << "-------------------------------------" << '\n';
        
        int k = 0;
        cout << (k + 1) << ") " << it->getDosen().getNama() << '\n';
        cout << "NIK                : " << it->getDosen().getNik() << '\n';
        cout << "Gender             : " << it->getDosen().getGender() << '\n';
        cout << "Home University    : " << it->getDosen().getAsal_univ() << '\n';
        cout << "Email Edu          : " << it->getDosen().getEmail_edu() << '\n';
        cout << "NIM                : " << it->getDosen().getNip() << '\n';
        cout << "Faculty            : " << it->getDosen().getFaculty() << '\n';
        cout << "Last Education     : " << it->getDosen().getPend_terakhir() << '\n';
        cout << "Skill              : " << it->getDosen().getKeahlian() << '\n';
        k++;

        i++;
    }

    return 0;
}