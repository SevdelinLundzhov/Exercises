/*
 * HugeInteger.h
 *
 *  Created on: 3.07.2017 ã.
 *      Author: Venci
 */

#ifndef HUGEINTEGER_H_
#define HUGEINTEGER_H_

#include <iostream>
using namespace std;

static const int MAXINTEGER = 40;

class HugeInteger {
public:
	HugeInteger();
	virtual ~HugeInteger();

	  void HugeInteger::input(int[MAXINTEGER]);
	    void HugeInteger::output(void);

	    bool isZero(void);
	    bool HugeInteger::isEqual(HugeInteger other);
	    bool HugeInteger::isNotEqual(HugeInteger other);
	    bool HugeInteger::isGreaterThan(HugeInteger other);
	    bool HugeInteger::isLessThan(HugeInteger other);
	    bool HugeInteger::isGreaterThanOrEqual(HugeInteger other);
	    bool HugeInteger::isLessThanOrEqual(HugeInteger other);

	    HugeInteger HugeInteger::add(HugeInteger other);
	    HugeInteger HugeInteger::subtract(HugeInteger other);
	    HugeInteger HugeInteger::multiply(HugeInteger other);
	    HugeInteger HugeInteger::divide(HugeInteger other);

	private:
	    bool isPositive;
	    int hugeIntergerOne[MAXINTEGER];
};

#endif /* HUGEINTEGER_H_ */
