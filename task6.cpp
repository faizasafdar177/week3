#include<iostream>
using namespace std;
main(){
float s,c,a,fp,fs;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>s;
cout<<"Enter the cost of the bag: $";
cin>>c;
cout<<"Enter the area in squre feet that can be covered by the bag: ";
cin>>a;
fp=c/s;
cout<<"Cost of fertilizing per pound: $"<<fp;
fs=s*a;
cout<<"Cost of fertilizing per square foot: $"<<fs;
}
