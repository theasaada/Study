#include <stdio.h>


int main()
{
    int i=0;
    char arr[50];

    printf("enter the string\n");
    scanf("%s", arr );

    while (arr[i] != '\0')
    {
        i++;
    }
    printf("the number of character in the string %s %d\n", arr, i);

}
