// Oefening1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include "Persoon.h"
#include "Docent.h"
#include "Student.h"

using namespace std;

int main()
{
	//cout << "Hello World" << std::endl;

	//Persoon printPersoon;
	Student printStudent;
	Docent printDocent;
	

	// << get in
	// >> get out

	
	//printPersoon.printmessage();
	printDocent.printmessage();
	printStudent.printmessage();


	system("pause");
	//press any key to continue...

	return 0;



}

