#pragma once
class Лічильник
{
private:
	int counter;
	int min;
	int max;
public:
	int getCounter() const { return counter; }
	int getMin() const { return min; }
	int getMax() const { return max; }

	void setCounter(int value);
	void setMax(int value);
	void setMin(int value);

	void Read();
	bool Init(int a, int b,int c);
	void Display() const;

	
	double result();
};

