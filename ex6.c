#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char ch[200];
    int i , occ;
    
    do
    {
        printf("donner une phrase non vide: ");
        gets(ch);
    } while (strlen(ch) == 0);
    
    //suppression des espaces au debut
    occ = 0;
    while (isspace(ch[occ])) occ++;
    i = 0;
    while (i < strlen(ch) - occ + 1)
        {
            ch[i] = ch[i + occ];
            i++;
        }

    //suppression des espaces a la fin
    while (isspace(ch[strlen(ch) -1]))
    {
        ch[strlen(ch) - 1] = '\0';
    }

    printf("la chaine modifiee est: \"%s\"" , ch);
    
}