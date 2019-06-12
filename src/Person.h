/*
 * Person.h
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>

using namespace std;

class Person
{
private:
	string name;
	int age;
	string sex;

public:
	Person();
	//Person(string name, int age, string sex);		// Commented out due to the similarities between con 2 and con 3.

	inline
	Person(string name, int age = 0, string sex = "Male")				// Lets call this constructor 3.
	{																		// This has default values set in the
		this->name = name;													// parameters, so if no values are passed as
		this->age = age;													// arguments then the defaults will be
		this->sex = sex;
	};

	string toString();

	virtual ~Person();
};

#endif /* PERSON_H_ */
