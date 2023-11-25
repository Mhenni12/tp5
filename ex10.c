#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void main()
{
    char T[20][20];
    int i, j, N, somme ;
    
    do
    {
        printf("Introduisez la taille de T : ");
        scanf("%d",&N); 
        fflush(stdin);
    }while(N<5||N>20);
    
    for(i=0;i<N;i++)
    {
        do
        {
            printf("T[%d] : ",i);
            gets(T[i]);
        }while(strlen(T[i])==0);
    }
    /* Affichage des chaines de caractères avant suppression*/
    printf("\nAffichage des chaines de caractères avant suppression:\n");
    for(i=0;i<N;i++)
    {
        printf("T[%d] = ",i);
        puts(T[i]);
    }
    /* Suppression des caractères non alphabétiques */
    for(i=0;i<N;i++)
    {
        j=0;
        while(j<strlen(T[i]))
        {
            if(isdigit(T[i][j])==0)
                strcpy(T[i]+j,T[i]+j+1);

            else
                j++;
        }
    }
    /* Affichage des chaines de caractères après suppression*/
    printf("\nAffichage des chaines de caractères après suppression:\n");
    for(i=0;i<N;i++)
    {
        if(strlen(T[i])!=0)
        somme+=atoi(T[i]);
    }
    printf("Somme = %d\n",somme);
}