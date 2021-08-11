#include <iostream>
using namespace std;
void inches_to_yards()
{
	int *y = new int;
	int *f = new (int);
	int *i = new (int);
    cout<<"Enter Inches to Convert ::";
    cin>>*i;

    *y=*i/432;
    *i=*i%432;
    *f=*i/12;
    *i=*i%12;

    cout<<"\nAfter Conversion from inches to feet, yards and inches :: \n";
    cout<<"\nYards = "<<*y<<"\n\nFeet = "<<*f<<"\n\nInches = "<<*i<<"\n";
	delete y;
	delete f;
	delete i;
}
int main ()
{
	inches_to_yards();
	return 0;
}
