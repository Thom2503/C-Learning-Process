#include <stdio.h>

int main()
{
	puts("1. Patient toevoegen");
	puts("2. Patient bekijken");
	puts("3. Patient zoeken");
	puts("4. Programma sluiten\n");

	printf("Kies een van de 4 opties:\n");
	int input;
	scanf("%d", &input);

	if(input == 1)
	{
		printf("Patient toevoegen\n");
	} else if (input == 2)
	{
		printf("Patient bekijken\n");
	} else if (input == 3)
	{
		printf("Patient zoeken\n");
	} else 
	{
		printf("Beeindigen...\n");
	}
	return 0;
}
