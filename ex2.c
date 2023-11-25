#include<stdio.h>
#include <string.h>

void main()
{
    char TXT[200];
    int L , i , j;
    
    do
    {
        printf("donner une chaine ne depassant pas 200 caracteres: ");
        gets(TXT);
    } while (strlen(TXT) > 200);
    

    for (i = 0 ; i <= strlen(TXT) ; i++)
    {
        if (TXT[i] == 'e')
        {
            j = i;
            while (j < strlen(TXT))
            {
                TXT[j] = TXT[j + 1];
                j++;
            }
        }
    }
    printf("la nouvelle phrase est: %s\n" , TXT);
}