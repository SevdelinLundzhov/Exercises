//============================================================================
// Name        : Zadacha_12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "HugeInteger.h"
using namespace std;

int main()
{
    //create three arrays
    int first[MAXINTEGER] = { 1, 2, 3, 4, 5, 6, 7, 8,
        9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
        33, 34, 35, 36, 37, 38, 39, 40 };
    int second[MAXINTEGER] = { 40, 39, 38, 37, 36, 35,
        34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23,
        22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
        10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int zero[MAXINTEGER] = { 0 };

    //create objects
    HugeInteger myHugeInteger0;
    HugeInteger myHugeInteger1;
    HugeInteger myHugeInteger2;
    HugeInteger myHugeInteger3;

    //input arrays into objects
    myHugeInteger1.input(first);
    myHugeInteger2.input(second);
    myHugeInteger0.input(zero);

    //prints out the words true or false instead of a 1 or 0
    cout << boolalpha << endl;

    //opening statements
    cout << "Welcome!\n" << endl;
    cout << "We will be testing a bunch of different functions on class objects today.\n" << endl;
    cout << "I have created three class objects which are 40 element arrays.\n" << endl;

    system("pause");
    cout << "\n" << endl;

    //prints the elements in each object
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "My three objecs are: \n" << endl;
    cout << "myHugeInteger0:\n" << endl;
    myHugeInteger0.output();
    cout << "\n\nmyHugeInteger1:\n" << endl;
    myHugeInteger1.output();
    cout << "\n\nmyHugeInteger2:\n" << endl;
    myHugeInteger2.output();
    cout << "\n" << endl;

    //intro to check if objecs are zero
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "First, we will test to see if all of the elements in the arrays are equal to \nzero.\n" << endl;

    system("pause");
    cout << endl;

    //test if the all of the object elements are equal to zero
    cout << "Are all of the elements in myHugeInteger0 equal to zero?\n\n";
    cout << myHugeInteger0.isZero() << endl << endl;

    cout << "Are all of the elements in myHugeInteger1 equal to zero?\n\n";
    cout << myHugeInteger1.isZero() << endl << endl;

    cout << "Are all of the elements in myHugeInteger2 equal to zero?\n\n";
    cout << myHugeInteger2.isZero() << endl << endl;

    //intro to adding the objects
    cout << "\n\n" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Now we shall add the different arrays together.\n" << endl;

    system("pause");
    cout << endl;

    //add the different objects
    myHugeInteger3 = myHugeInteger0.add(myHugeInteger1);
    cout << "\nThe sum of myHugeInteger0 plus myHugeInteger1 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger0.add(myHugeInteger2);
    cout << "\nThe sum of myHugeInteger0 plus myHugeInteger2 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger1.add(myHugeInteger2);
    cout << "\nThe sum of myHugeInteger1 plus myHugeInteger2 equals\n\n";
    myHugeInteger3.output();

    //intro to subtracting the objects
    cout << "\n\n" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Now we shall subtract the different arrays.\n" << endl;

    system("pause");

    //subtract the different objects
    myHugeInteger3 = myHugeInteger0.subtract(myHugeInteger1);
    cout << "\nThe difference of myHugeInteger0 minus myHugeInteger1 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger1.subtract(myHugeInteger0);
    cout << "\nThe difference of myHugeInteger1 minus myHugeInteger0 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger0.subtract(myHugeInteger2);
    cout << "\nThe difference of myHugeInteger0 minus myHugeInteger2 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger2.subtract(myHugeInteger0);
    cout << "\nThe difference of myHugeInteger2 minus myHugeInteger0 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger1.subtract(myHugeInteger2);
    cout << "\nThe difference of myHugeInteger1 minus myHugeInteger2 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger2.subtract(myHugeInteger1);
    cout << "\nThe difference of myHugeInteger2 minus myHugeInteger1 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    //intro to multipling the objects
    cout << "\n\n" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Now we shall multiply the different arrays together.\n" << endl;

    system("pause");

    //multiply the different objects
    myHugeInteger3 = myHugeInteger0.multiply(myHugeInteger1);
    cout << "\nThe product of myHugeInteger0 times myHugeInteger1 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger0.multiply(myHugeInteger2);
    cout << "\nThe product of myHugeInteger0 times myHugeInteger2 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger1.multiply(myHugeInteger2);
    cout << "\nThe product of myHugeInteger1 times myHugeInteger2 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    //intro to dividing the objects
    cout << "\n\n" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Now we shall divide the different arrays.\n" << endl;

    system("pause");

    //divide the different objects
    myHugeInteger3 = myHugeInteger0.divide(myHugeInteger1);
    cout << "\nThe dividen of myHugeInteger0 divided by myHugeInteger1 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger0.divide(myHugeInteger2);
    cout << "\nThe dividen of myHugeInteger0 divided by myHugeInteger2 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger1.divide(myHugeInteger2);
    cout << "\nThe dividen of myHugeInteger1 divided by myHugeInteger2 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    myHugeInteger3 = myHugeInteger2.divide(myHugeInteger1);
    cout << "\nThe dividen of myHugeInteger2 divided by myHugeInteger1 equals\n\n";
    myHugeInteger3.output();
    cout << endl;

    //intro to comparing objects
    cout << "\n\n" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Now we shall compare the different arrays.\n" << endl;

    system("pause");
    cout << endl;

    //see if the objecs are equal
    cout << "Is myHugeInteger0 equal to myHugeInteger1? \n\n";
    cout << myHugeInteger0.isEqual(myHugeInteger1) << endl << endl;
    cout << "Is myHugeInteger0 equal to myHugeInteger2? \n\n";
    cout << myHugeInteger0.isEqual(myHugeInteger2) << endl << endl;
    cout << "Is myHugeInteger1 equal to myHugeInteger2? \n\n";
    cout << myHugeInteger1.isEqual(myHugeInteger2) << endl << endl;

    //see if the objects are not equal
    cout << "Is myHugeInteger0 not equal to myHugeInteger1? \n\n";
    cout << myHugeInteger0.isNotEqual(myHugeInteger1) << endl << endl;
    cout << "Is myHugeInteger0 not equal to myHugeInteger2? \n\n";
    cout << myHugeInteger0.isNotEqual(myHugeInteger2) << endl << endl;
    cout << "Is myHugeInteger1 not equal to myHugeInteger2? \n\n";
    cout << myHugeInteger1.isNotEqual(myHugeInteger2) << endl << endl;

    //see if the objects are greater than

    cout << "\nThat is all for today! Thank you for watching!\n" << endl;
    system("pause");
    return 0;
}
