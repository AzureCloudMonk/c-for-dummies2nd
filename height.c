#include <stdio.h>
#include <stdlib.h>

int main()
{
	float height_in_cm;
	char height_in_inches[4];

	printf("Enter your height in inches:");
	gets(height_in_inches);
	height_in_cm = atoi(height_in_inches)*2.54*1.05;
	printf("You are %.2f centimeters tall.\n",height_in_cm);
	return(0);
}
