#include<stdio.h>
#include<string.h>

void main()
{
    char ch1[200] , ch2[200] , ch3[200]; 
    do
    {
        printf("donner ch1 ne depassant pas 200 caracteres: ");
        gets(ch1);
    } while (strlen(ch1) > 200);    

    do
    {
        printf("donner ch2 ne depassant pas 200 caracteres: ");
        gets(ch2);
    } while (strlen(ch2) > 200);

    strncpy(ch3 , ch1 , strlen(ch1) / 2);
    strncat(ch3, ch2 , strlen(ch2) / 2);

    printf("la chaine finale est: %s" , ch3);

    
}