#include <iostream>
#include <string.h>
using namespace std;
class student
{
	private:
		int rollno;
		char name[50];
		char division ;
		char program[50];
	public:
void INPUT( char division1 = 'A', char *program1="BTech")
{
	cout<<"\nEnter rollno and name: ";
	cin>>rollno;
	cin>>name;
	division = division1;
	strcpy (program, program1); //copy program1 value to program 
	
}
void display()
{
	cout<<"\nRoll No.:"<<rollno<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Division:"<<division<<endl;
	cout<<"Program: "<<program<<endl;
}
};
int main()
{
	student s1, s2, s3; //objects
	s1.INPUT();
	s2.INPUT();
	s3.INPUT();
	
	cout<<"\nDisplay data for student-1:"<<endl;
	s1.display();
	
	cout<<"\nDisplay data for student-2:"<<endl;
	s2.display();
	
	cout<<"\nDisplay data for student-3:"<<endl;
	s3.display();
	return 0;
	
}
