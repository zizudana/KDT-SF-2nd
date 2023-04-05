#pragma once 

#ifndef __PERSON_H__
#define __PERSON_H__
#include <iostream>

class Person {
	static int cnt;
	std::string name;
public:
	Person(std::string name);
	static int getCnt();
	void plusCnt();
};

#endif