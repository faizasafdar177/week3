#include<iostream>
using namespace std;
main(){
string movie;
int a,c,na,nc,p;
cout<<"Enter the movie name: ";
cin>>movie;
cout<<"Enter the adult ticket price: $";
cin>>a;
cout<<"Enter the child ticket price: $";
cin>>c;
cout<<"Enter the number of adult ticket sold: ";
cin>>na;
cout<<"Enter the number of child ticket sold: ";
cin>>nc;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>p;
cout<<"Movie: "<<movie;
int tg,d,rd;
tg=(a*na)+(c*nc);
d=tg/10;
rd=tg-d;
cout<<"Total amount generated from ticket sales: $"<<tg;
cout<<"Donation to charity (10%): $"<<d;
cout<<"Remaining amount after donation: $"<<rd;
}
