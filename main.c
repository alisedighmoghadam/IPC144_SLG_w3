#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// you don't need to use this library later. 
#include <time.h>

/*
In this code we are building a guess the number game!

Code the parts that mentioned TODO in the comments.
*/
int main(void) {
	//Do not change anything here 
	printf("+++++++++++++++++++++++++++++++\n");
	printf("Welcome to IPC144 SLG session 3\n");
	printf("+++++++++++++++++++++++++++++++\n\n");
	
	//Do not change anything here
	printf("================\n");
	printf("guess the number\n");
	printf("================\n\n");

	//Do not change anything here
	srand(time(NULL));
	int input=-1,flag=1,randomNo = rand()%10;
	
	float result = 0.0;

	while (flag)
	{
		int isEqual = 0, isLarger = 0, isSmaller = 0;
		printf("Take guess: ");
		
		// TODO - Write a code to get the user input and save it in "input" variable. NOTE: the input should be "int".
		
		
		// TODO - Write a code to check if the user's number is equal, smaller, or bigger than randomNo, and save each of them in the "isEqual", "isLarger", and "isSmaller" variables.

		//Do not change anything here
		if (isEqual) {
			printf("Wow you guessed the number correct!\n");
			flag = 0;
		}
		else if (isSmaller)
		{
			printf("Your guess is a little bit off maybe you want to select a bigger number!\n");
		}
		else if (isLarger)
		{
			printf("Your guess is a more than the number we are looking for. Please try again.\n");
		}
		

	}

	// TODO - Now divide the number by 1.24. Remember to round the number by 3 decimal points manually and save it in result variable.
	

	// TODO - Print the result with 3 decimal points. 
	


	
	return 0;
}