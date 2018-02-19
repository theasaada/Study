#include <stdio.h>

int main()
{
    int i, n;
    float arr[100];
    float max;

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");

    // Stores number entered by the user
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }

    // Loop to store largest number to max
    for(i = 0; i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(max < arr[i])
           max = arr[i];
    }
    printf("Largest element = %.2f\n", max);

    return 0;
}