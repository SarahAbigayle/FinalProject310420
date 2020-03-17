#ifndef MISCCLASSES_H
#define MISCCLASSES_H

using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;
public:
	void selectDate();
};

enum Color
{
	blue,
	red,
	pink,
	green
};

#endif