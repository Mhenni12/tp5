#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char TXT[201] , RES[201];
    int  i , j , l;
    
    do
    {
        printf("donner une chaine ne depassant pas 200 caracteres: ");
        gets(TXT);
    } while (!(0 < strlen(TXT) <= 200));

    for (i = 0 ; i <= strlen(TXT) ; i++)
    {
        if (!isalpha(TXT[i]))
        {
            j = i;
            while (j < strlen(TXT))
            {
                TXT[j] = TXT[j + 1];
                j++;
            }
        }
    }

    l = strlen(TXT);
    RES[0] == '\n';
    for (i = 0 ; i < l ; i++)
    {
        if(isupper(TXT[i]) && (TXT[i]!='A'&& TXT[i]!='O'&& TXT[i]!='I'&& TXT[i]!='U'&& TXT[i]!='E'&& TXT[i]!='Y'))
        {
            strcat(RES , TXT[i]);
        }
    }
    for (i = 0 ; i < l ; i++)
    {
        if(isupper(TXT[i]) && (TXT[i]=='A'|| TXT[i]=='O' || TXT[i]=='I' || TXT[i]=='U' || TXT[i]=='E' || TXT[i]=='Y'))
        {
            strcat(RES , TXT[i]);
        }
    } 
    for (i = 0 ; i < l ; i++)
    {
        if(islower(TXT[i]) && (TXT[i]!='a'&& TXT[i]!='o'&& TXT[i]!='i'&& TXT[i]!='u'&& TXT[i]!='e'&& TXT[i]!='y'))
        {
            strcat(RES , TXT[i]);
        }
    }
    for (i = 0 ; i < l ; i++)
    {
        if(islower(TXT[i]) && (TXT[i]=='a'|| TXT[i]=='o'|| TXT[i]=='i'|| TXT[i]=='u'|| TXT[i]=='e'|| TXT[i]=='y'))
        {
            strcat(RES , TXT[i]);
        }
    }  
    printf("la chaine finale est: %s\n" , RES);  
}