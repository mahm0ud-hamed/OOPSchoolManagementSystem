#include<iostream>
#include<string>
#include"School.h"
/* linked lsit functions */

/* adding  creation */
Employer* EmployerNode(void); 
Student* StudentNode(void); 
void createEmployer(Employer* NewEmployer); 
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
