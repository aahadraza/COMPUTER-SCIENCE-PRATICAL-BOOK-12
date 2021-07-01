#include<iostream>
using namespace std;
int main()
{
    int pr;
    int t;
    float rate;
    double interest;
    cout<<"enter the value of principle:";
    cin>>pr;
    cout<<"enter the time how much you entered the value:";
    cin>>t;
    cout<<"enter the rate :";
    cin>>rate;
    interest=(pr*t*rate)/100;
    cout<<"your interest value is:"<<interest<<endl;
    return(0);
}