/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project EXTRA HEADER STACK TEMPLATE
*/
#pragma once
#ifndef STACKPAC
#define STACKPAC

template<class T, int n>
class STACK
{
private:
	T a[n];//T for typ, n for length
	int counter;

public:
	void clearStack()
	{
		counter = 0;
	}//end clearStack

	bool emptyStack()
	{
		return (counter == 0) ? true : false;
	}//end emptyStack

	bool fullStack()
	{
		return (counter == n) ? true : false;
	}//end fullStack

	void pushStack(T x)
	{
		a[counter] = x;
		counter++;
	}//end pushStack

	T popStack()
	{
		counter--;
		return a[counter];
	}//end popStack
};//end class STACK


#endif
