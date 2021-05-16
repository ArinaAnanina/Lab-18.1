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
		cout << "����������������� ����������� ��������� � �������: " << this->first << endl;
		cout << "��������� ����� ������ ��������� � ������: " << this->second << endl;
		cout << "��������� ���������: " << this->cost() << " ������" << endl;
	}
};
