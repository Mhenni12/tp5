#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char CH[100];
    int i, j, nbocc ;
    do
    {
        printf("Introduisez une phrase : ");
        gets(CH);
    }while(strlen(CH)==0);

    i=0;
    while(CH[i])
    {
        j=i;
        while(CH[j]==CH[j+1])

        j++;
        if(j>i)
        strcpy(CH+i,CH+j);
        i++;
    }
    printf("Chaine apres suppression :%s:",CH);

}