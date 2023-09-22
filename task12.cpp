#include<iostream>
using namespace std;
main(){
float sm,w,h,n,m;
cout<<"Number of square meters you can paint: ";
cin>>sm;
cout<<"Width of the single wall (in meters): ";
cin>>w;
cout<<"Height of the singal wall (in meters): ";
cin>>h;
m=w*h;
n=sm/m;
cout<<"Number of walls you can paint: "<<n;
}
