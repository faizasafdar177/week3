#include<iostream>
using namespace std;
main(){float sides;
cout<<"Enter the number of sides of the polygon: ";
cin>>sides;
float int_angles;
int_angles=(sides-2)*180;
cout<<"The sum of internal angles of a "<<sides<<"-sided polygon is: "<<int_angles<<" degrees";
}
