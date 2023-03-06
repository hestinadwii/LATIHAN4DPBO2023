from Dosen import Dosen
from Mahasiswa import Mahasiswa
from Course import Course

class Prodi():
    __nama_prodi = ""
    __obj_dosen = Dosen()
    __obj_mhs = Mahasiswa()
    __obj_course = Course()
    __kode = ""
 
    # Konstruktor
    def __init__(self, nama_prodi = "", obj_dosen = Dosen(), obj_mhs = Mahasiswa(), obj_course = Course(), kode= ""):
        self.__nama_prodi = nama_prodi
        self.__obj_dosen = obj_dosen
        self.__obj_mhs = obj_mhs
        self.__obj_course = obj_course
        self.__kode = kode
    
    # Getter and Setter #
    # Get nama_prodi
    def get_nama_prodi (self):
        return self.__nama_prodi

    # Set nama_prodi
    def set_nama_prodi (self, nama_prodi):
        self.__nama_prodi = nama_prodi

    # Get obj_dosen
    def get_obj_dosen (self):
        return self.__obj_dosen
    
    # set obj_dosen
    def set_obj_dosen (self, obj_dosen):
        self.__obj_dosen = obj_dosen
    
    # Get obj_mhs
    def get_obj_mhs (self):
        return self.__obj_mhs
    
    # Set obj_mhs
    def set_obj_mhs (self, obj_mhs):
        self.__obj_mhs = obj_mhs

    # Get obj_course
    def get_obj_course (self):
        return self.__obj_course
    
    # Set obj_course
    def set_obj_course (self, obj_course):
        self.__obj_course = obj_course
    
    # Get kode
    def get_kode (self):
        return self.__kode
    
    # Set kode
    def set_kode (self, kode):
        self.__kode = kode
    
    # Public Method #
    def printProdi(self):
        print("Code             : ", self.get_kode())
        self.__obj_course.printCourse()