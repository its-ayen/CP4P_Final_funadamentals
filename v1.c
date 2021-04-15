#include "Fundamentals.h" // calls fundamentals.h to include header files
void fundamentals() {
	printf("*** Start the indexing Strings Demo*** \n"); // welcome message
	char buffer1[80]; //an 80 byte character buffer
	char num_input[10]; // 
	int position; // 
	while (TRUE) { // a loop for 
		printf("Type a string (q - to quit): \n"); // prints start of Indexing Strings Demo
		gets(buffer1);
		if (strcmp(buffer1, "q") == 0) break;
		while (TRUE) {
			printf("Type the character position within the string: \n");
			gets(num_input);
			position = atoi(num_input);
			if (position >= strlen(buffer1)) {
				printf("Wrong position... type again, please\n"); // if the position of is longer than the string length, print this message
				continue;
			}
			printf("The character found at %d position is\'%c\'\n", //displays the current position of a character  
				position, buffer1[position]);
			break;
		}

	}
	printf("*** End of Index Strings Demo ***\n\n");
}