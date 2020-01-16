#include <stdio.h>

int main()
{
	char myCharacter;
	printf("Please enter a character: ");
	scanf("%c", &myCharacter);
	printf("%i\n", myCharacter); //%c is 

	int integer;
	printf("Please enter an integer between 0 - 127: ");
	scanf("%i", &integer);
	printf("%c\n", integer);

	char maths = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", maths, maths);
	return 0;
}
