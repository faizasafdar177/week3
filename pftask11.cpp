#include<iostream>
using namespace std;
main(){
int world_population;
int birth_rate;
cout<<"Enter the current world population: ";
cin>>world_population;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>birth_rate;
int decades;
decades=birth_rate*12*30;
int population;
population=decades+world_population;
cout<<"The population in three decades will be: "<<population;
}

