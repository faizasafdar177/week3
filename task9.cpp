#include<iostream>
using namespace std;
main(){int digit;
cout<<"Enter a 4-digit number: ";
cin>>digit;
int r1=digit%10;
int q1=digit/10;
int q2=q1/10;
int r2=q1%10;
int q3=q2/10;
int r3=q2%10;
int r4=q3/10;
int sum=r1+r2+r3+r4;
cout<<"Sum of individual digits: "<<sum;
}
