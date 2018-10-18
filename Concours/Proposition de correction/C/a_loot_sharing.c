#include <stdlib.h>
#include <stdio.h>

int main()
{
    long B,T,N;
    char s[1024];
    if(scanf("%s", &s)==EOF)return 1;
    B=atoi(s);
    if(scanf("%s",&s)==EOF)return 1;
    T=atoi(s);
    if(scanf("%s",&s)==EOF)return 1;
    N=atoi(s);

    if((N-(T*3)-(B*2))>=0) printf("LOOT!");
    else printf("RHUM!");
    return 0;
}