#include <stdlib.h>
#include <stdio.h>

int main()
{
    int L,N;
    int init=0;
    char s[1024];
    if(scanf("%s", &s)==EOF)return 1;
    L=atoi(s);
    if(scanf("%s",&s)==EOF)return 1;
    N=atoi(s);
    int *P=(int *) calloc(N,sizeof(int));
    int *H=(int *) calloc(N,sizeof(int));
    int *Soluce=(int *) calloc(N,sizeof(int));
    for(int i = 0; i < N; i++)
    {
        if(scanf("%s",&s)==EOF)return 1;
        P[i]=atoi(s);
    }
    for(int i = 0; i < N; i++)
    {
        if(scanf("%s",&s)==EOF)return 1;
        H[i]=atoi(s);
    }
    int k=0, j;
    while(k<N)
    {
        for(j = init; j < N; j++)
        {
            /*on verifie si la place n'est pas deja occupé*/
            if(Soluce[j]) continue;
            /*on verifie qu'avec les autres chapeaux tout est bien recouvert, pour la formule lire sujet*/
            if(j>0 && Soluce[j-1] && (P[j]-P[j-1]-1>H[k]+H[Soluce[j-1]-1])) continue;
            if(j==0 && P[j]-1>H[k])continue;
            if(j<N-1 && Soluce[j+1] && (P[j+1]-P[j]-1>H[k]+H[Soluce[j+1]-1])) continue;
            if(j==N-1 && L-P[j]>H[k])continue;
            /*on place et on avance*/
            Soluce[j]=k+1;
            k++;
            init=0;
            break;
        }
        /*pas de solution*/
        if(!Soluce[j])
        {
            k--;
            if(k<0)break;
            for(int i = 0; i < N; i++)
            {
                if(Soluce[i]==k+1)
                {
                    Soluce[i]=0;
                    init=i+1;
                    /*retour en arriere mais en se basant sur la derniere solution choisi*/
                    break;
                }
            }
        }
    }
    if(k<0)puts("NO");
    else puts("YES");
    free(P);
    free(H);
    free(Soluce);
    return 0;
}