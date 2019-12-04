#pragma once
#ifndef MYTIME20_H_
#define MYTIME20_H_
#include <iostream>
class Time
{
private:
	int hours_m;
	int minutes_m;
public:
	Time();
	Time(int h, int min);
	void Add_min(int m);
	void add_Hrs(int hr);
	void Reset(int h = 0, int min = 0);
	Time Sum(const Time & t) const;
	friend Time operator+(const Time & t, const Time & r);
	friend Time operator-(const Time & t, const Time & r);
	friend Time operator*(const Time & t, double n);
	friend std::ostream & operator<<(std::ostream & os, const Time & t);
	friend Time operator*(double m, const Time& t)
	{
		return t * m;
	}
	void Show();
	~Time();
};

#endif // !MYTIME0_H_#pragma once
