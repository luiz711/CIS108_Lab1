// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter Your First Name.";
	string first_name;
	cin >> first_name;
	cout << "Enter Your Last Name.";
	string last_name;
	cin >> last_name;
	cout << "Enter Your age.";
		int age;
		cin >> age;
		cout << "How Confident Are you in programmers in percentage(0-100)";
		int confidence;
		cin >> confidence;
		cout << "Hello" << first_name << "" << last_name << ",nice to meet you!";
		cout << "you might be" << age << "in human years , but in dog years you are" << age * 7 << ".";
		double confidence_deci = static_cast<double>(confidence) / 100;
		if (confidence_deci < 0.5)
			cout << "i agree, programmers can't be trusted!";
		else
		cout << "writing good code takes hard work!";
		return(0);

				
  
		
		





}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file