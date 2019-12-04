#include "Time.h"
#include <iostream>



Time::Time()
{
	hours_m = minutes_m = 0;
}

Time::Time(int h, int min)
{
	hours_m = h;
	minutes_m = min;
}

void Time::Add_min(int m)
{
	minutes_m += m;
	hours_m += minutes_m / 60;
	minutes_m = minutes_m % 60;
}

void Time::add_Hrs(int hr)
{
	hours_m += hr;
}

void Time::Reset(int h, int min)
{
	hours_m = h;
	minutes_m = min;
}

Time Time::Sum(const Time & t) const
{
	Time sum;
	sum.minutes_m = minutes_m + t.minutes_m;
	sum.hours_m = hours_m + t.hours_m + sum.minutes_m / 60;
	sum.minutes_m = sum.minutes_m % 60;
	return sum;
}

 Time operator+(const Time & t, const Time &r)
{
	Time sum;
	sum.minutes_m = t.minutes_m + r.minutes_m;
	sum.hours_m = t.hours_m + r.hours_m + sum.minutes_m / 60;
	sum.minutes_m = sum.minutes_m % 60;
	return sum;
}

void Time::Show()
{
	std::cout << hours_m << " godzin " << minutes_m << " minut." << std::endl;
}

Time operator-(const Time & t, const Time & r)
{
	long int total_1, total_2;

	total_1 = t.minutes_m + t.hours_m * 60;
	total_2 = r.minutes_m + r.hours_m * 60;

	return Time((total_1 - total_2) / 60, (total_1 - total_2) % 60);
}

Time operator* (const Time &t,double m)
{
	long int min;
	min = (t.minutes_m + t.hours_m * 60)*m;
	return Time(min / 60, min % 60)
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
	os << t.hours_m << " godzin " << t.minutes_m << " minut." << std::endl;
	return os;
}

Time::~Time()
{

}

