#include "time.h"

time::time() {
       minutes = hours = seconds = 0;
}

time::~time()
{
}

void time::setSeconds(int seconds) {
        seconds = s;
}

int time::getSeconds() {
        return seconds;
}

void time::setMinutes(int minutes) {
	minutes = m;
} 

int time::getMinutes(){
	return minutes;
}

void time::setHours(int hours) {
	hours = h;
}

int time::getHours() {
	return hours;
}


