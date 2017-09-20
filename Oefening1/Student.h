#pragma once
#include "Persoon.h"


class Student : public Persoon
{
public:
	Student();
	
	void printmessage();

	Persoon printPersoon;
};

