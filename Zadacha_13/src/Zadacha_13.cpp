//============================================================================
// Name        : Zadacha_13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class IntegerSet {



bool a[1000+1];
public:




void insertElement(int i){ a[i] = true;}

// is set empty
int isEmpty() {

for (int i =1; i< sizeof a/sizeof a[0]; i++)

if (a[i]== true)

return false;
else
return true;
}

// does element i exist
int checkExistant(int i) {

if (a[i]== true)

return 1;
else
return 0;
}

// number of elements in set
int card() {

int n =0;

int i = 0;

for (i =1; i< sizeof a/sizeof a[0]; i++)

if (a[i]== true)

n++;

return n;

}

// make set empty
void clear() {

for (int i =1; i< sizeof a/sizeof a[0]; i++)



a[i]= false;
}
int fill();// " HERE THE problem "

// remove element i from set
int deleteElement(int i) {
a[i] = false;
return i;
}
// constructor
IntegerSet() {

	int i = 0;

	for (i =1; i< sizeof a/sizeof a[0]; i++)

	a[i ] = false;

}

	// union
	IntegerSet setUnion(IntegerSet &first, IntegerSet &second) {
	int i;
	IntegerSet result;
	for (i = 1; i< sizeof a /sizeof a [0]; i++)
	if (first. a[i] == true)
	result. a[i] = true;

	for (i = 1; i< sizeof a /sizeof a [0]; i++)
	if (second. a[i] == true)
	result. a[i] = true;

	return result;
}

// intersection
IntegerSet intersection( IntegerSet &first, IntegerSet &second) {
	int i;
	IntegerSet result;
	for (i = 1; i< sizeof a /sizeof a [0]; i++)
	if (first.a[i] == true && second. a[i]== true)
	result.a[i] = true;
	return result;
	}
	int sum() {
	int i, s;
	for (s=0, i = 1; i< sizeof a /sizeof a [0]; i++)
	if (a[i]== true)
	s += i;
	return s;
	}

	friend bool isEqualTo(IntegerSet &first, IntegerSet &second);

};

bool isEqualTo(IntegerSet &first, IntegerSet &second)
{
	int i;
	if (first.card() != second.card())
	return false;
	for (i = 1; i <sizeof first.a/sizeof first.a[0]; i++) {
		if ((first. a[i] == true && second. a [i] == true)
		|| (first. a[i] == false && second. a [i] == false))
	continue;
	return false;
	}
	return true;
}

int main()
	{
	IntegerSet a;
	IntegerSet b;
	IntegerSet c;
	int i;

	// Perform numerous tests as asked for by the assignment
	// test InsertElement()
	a.insertElement(2);

	// test isEmpty()
	if (a.isEmpty())
	cout << "a is empty\n";
	else
	cout << "a is not emtpy\n";

	if (b.isEmpty())
	cout << "b is empty\n";
	else
	cout << "b is not empty\n";

	// test clear()
	a.clear();
	if (a.isEmpty())
	cout << "a is empty\n";
	else
	cout << "a is not emtpy\n";

	a.insertElement(10);
	a.insertElement(20);
	cout << "total elements in a " << a.card() << endl;

	// test checkExistant()
	if(a.checkExistant(10))
	cout << "10 is in set a\n";
	else
	cout << "10 is in not set a\n";

	if(a.checkExistant(13))
	cout << "13 is in set a\n";
	else
	cout << "13 is in not set a\n";

	a.clear();
	b.clear();
	a.insertElement(9);
	a.insertElement(15);
	a.insertElement(100);
	a.insertElement(200);

	b.insertElement(15);
	b.insertElement(200);
	b.insertElement(300);
	// test UNION
	c = c.setUnion(a, b);
	cout << "Union of A and B\n";
	for(i =1; i<=1000; i++)
	if (c.checkExistant(i))
	cout << i<<endl;
	// test INTERSECTION
	c = c.intersection(a, b);
	cout << "Intersection of A and B\n";
	for(i =1; i <=1000; i++)
	if (c.checkExistant(i))
	cout << i<<endl;

	a.clear();
	b.clear();
	a.insertElement(5);
	a.insertElement(7);
	b.insertElement(5);
	b.insertElement(3);
	if (isEqualTo(a, b))
	cout << "a is equal b" << endl;
	else
	cout << "a is not equal b" << endl;

	a.insertElement(3);
	b.insertElement(7);
	// test isEqualTo()
	if (isEqualTo(a, b))
	cout << "a is equal b" << endl;
	else
	cout << "a is not equal b" << endl;

return 0;
}
