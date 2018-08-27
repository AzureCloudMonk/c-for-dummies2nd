#include <stdio.h>

int main()
{
	char menuitem[] = "Slimy Orange Stuff \"Icy Woka Gu\"";
	int pints=2;
	float price = 1.45;

	printf("Today specical - %s\n",menuitem);
	printf("You want %d pint.\n",pints);
	printf("That be $%.2f, please.\n",pints*price);
	return(0);
}

