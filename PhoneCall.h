#pragma once
#include <iostream>
#include <string>
using namespace std;

class PhoneCall
{
	int first;
	float second;
public:
	PhoneCall()
	{
		this->first = 1;
		this->second = 2;
	}
	PhoneCall(int first, float second)
	{
		this->first = first;
		this->second = second;
	}
	~PhoneCall() {}

	float cost()
	{
		return this->first * this->second;
	}

	void print()
	{
		cout << "Продолжительность телефонного разговора в минутах: " << this->first << endl;
		cout << "Стоимость одной минуты разговора в рублях: " << this->second << endl;
		cout << "Стоимость разговора: " << this->cost() << " рублей" << endl;
	}
};
