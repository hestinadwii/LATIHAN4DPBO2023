from Sivitas import Sivitas

class Mahasiswa(Sivitas):
    __nim = ""
    __faculty = ""

    # Konstruktor
    def __init__(self, nik = "", name = "", gender = "", asal_univ = "", email_edu = "", nim = "", faculty = ""):
        super().__init__(nik, name, gender, asal_univ, email_edu)
        self.__nim = nim
        self.__faculty = faculty
    
    # Getter and Setter #
    
    # Get nim
    def get_nim (self):
        return self.__nim

    # Get faculty
    def get_faculty (self):
        return self.__faculty
    
    # Set nim
    def set_nim (self, nim):
        self.__nim = nim

    # set faculty
    def set_faculty (self, faculty):
        self.__faculty = faculty
    
    # Public Method #
    def printMahasiswa(self):
        print("NIK              : ", self.get_nik())
        print("Gender           : ", self.get_gender())
        print("Home University  : ", self.get_asal_univ())
        print("Email Edu        : ", self.get_email_edu())
        print("NIM              : ", self.get_nim())
        print("Faculty          : ", self.get_faculty())