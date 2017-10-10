/*Tyler Allen 
CS111
Assignment 2 Program 3
2-17-2015
This program will display the time converted in seconds to hours, minutes, and seconds
*/

#include <iostream> //include iostream file
using namespace std;

int main(){ //main function
  int time;
  int hour;
  int minute;
  //declare variables
  cout<< "Please enter the time in seconds: ";
  //ask for input of time in seconds  
  cin>> time;
  //assign input to time
  hour= time/3600;
  time = time%3600;
  minute = time/60;
  time = time%60;
  //calculate hours, minutes, and seconds
  cout<<endl;
  cout<<hour<<" hours "<<minute<<" minutes "<<time<<" seconds";
  //output hours minutes and seconds in time
  return 0;
}
