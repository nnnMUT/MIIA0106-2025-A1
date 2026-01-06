#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	string name;
	int age;
	string stuID;
	int score;
	string grade;

	cout << "Enter name : ";
	cin >> name;
	cout << "Enter Age : ";
	cin >> age;
	cout << "Enter Student ID : ";
	cin >> stuID;
	cout << "Enter score : ";
	cin >> score ;

	if (score >= 90) 
	{
		grade = "เกรด A" ;
	}
	else if (score >= 80) 
	{
		grade = "เกรด B" ;
	}
	else if (score >= 70)
	{
		grade = "เกรด C" ;
	}
	else 
	{
		grade = "เกรด F" ;
	}
	
  cout << "Student Report : " << endl;
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Student ID: " << stuID << endl;
  cout << "Grade: " <<grade << endl;
  cout << "------------------"<< endl;

  return 0;


}




