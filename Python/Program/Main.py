from Human import Human
from Sivitas import Sivitas
from Dosen import Dosen
from Mahasiswa import Mahasiswa
from Prodi import Prodi
from Course import Course

students = []
lectures = []
courses = []
majors = []

# data mahasiswa
dataMhs1 = Mahasiswa("123", "Jeon_Jungkook", "Male", "UPI", "jeonjungkook@upi.edu", "2457", "FPMIPA")
dataMhs2 = Mahasiswa("876", "Park_Jimin", "Male", "UPI", "parkjimin@upi.edu", "7698", "FPMIPA")
dataMhs3 = Mahasiswa("456", "Lalisa_Manoban", "Female", "UPI", "lalalalisaa@upi.edu", "2580", "FPMIPA")
students.append(dataMhs1)
students.append(dataMhs2)
students.append(dataMhs3)

#data dosen
dataDosen1 = Dosen("146", "Bang_Shi_Hyuk", "Male", "UPI", "hitmanbang@upi.edu", "987056", 
                   "FPMIPA", "S3", "R_and_Python")
dataDosen2 = Dosen("234", "Lee_Soo_Man", "Male", "UPI", "lsm@upi.edu", "578097", 
                   "FPMIPA", "S3", "Data_Visualization") 
lectures.append(dataDosen1)
lectures.append(dataDosen2)

# data Mata kuliah
dataMatkul1 = Course()
dataMatkul2 = Course()
dataMatkul1.set_nama_matkul("Machine_Learning")
dataMatkul2.set_nama_matkul("Database_Management")
courses.append(dataMatkul1)
courses.append(dataMatkul2)

#data prodi
dataProdi1 = Prodi()
dataProdi1.set_nama_prodi("Computer_Science")
dataProdi1.set_kode("CS234")
dataProdi1.set_obj_dosen(lectures[0])
dataProdi1.set_obj_mhs(students[0])
dataProdi1.set_obj_course(courses[0])

majors.append(dataProdi1)

# Output #
i = 0
for major in majors:
    print(str(i + 1) + ".", major.get_nama_prodi())
    major.printProdi()
    i += 1

j = 0
print("================================")
print("          Student Data          ")
print("================================")
for student in students:
    print(str(j + 1) + ")", student.get_name())
    student.printMahasiswa()
    j += 1

k = 0
print("================================")
print("         Lecturer Data          ")
print("================================")
for lecturer in lectures:
    print(str(k + 1) + ")", lecturer.get_name())
    lecturer.printDosen()
    k += 1