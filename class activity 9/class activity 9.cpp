// class activity 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Elegibility for a job

#include <iostream>
using namespace std;
int main()
{
	string citizenship;
	string degree;
	int experience_years;
	cout << "Enter your citizenship: ";
	cin >> citizenship;
	cout << "Enter your education level: ";
	cin >> degree;
	cout << "Enter your experience years: ";
	cin>> experience_years;
	if (citizenship != "US" && (degree != "bachelor's" || experience_years < 2)) {
		cout << "Sorry you are not eligible to apply for this job." << endl;
	}
	else if (citizenship != "US" && (degree == "bachelor's" || experience_years >= 2)) {
		cout << "Sorry this is for US citizens only." << endl;
	}
	else if (citizenship == "US" && (degree != "bachelor's" || experience_years < 2)) {
		cout << "Sorry you do not have the experience we are looking for." << endl;
	}
	else {
		cout << "Congratulations you are hired." << endl;
	}
	return 0;
}

