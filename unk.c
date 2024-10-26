#include <stdio.h>

int main()
{
    int A[3] = {0};
    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&A[i]);
        if (A[i] > 20)
            break;

        sum += A[i];
    }
    printf("Sum: %d",sum);
    return 0;
}