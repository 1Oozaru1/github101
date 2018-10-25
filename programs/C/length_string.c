#include <stdio.h>

//Created a function to calculate length of string.
int lengthOfString(char stringInput[50]) {
	int length = 0, i;
	scanf("%[^\n]", stringInput);		//Input of the string
	
	for(i = 0; stringInput[i]!='\0'; i++)
    		
		length++;
	
	return length;
}

int main(void) {
	char sentence [50];
	int length;
	
	length = lengthOfString(sentence);	// Using the function
	printf("%d \n", length);		// Printing the length of the sentence
	
	return 0;
}
