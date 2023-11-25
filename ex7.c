#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char ch[201];
    int  i , j , occ ;
    
    do
    {
        printf("donner une chaine non vide: ");
        gets(ch);
    } while (!strlen(ch));

    //suppressions des blancs
    j = 0;
    while ( j <= strlen(ch) )
    {
        occ = 0;
        while (isspace(ch[j + occ])) occ++;
        i = j + 1;
        if(occ)
        {
            while (i < strlen(ch) - occ + 1)
                {
                    ch[i] = ch[i + occ];
                    i++;
                }
        }
        j++;    
    }
    printf("la chaine traitee est: %s" , ch);
}