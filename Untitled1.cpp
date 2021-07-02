#include<iostream>
using namespace std;
int main()
{
	double a,b,c,d,e;
	double percentage,sum;
	cout<<"enter the obtained marks of subject 1:"<<a<<endl;
	cout<<"enter the obtained amrks of subject 2:"<<b<<endl;
	cout<<"enter the obtained marks of subject 3:"<<c<<endl;
	cout<<"enter the obtained marks of subject 4:"<<d<<endl;
	cout<<"enter the obtained marks of subject 5:"<<e<<endl;
	percentage=(a+b+c+d+e)*500/100;
	sum=a+b+c+d+e;
	cout<<"the total percentage of your subject is "<<endl<<percentage;
	cout<<"the total marks of all sunject:"<<endl<<sum;
	return(0);
}