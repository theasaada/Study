#include <stdio.h>

int main()
{
    char str[100];
    char strrev[100];
    int i,j=0;
    int num_of_str=0;
    char *ptr = str;

    printf("please enter the string\n");
    
    fgets (str , 100 , stdin);
    printf("%s", str);

    while(*ptr != '\0')
    {
        num_of_str++;
        ptr++;
    }

    i=num_of_str-1;


    for(j=0; j<num_of_str; j++)
    {
        strrev[j] = str[i];
        i--;
    }
    printf("%s\n", strrev);
}