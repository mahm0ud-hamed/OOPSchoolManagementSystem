#include"LinkedList.h"
using namespace std ; 

/* head pointers */
Employer* Ehead = nullptr;
Student* Shead = NULL ; 
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
    string name , PosName , Dept , AssSubj; 
    int age ; 
    Employer* Temp ; 
    NewEmployer->IncrementEmployerCount(); 
    NewEmployer->SetPersonID(++Employer_ID);
    cout<<"enter employer name"<<endl; 
    cin>>name ; 
    NewEmployer->SetPersonName(name);
    cout<<"enter employer age"<<endl; 
    cin>>age ; 
    NewEmployer->SetpersonAge(age);
    cout<<"enter employer position name"<<endl; 
    cin>>PosName ; 
    NewEmployer->SetEmployerPosition(PosName); 
    cout<<"enter employer department"<<endl; 
    cin>>Dept ; 
    NewEmployer->SetEmployerDepartment(Dept); 
    cout<<"enter employer teaching subject"<<endl; 
    cin>>AssSubj ; 
    NewEmployer->SetAssignedSubject(AssSubj); 
    NewEmployer->EmployerNext = NULL ;
    if(Ehead == NULL){
        Ehead = NewEmployer;
    }
    else if(Ehead != NULL){
        Temp = Ehead ; 
        while(Temp->EmployerNext){
            Temp = Temp->EmployerNext;
        }
        Temp->EmployerNext= NewEmployer ; 

    }
}
void createStudent(Student* NewStudent){
    Student* Temp ; 
    string name , Sbjtcs[Subjects]; 
    int age  ,  SbjScore[Subjects]; 
    static int StudentID= 1000; 
    NewStudent->IncrementStudentCount(); 
    NewStudent->SetPersonID(++StudentID);
    cout<<"enter Student name"<<endl; 
    cin>>name ; 
    NewStudent->SetPersonName(name);
    cout<<"enter Student  age"<<endl; 
    cin>>age ; 
    NewStudent->SetpersonAge(age);
    cout<<"enter Student  subjects"<<endl;
    NewStudent->SetSubjectsName(Sbjtcs);
    cout<<"enter subjects score "<<endl; 
    NewStudent->SetSubjectsScore(SbjScore);
     NewStudent->StudentNext = NULL ;
    if(Shead == NULL){
        Shead = NewStudent;
    }
    else if(Shead != NULL){
        Temp = Shead ; 
        while(Temp->StudentNext){
            Temp = Temp->StudentNext;
        }
        Temp->StudentNext= NewStudent ; 

    }

}


/*deleting functions */
void DeleteStudent(Student* StudentList , std::string name); 
void DeleteEmployer(Student* EmployerList , std::string name); 

/*showing*/
void ShowStudent(Student* StudentList , std::string name);
void ShowAllStudents(Student* StudentList); 

void ShowEmployer(Employer* EmployerList, std::string name){
    Employer* Temp =  EmployerList ; 
        cout<<"out while loop "<<endl;
    while(Temp->GetPersonName() != name){
        cout<<"in while loop "<<endl;
        Temp = Temp->EmployerNext ; 
    }
    cout<<"******************************************************"<<endl;
    cout<<"employer name is "<< Temp->GetPersonName()<<endl; 
    cout<<"employer age is " <<  Temp->GetPersonAge()<<endl; 
    cout<<"employer ID is "  <<  Temp->GetPersonID()<<endl; 
    cout<<"employer position is "  <<  Temp->GetEmployerPosition()<<endl; 
    cout<<"employer Department is "  <<  Temp->GetEmployerDepartment()<<endl; 
    cout<<"employer teaching subject is "  <<  Temp->GetAssignedSubject()<<endl; 
    

}
void ShowAllEmployers(Employer * EmployerList){
    Employer * Temp = EmployerList ; 
    while(Temp != nullptr){
        ShowEmployer(Temp , Temp->GetPersonName()); 
        Temp = Temp->EmployerNext ; 
    }
}

/* editing functions */
void EditEmployer (int EmployerID);
void EditStudent(int StudentID); 