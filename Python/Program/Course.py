class Course:
    __nama_matkul = ""

    # Konstruktor
    def __init__(self, nama_matkul = ""):
        self.__nama_matkul = nama_matkul
    
    # Getter and Setter #
    # Get nama_matkul
    def get_nama_matkul (self):
        return self.__nama_matkul

    # Set nama_matkul
    def set_nama_matkul (self, nama_matkul):
        self.__nama_matkul = nama_matkul
 
    # Public Method #
    def printCourse(self):
        print("Course           : ", self.get_nama_matkul())