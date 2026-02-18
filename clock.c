#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

int main(){

	time_t current_time = 0;
	struct tm *pTime = NULL;
	bool condition = true;


	fprintf(stdout,"DIGITAL CLOCK\n");

	while(condition){
	
	time(&current_time);
	pTime = localtime(&current_time);
	
	fprintf(stdout,"\rCurrent Time: %02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);  // we can use pTime pointer like (*pTime).tm_hour
			
	fflush(stdout);
	sleep(1);

	}

	return 0;
}
