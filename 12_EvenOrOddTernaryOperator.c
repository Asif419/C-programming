#include <stdio.h>
int main()
{   
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);

    (number%2 == 0) ? printf("%d is even number\n", number) : printf("%d is odd number\n", number);
    

    return 0;
}