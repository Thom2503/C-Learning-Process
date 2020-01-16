#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	double y;

	printf("Wat zijn de twee getallen waar pythagoras van berekent moet worden?\n");
	//Dit krijgt de data van het eerste getal x
	printf("Het eerste getal: ");
	scanf("%lf", &x);
	//Dit krijgt de data van het tweede getal y
	printf("Het tweede getal: ");
	scanf("%lf", &y);

	//Dit maakt de berekening met de library
	double z = sqrt((x * x) + (y * y));

	//Dit print de uitkomst
	printf("De pythagoras van %lf en %lf is: %f.\n", x, y, z);
	return 0;
}
