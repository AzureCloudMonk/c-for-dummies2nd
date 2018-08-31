/* Theater lobby snack bar program */

#include <stdio.h>

int main()
{
	char c;
	int done;
	float total=0;

	printf("Please make your treat selections:\n");
	printf("1 - Beverage.\n");
	printf("2 - Candy.\n");
	printf("3 - Hot dog.\n");
	printf("4 - Popcorn.\n");
	printf("Your choices:");

/* Figure out what they typed in. */

	done=0;
	while(!done)
	{
		c=getchar();
		switch(c)
		{
			case '1':
				printf("Beverage\nThat will be $8.00\n");
				total+=8;
				break;
			case '2':
				printf("Candy\nThat will be $5.50\n");
				total+=5.5;
				break;
			case '3':
				printf("Hot dog\nThat will be $10.00\n");
				total+=10;
				break;
			case '4':
				printf("Popcorn\nThat will be $7.50\n");
				total+=7.5;
				break;
			case '=':
				printf("= Total of $%.2f\n",total);
				printf("Please pay the cashier.\n");
				done=1;
				break;
			default:
				printf("Improper selection.\n");
		} /* end switch */
	} /* end while */
	return(0);
}
