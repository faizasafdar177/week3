#include<iostream>
using namespace std;
main(){
float i,p,c;
cout<<"Enter Imposter Count: ";
cin>>i;
cout<<"Enter Player Count: ";
cin>>p;
c=100*(i/p);
cout<<"Chance of being an imposter: "<<c<<"%";
}