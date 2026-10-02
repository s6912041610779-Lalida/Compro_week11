#include <stdio.h>

// function to calculate average
float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

// main function
int main()
{
    int math, physics, chemistry;
    float result;

    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    result = average(math, physics, chemistry);

    printf("\nMath = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", result);

    return 0;
}