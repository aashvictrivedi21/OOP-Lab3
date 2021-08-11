#include <iostream>
using namespace std;
float cal_avg()
{
	int n;
	 cout<<"\nHow many students";
	 cin>>n;
	 int *marks = new int(n);
	 int i, sum = 0;
	 float avg=0;
	 cout<<"\nEnter the marks for 10 students:";
	 for(i=0;i<n;i++)
	 {
	 	cin>>marks[i];
	 	sum = sum + marks[i];
	 }
	 avg = (sum / n);
		 delete [] marks;
	 return avg;
}
int main()
{
	 float avg = cal_avg();
	 cout<<"\nCalculating Average marks for the subject=";
	 cout<<avg;
	 

	 return 0;

}

