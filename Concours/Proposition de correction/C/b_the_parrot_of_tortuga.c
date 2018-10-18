#include <stdlib.h>
#include <stdio.h>

#define TAILLE_CHAINE 1024

int main()
{
    long G,N;
    long max=0;
    long P, C;
    char nomMax[TAILLE_CHAINE];
    char s[TAILLE_CHAINE];
    char nom[TAILLE_CHAINE];
    if(scanf("%s",s)==EOF)return 1;
    G=atoi(s);
    if(scanf("%s",s)==EOF)return 1;
    N=atoi(s);

    
    for(int i = 0; i < N; i++)
    {
        if(scanf("%s",s)==EOF)return 1;
        for(int j = 0; j < TAILLE_CHAINE; j++)
        {
            if((nom[j]=s[j])=='\0')break;
        }
        if(scanf("%s",s)==EOF)return 1;
        P=atoi(s);
        if(scanf("%s",s)==EOF)return 1;
        C=atoi(s);
        if(max>=((G-C)/P))continue;
        for(int j = 0; j < TAILLE_CHAINE; j++)
        {
            if((nomMax[j]=nom[j])=='\0')break;
        }
        max=((G-C)/P);
    }
    if(max)
    {
        printf("%ld\n",max);
        puts(nomMax);
    }
    else puts("Impossible");
    
    
    return 0;
}