#include"School.h"
using namespace std ; 

/* linked lsit functions */

/* adding  creation */
Employer* EmployerNode(void){
    return new Employer;
}
Student* StudentNode(void){
    return new Student;
} 
void createEmployer(Employer* NewEmployer){
    static int Employer_ID = 0 ; 
    NewEmployer->IncrementEmployerCount(); 
    NewEmployer->SetPersonID(++Employer_ID);

}
void createStudent(Student* NewStudent); 


/*deleting functions */
void DeleteStudent(Student* StudentList , std::string name); 
void DeleteEmployer(Student* EmployerList , std::string name); 

/*showing*/
void ShowStudent(Student* StudentList , std::string name);
void ShowAllStudents(Student* StudentList); 
void ShowEmployer(Employer* EmployerList, std::string name);
void ShowAllEmployers(Employer * EmployerList) ;

/* editing functions */
void EditEmployer (int EmployerID);
void EditStudent(int StudentID); 