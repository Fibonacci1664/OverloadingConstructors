/*
 * Main.cpp
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person person1;						// Using constructor 1.

	cout << person1.toString() << endl;

	Person person2("Andy", 30);			// Using constructor 2 or constructor 3, depending on which one is commented out.

	cout << person2.toString() << endl;

	Person person3("Pete");				/*
										 * Using the default values that are built into the parameters of con 3 which are automatically used when no
										 * arguments are passed.
										 */

	cout << person3.toString() << endl;




	return 0;
}


