from Sivitas import Sivitas

class Dosen(Sivitas):
    __nip = ""
    __faculty = ""
    __pend_terakhir = ""
    __keahlian = ""

    # Konstruktor
    def __init__(self, nik = "", name = "", gender = "", asal_univ = "", email_edu = "", nip = "", faculty = "", pend_terakhir = "", keahlian = ""):
        super().__init__(nik, name, gender, asal_univ, email_edu)
        self.__nip = nip
        self.__faculty = faculty
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian
    
    # Getter and Setter #
    # Get nip
    def get_nip (self):
        return self.__nip

    # Set nip
    def set_nip (self, nip):
        self.__nip = nip

    # Get faculty
    def get_faculty (self):
        return self.__faculty
    
    # set faculty
    def set_faculty (self, faculty):
        self.__faculty = faculty
    
    # Get pend_terakhir
    def get_pend_terakhir (self):
        return self.__pend_terakhir
    
    # Set pend_terakhir
    def set_pend_terakhir (self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir
    
    # Get keahlian
    def get_keahlian (self):
        return self.__keahlian
    
    # Set keahlian
    def set_keahlian (self, keahlian):
        self.__keahlian = keahlian
    
    # Public Method #
    def printDosen(self):
        print("NIK              : ", self.get_nik())
        print("Gender           : ", self.get_gender())
        print("Home University  : ", self.get_asal_univ())
        print("Email Edu        : ", self.get_email_edu())
        print("NIP              : ", self.get_nip())
        print("Faculty          : ", self.get_faculty())
        print("Last Education   : ", self.get_pend_terakhir())
        print("Skill            : ", self.get_keahlian())