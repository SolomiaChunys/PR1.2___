#include "˳�������.h"
#include <iostream>

using namespace std;

void ˳�������::setCounter(int value)
{
		counter = value;
}
void ˳�������::setMin(int value)
{
		min = value;
}
void ˳�������::setMax(int value)
{
		max = value;
}
bool ˳�������::Init(int a, int b, int c)
{
	if (a <= c && c < b)
	{
		counter = c;
		min = a;
		max = b;
		return true;
	}
	else {
		return false;
	}
}
void ˳�������::Display() const
{
	cout << endl;
	cout << "counter = " << counter << endl;
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;
	cout << endl;
}

void ˳�������::Read()
{
	int a,b,c;
	cout << endl;
	cout << "counter = "; cin >> c;
		cout << "min = "; cin >> a;
		cout << "max = "; cin >> b;
		Init(a, b, c);
}
double ˳�������::result()
{
	return counter++;

}