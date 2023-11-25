#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void main()
{
    char T[20][20];
    int i, j, k, N ;
    
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
            if(isalpha(T[i][j])!=0)
            j++;
            else
            for(k=j;T[i][k];k++)
            T[i][k]=T[i][k+1];
        }
    }

    printf("\nAffichage des chaines de caractères après suppression:\n");
    for(i=0;i<N;i++)
    {
        if(strlen(T[i])!=0)
        printf("%d \t %s \n",i,T[i]);
    }
}