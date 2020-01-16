#include <stdio.h>

int main()
{
	int radius; //afstand van de buitenkant naar binnen
	printf("Please enter a radius: ");

	scanf("%i", &radius); //address-of operator

	printf("The radius you've given is: %i\n" , radius);
	return 0;
}
