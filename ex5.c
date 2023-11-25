#include<stdio.h>
#include <string.h>

void main()
{
    char ph[200], mot[30];
    int l_ph , l_mot , i , j , k , occ;
    
    do
    {
        printf("donner une phrase non vide: ");
        gets(ph);
    } while (strlen(ph) == 0);
    do
    {
        printf("donner un mot: ");
        gets(mot);
    } while (strlen(mot) == 0);

    strupr(ph);
    strupr(mot);

    if (strstr(ph , mot) != NULL) printf("le mot: %s existe dans la phrase: %s\n" , mot , ph);
    else printf("le mot nexiste pas\n");

//nbr d'occurence
    l_ph = strlen(ph);
    l_mot = strlen(mot);
    occ = 0;
    for ( i = 0; i < (l_ph - l_mot + 1) ; i++)
    {
        j = i;
        k=0;
        while (ph[j] == mot[k] && j < (i + l_mot))
        {
            j++;
            k++;
        }
        if (j == i + l_mot) occ++;
        
    }
    printf("le nbr doccurence est: %d" , occ);   
}