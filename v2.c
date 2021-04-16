/*
Fundamentals Version 2
by Ayen Pino-McLarty
Student Number: 119291169
Email: apino-mclarty@myseneca.ca
*/
#include "Fundamentals.h" // calls fundamentals.h to include header files
void fundamentals() {
printf("*** Start of Measuring Strings Demo***\n");
	char buffer2[80]; // a character buffer up to 80
	while (TRUE) {
		printf("Type a string (q - to quit): \n"); // a prompt to allow user to enter a string or quit
		gets(buffer2);
		if (strcmp(buffer2, "q") == 0) break; // if the entered character was a q it ends this demo
		printf("The length is %lu\n", strlen(buffer2));
	}
	printf("*** End of Measuring Strings Demo***\n\n");

}