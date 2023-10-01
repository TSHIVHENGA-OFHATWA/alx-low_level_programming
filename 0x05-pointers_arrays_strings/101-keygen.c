#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8  // Adjust this based on the expected length

char generateRandomCharacter() {
	    // Generate a random character between 'a' and 'z'
	    return 'a' + rand() % 26;
}

void generateRandomPassword(char *password, int length) {
	    for (int i = 0; i < length; i++) {
		            password[i] = generateRandomCharacter();
			        }
	        password[length] = '\0';  // Null-terminate the string
}
