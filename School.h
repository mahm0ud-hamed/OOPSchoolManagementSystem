#include<iostream>
#include <string>
#define Subjects 6
class Person {
    private :
        std:: string name ; 
        int age ; 

    public:
        Person* PersonNext ; 
    static int StudentCount ; 
    static int EmployersCount ; 
    void SetPersonName(std:: string name ); 
    void SetpersonAge(int age); 
    std::string GetPersonName(void);
    static void IncrementStudentCount(void); 
    static void IncrementEmployerCount(void); 
    static void DecrementStudentCount(void); 
    static void DecrementEmployerCount(void); 
};

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
Employer* CreateNewEmployer(void); 
Student* CreateNewStudent(void); 

/*deleting functions */
void DeleteStudent(Student* StudentList , string name); 
void DeleteEmployer(Student* EmployerList , string name); 

/*showing*/
void ShowStudent(Student* StudentList , string name);
void ShowAllStudents(Student* StudentList); 
void ShowEmployer(Employer* EmployerList, string name);
void ShowAllEmployers(Employer * EmployerList) ;

/* editing functions */

