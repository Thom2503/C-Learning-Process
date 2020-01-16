#include <stdio.h>

int main()
{
    int i, input, k, sum, notP, isP;

    printf("This will see if the number is prime or not. So enter a number here: \n");
    scanf("%d", &input);

    for(i = input; i > 1; i--)
    {
        for(k = i - 1; k > 1; k--)
        {
            sum = i % k;
            if(sum == 0)
            {
                printf("%d is not a prime number.\n", i);
                break;
            }
        }
        if(sum != 0)
        {
            printf("\nThe number %d is a prime number.\n\n", i);
            isP++;
        }
    }
    printf("\nThere is a total of %d prime numbers between %d and 2", isP, input);
    return 0;
}
