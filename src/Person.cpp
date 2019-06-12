/*
 * Person.cpp
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#include<sstream>
#include "Person.h"

// Default constructor, the old fashioned way, lets call this constructor 1.
Person::Person()
{
	name = "Undefined";
	age = 0;
	sex = "Undefined";
}

/*
 * Overloaded constructor, not inline, lets call this constructor 2. The compiler will not allow constructor 3 and constructor 2 to be in code at the same
 * time due to their similarity.
 */
//Person::Person(string name, int age)
//{
//	this->name = name;
//	this->age = age;
//	sex = "Male";
//}

Person::~Person()
{
	cout << "A person object was destroyed" << endl;
}

string Person::toString()
{
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << ", Age: ";
	ss << age;
	ss << ", Sex: ";
	ss << sex;

	return ss.str();
}

