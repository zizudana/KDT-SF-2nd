#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "Person.h"
#include <iostream>
using std::string;

class Student : public Person {
public:
	Student(string name);
};

#endif