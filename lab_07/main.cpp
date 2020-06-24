#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "time.h"
using namespace std;

void print24Hour(time& time) {
	//print time in HH:MM:SS format
  cout << setfill('0') << setw(2) << time.getHour() << ":" << setfill('0') << setw(2) << time.getMinutes() <<":" << setfill('0') << setw(2) << time.getSeconds() << endl;
  return;
}

bool getTimeFromUser(time& time) {
    string inputtime;
    cin >> inputtime;

    int strLength = inputtime.length();

    for (int i = 0; i < strLength; i++) {
        if (isalpha(inputtime[i])) {
            cout << "Found alphabet letter" << endl;
            return 0;
        }
    }

    //get hour of string
    int first_colon = inputtime.find(':');
    string hours = inputtime.substr(0, first_colon);

    //get minutes of string
    int second_colon = inputtime.find_last_of(':');
    string minutes = inputtime.substr(first_colon + 1, second_colon);

    //get seconds of string
    string seconds = inputtime.substr(second_colon + 1);

    int hours = atoi(hours.c_str()); //convert hour string into integer
    int minutes = atoi(minutes.c_str());
    int seconds = atoi(seconds.c_str());

    if (!(hours < 24 && hours > -1) || !(minutes > -1 && minutes < 60) || !(seconds > -1 && seconds < 60)) {
        return 0;
    }

    time.setHours(hours);
    time.setMinutes(minutes);
    time.setSeconds(seconds);

    return 1;
}


int main()
{
    time start_time;
    time end_time;

    //ask user for start time

    cout << "Enter the start time for the lecture (format is HH:MM:SS) : " << endl;    


    //check if user input is valid
    if (!getTimeFromUser(start_time)) {
      //if time is not valid, display error message, exit program
    	cout << "Invalid start time input" << endl;
    	return 0;
    }

   //ask user for end time
   cout << "Enter the end time for the lecture (format is HH:MM:SS) : " << endl;

   //check if user input is valid
   if (!getTimeFromUser(end_time)) {
      //if time is not valid, display error message, exit program
      cout << "Invalid end time input" << endl;
      return 0;
   }

   cout << "The lecture starts at ";
   print24Hour(start_time);
   cout << " and ends at ";
   print24Hour(end_time);

return 0;
}
