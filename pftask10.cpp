#include<iostream>
using namespace std;
main()
{string cricket_team;
int wins;
int draws;
int losses;
int total_points;
cout<<"Enter the name of the cricket team: ";
cin>>cricket_team;
cout<<"Enter the number of wins: ";
cin>>wins;
cout<<"Enter the number of draws: ";
cin>>draws;
cout<<"Enter the number of losses: ";
cin>>losses;
total_points=(3*wins)+(0*losses)+(1*draws);
cout<<cricket_team<<" has obtained "<<total_points<<" points in the Asia Cup tournament.";
}
