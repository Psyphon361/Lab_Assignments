#include<iostream>
using namespace std;

struct Student
{
	private:
		
	char name[20];
	int roll;
	float marks;
	
	public:
	
	void setStudentData()
	{
		cout << "Enter name:\n";
		cin >> name;
		cout << "Enter roll number:\n";
		cin >> roll;
		cout << "Enter marks:\n";
		cin >> marks;
	}
	
	void getStudentData()
	{
		cout << endl << name << endl << roll << endl << marks << endl;
	}
	
};

int main()
{
	Student s[3];
	int i;

	for(i = 0; i < 3; ++i)
	{
		s[i].setStudentData();
	}
	
	for(i = 0; i < 3; ++i)
	{
		s[i].getStudentData();
	}	
}



