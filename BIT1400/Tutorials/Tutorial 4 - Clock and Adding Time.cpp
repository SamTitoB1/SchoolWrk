#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Tutorial 4 - Auth0r Sanat Boodoo



unsigned int printTime(int clockSec) {
	
	if (clockSec > 86400) {

		clockSec = clockSec - 86400;
	}


	int remMin = (clockSec / 60); // seconds to be into minutes

	int timeSec = (clockSec % 60); // reaminder of seconds to be seconds


	int timeHrs = (remMin / 60); // remainder of minutes to be hours

	int timeMin = (remMin % 60); // modular of reaminder of minutes to be minutes

	
	printf("\n\nThe time is %i:%i:%i", timeHrs, timeMin, timeSec);

	return 0;
}





unsigned int addTime(int addSec, int addMin, int addHr) {

	

	int hrs = (addHr * 3600);

	int min = (addMin * 60);

	int sec = (addSec);

	int timeAddTotal = (hrs + min + sec);

	if (timeAddTotal > 86400) {

		timeAddTotal = timeAddTotal - 86400;
	}
	return timeAddTotal;
}


unsigned int printTime24(int clockSec) {

	
	if (clockSec > 43200) {
		printf(" in 24 hour");
		printTime(clockSec - 43200);
	}
	else
		printf("\nThis time is same in 24 hour format: ");
		printTime(clockSec);


	return clockSec;
}


int main() {


	// int defined for adding time

	int hrs;

	int mins;

	int secs;


	// store seconds and will be less than 86400
	int clockSec;

	//clockSec = (clockSec % 86400);


	// Random # of Seconds

	srand(time(NULL));
	clockSec = rand() % 86400 + 1;
	//clockSec = 43200;

	clockSec < 86400;

	clockSec = (clockSec % 86400);

	printTime(clockSec);

	printf("\nAdd some time to this");

	printf("\nAdd an amount of hours less than : ");
	scanf_s("%i", &hrs);
	//(clockSec + hrs);
	

	printf("\nAdd mins: ");
	scanf_s("%i", &mins);
	//(clockSec + mins);
	


	printf("\nAdd Seconds: ");
	scanf_s("%i", &secs);
	



	// This is me checking the input values and seeing if they are stored
	//printf("%i", secs);
	//printf("%i", mins);
	//printf("%i", hrs);

	int add_time = addTime(secs, mins, hrs);

	//printf("%i", add_time);

	int total_time = add_time + clockSec;

	printTime(total_time);
	



	// time in 24 hr format
	printTime24(total_time);


	//printTime(add3);


	//printTime(printTime24(clockSec));
	

	return 0;
}
