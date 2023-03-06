class Human:
    __NIK = ""
    __name = ""
    __gender = ""

    # Konstruktor
    def __init__(self, nik = "", name = "", gender = ""):
        self.__NIK = nik
        self.__name = name
        self.__gender = gender
    
    # Getter and Setter #

    # Get NIK
    def get_nik (self):
        return self.__NIK
    
    # Get Name
    def get_name (self):
        return self.__name

    # Get Gender
    def get_gender (self):
        return self.__gender
    
    # Set NIK
    def set_nik (self, NIK):
        self.__NIK = NIK

    # Set Name
    def set_name (self, name):
        self.__name = name
    
    # set Gender
    def set_gender (self, gender):
        self.__gender = gender
    
    # Public Method #
    def printName (self):
        print("Name             : ", self.get_name())
    def printHuman(self):
        print("Name             : ", self.get_name())
        print("NIK              : ", self.get_nik())
        print("Gender           : ", self.get_gender())