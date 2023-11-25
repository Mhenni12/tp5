#include<stdio.h>
#include<string.h>

void main()
{
    char TXT[200];
    int L , occ , i;
    
    do
    {
        printf("donner une chaine ne depassant pas 200 caracteres: ");
        gets(TXT);
    } while (strlen(TXT) > 200);
    
    L = strlen(TXT);
    printf("la longueur de la chaine: %d\n" , L);

    occ = 0;
    for(i = 0 ; i <= L ; i++)
    {
        if (TXT[i] == 'e')
        {
            occ++;
        }
    }
    printf("la lettre'e' a ete repetee %d fois\n" , occ);

    printf("la phrase avant linversion: %s\n" , TXT);
    strrev(TXT);
    printf("la phrase apres linversion: %s\n" , TXT);
}
