#include "Лічильник.h"
#include <iostream>

using namespace std;

void Лічильник::setCounter(int value)
{
		counter = value;
}
void Лічильник::setMin(int value)
{
		min = value;
}
void Лічильник::setMax(int value)
{
		max = value;
}
bool Лічильник::Init(int a, int b, int c)
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
void Лічильник::Display() const
{
	cout << endl;
	cout << "counter = " << counter << endl;
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;
	cout << endl;
}

void Лічильник::Read()
{
	int a,b,c;
	cout << endl;
	cout << "counter = "; cin >> c;
		cout << "min = "; cin >> a;
		cout << "max = "; cin >> b;
		Init(a, b, c);
}
double Лічильник::result()
{
	return counter++;

}