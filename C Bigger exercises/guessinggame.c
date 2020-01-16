#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// generate a random number.
	//seed van de klok om het een pseudo random nummer te maken
	
	int maxValue = 5;
	srand(time(NULL));
	int randomNumber = rand() % maxValue + 1;

	printf("Gok een nummer van 0 tot %d: \n", maxValue);
	int input;
	scanf("%d", &input);

	if(input == randomNumber)
	{
		printf("Je hebt goed geraden!");
	} else
	{
		printf("Helaas, niet goeg gegokt!\n");
	}

	printf("Het correcte nummer is: %d\n", randomNumber);
	printf("Dankje voor het meespelen!");
	return 0;
}
