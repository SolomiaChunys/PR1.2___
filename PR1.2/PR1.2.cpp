#include <iostream>
#include "Лічильник.h"

using namespace std;

int main()
{
	Лічильник m;

	m.Read();
	m.Display();

	cout << "counter :" << m.result() << endl;
	cout << "return counter :" << m.getCounter() << endl;

	return 0;
}