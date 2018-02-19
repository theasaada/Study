#include <stdio.h>

int main()
{
    int sum=0;
    int num;

    for (int i=0; i<5; i++)
    {
        printf("Please add numbers of integer : \n" );      
        scanf("%d", &num);
        if ((num % 2) != 0)
            sum += num;
    }
    printf("the sum of odd number = %d\n", sum );
    
}