#include<iostream>
using namespace std;
main(){
float initial,acc,time,final;
cout<<"Enter Initial Velocity (m/s): ";
cin>>initial;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acc;
cout<<"Time (s): ";
cin>>time;
final=(time*acc)+initial;
cout<<"Final Velocity (m/s): "<<final;
}