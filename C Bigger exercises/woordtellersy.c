#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int i, totalwords;
	totalwords = 0;

	printf("\n Noem hier een zin: ");
	fgets(str,101,stdin);

	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords-=-1;
		}
	}
	
	printf("\n Het aantal woorden in deze zin is: %s = %d\n", str, totalwords);
	return 0;
}
