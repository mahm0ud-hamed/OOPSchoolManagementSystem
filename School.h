#include<iostream>
#include <string>
#define Subjects 6

/* class person the parent class */
class Person {
    private :
        std:: string name ; 
        int age ;
        int ID ;  

    public:
        Person* PersonNext ; 
    static int StudentCount ; 
    static int EmployersCount ; 
    void SetPersonName(std:: string name ); 
    void SetpersonAge(int age); 
    void SetPersonID(int ID);
    std::string GetPersonName(void);
    static void IncrementStudentCount(void); 
    static void IncrementEmployerCount(void); 
    static void DecrementStudentCount(void); 
    static void DecrementEmployerCount(void); 
    Person();
    
};

/* employer calss inherite from the person class a public inheritance */
class Employer :public Person{
    private: 
    std::string PositionName ; 
    std::string Department; 
    std::string AssingnedSubject ; 
    public :
    Employer* EmployerNext ; 
    void SetEmployerPosition(std:: string Position );
    void SetEmployerDepartment(std::string Department );
    void SetAssignedSubject(std::string Subject);
    std:: string GetEmployerPosition(void);
    std:: string GetEmployerDepartment(void );
    std:: string GetAssignedSubject(void);


};

/* student class inherite from person class public inheritance  */
class Student : public Person{
    private :  
   std:: string Subject[Subjects]; 
    int SubjectScore[Subjects]; 

    public: 
    Student* StudentNext ;
    void SetSubjectName(std::string Subject, int position); 
    void SetSubjectScore(int Score, int position); 
    void SetSubjectsName(std::string Subject[]); 
    void SetSubjectsScore(int Score[]); 
    int  GetSubjectScore( int Position); 
   std:: string GetsubjectName(int position); 

};

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

