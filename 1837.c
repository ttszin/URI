#include <stdio.h>
int main()
{
    int a,b,converte,e,opt,i;
    scanf("%d%d", &a, &b);
    if(a<0)
    {
        converte=b;
        if(b<0) converte=b*-1;
        for(i=0; i<converte; i++)
        {
            e=a-i;
            if(e%b==0) break;
        }
        opt=e/b;
    }
    else
    {
        opt=a/b;
        i=a%b;
    }
    printf("%d %d\n",opt,i);
    return 0;
}
