#include"School.h"
using namespace std ; 
/* static variable definition */
int Person :: StudentCount =0 ; 
int Person :: EmployersCount =0 ;
/********************* person class functions **********/
 /* person constructor*/
Person:: Person(){
        std:: cin>>name ; 
} 
void Person:: SetPersonName(string name ){
    this ->name = name ; 
}
void Person::SetpersonAge(int age){
    this ->age = age ; 
} 
string Person::GetPersonName(void){
    return this->name ; 
}
void Person:: IncrementStudentCount(void){
    StudentCount ++ ; 
} 
void Person:: IncrementEmployerCount(void){
    EmployersCount++ ; 
}
void Person:: DecrementStudentCount(void){
    StudentCount--;
} 
void Person:: DecrementEmployerCount(void){
    EmployersCount-- ; 
} 

void Person:: SetPersonID(int ID){
    this->ID = ID;
}

/************* the employer calss functions ************/
void Employer::SetEmployerPosition(string Position ){
    this->PositionName= Position ; 
}

void Employer::SetEmployerDepartment(string Department ){
    this ->Department = Department;
}

void Employer::SetAssignedSubject(string Subject){
    this -> AssingnedSubject = Subject ; 
}

 string Employer:: GetEmployerPosition(void){
    return PositionName ;
 }

 string Employer:: GetEmployerDepartment(void){
    return Department ; 
 }

 string Employer:: GetAssignedSubject(void){
    return AssingnedSubject ; 
 }

 /***********************************************************/

 /***************** student class functions *****************/
void Student :: SetSubjectName(string Subject , int position ){
    this ->Subject[position] = Subject ; 
} 
void Student:: SetSubjectScore(int Score , int position){
     this->SubjectScore[position] = Score ; 
}
void Student:: SetSubjectsName(string Subject[]){
    int i =0 ; 
    while(i < Subjects ){
        this->Subject[i] = Subject[i];
        i++ ;
    }

}
void Student:: SetSubjectsScore(int Score[]){
    int i =0 ; 
    while(i < Subjects ){
        this->SubjectScore[i] = Score[i];
        i++ ;
    }
} 

int Student::  GetSubjectScore( int Position){
    return SubjectScore[Position] ;
} 
string Student:: GetsubjectName(int position){
    return Subject[position] ; 

} 
