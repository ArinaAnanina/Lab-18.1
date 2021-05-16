#include <iostream>
#include <string>
#include "PhoneCall.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	system("color F0");
	cout << "Лабораторная 18.1: " << endl;
	PhoneCall* pc = new PhoneCall(15, 6.73);
	PhoneCall* pc2 = new PhoneCall();
	pc->print();

	return 0;
}