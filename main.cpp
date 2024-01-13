#include<iostream>
#include"LinkedList.h"
using namespace std ;

extern Employer* Ehead ; 
extern Student*  Shead ;
int main(){
	
	createEmployer(EmployerNode());
	//createEmployer(EmployerNode());
	ShowEmployer(Ehead,"mahmoud");
}