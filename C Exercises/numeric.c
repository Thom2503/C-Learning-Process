#include <stdio.h>

int main()
{
	printf("How many dogs do you have?: ");
	double dogs;
	
	scanf("%lf", &dogs);	

	printf("%f\n%e\n%g\n", dogs, dogs, dogs);
	return 0;

	/* Conversion Characters
	_________________________
	%f = Decimal
	%e = De macht van
	%g = Computer bepaald
	%lf = double data point kan alles lezen.
	*/
}
