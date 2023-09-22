#include<iostream>
using namespace std;
main(){
float vp,fp,tv,tf,e;
cout<<"Enter vegetable price per kilograms (in coins): ";
cin>>vp;
cout<<"Enter fruit price per kilograms (in coins): ";
cin>>fp;
cout<<"Enter total kilograms of vegetables: ";
cin>>tv;
cout<<"Enter total kilograms of fruits: ";
cin>>tf;
e=(vp*tv+fp*tf)/1.94;
cout<<"Total earnings in Rupees (Rps): "<<e;
}