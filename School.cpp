#include<iostream>
#include<string>
#include"School.h"
/********************* person class functions **********/
void Person:: SetPersonName(string name ){

}
void Person::SetpersonAge(int age){

} 
string Person::GetPersonName(void){
}
Person:: static void IncrementStudentCount(void){
} 
static void IncrementEmployerCount(void){
}
static void DecrementStudentCount(void){
} 
static void DecrementEmployerCount(void){
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
