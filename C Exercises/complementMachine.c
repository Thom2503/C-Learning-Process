#include <stdio.h>

int main()
{	
	printf("What's your name? ");

	char name[31]; // altijd eentje meer dan dat je wilt, dat is bij een array.
	scanf("%s", name);

	printf("Hello %s!\nYou are crushing it today!\n", name); //string is %s en dat is een zooi karakters.
	return 0;
}
