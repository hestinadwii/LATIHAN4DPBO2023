from Human import Human

class Sivitas(Human):
    __asal_univ = ""
    __email_edu = ""

    # Konstruktor
    def __init__(self,nik = "", name = "", gender = "", asal_univ = "", email_edu = ""):
        super().__init__(nik, name, gender)
        self.__asal_univ = asal_univ
        self.__email_edu = email_edu
    
    # Getter and Setter #
    
    # Get asal_univ
    def get_asal_univ (self):
        return self.__asal_univ
    
    # Get email_edu
    def get_email_edu (self):
        return self.__email_edu

    # Set asal_univ
    def set_asal_univ (self, asal_univ):
        self.__asal_univ = asal_univ
    
    # set email_edu
    def set_email_edu (self, email_edu):
        self.__email_edu = email_edu
    
    # Public Method #
    def printSivitas(self):
        print("Home University  : ", self.get_asal_univ())
        print("Email Edu        : ", self.get_email_edu())