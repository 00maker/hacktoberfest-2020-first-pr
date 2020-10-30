#include <stdio.h>

int binko(int n, int k)
{
    int b=1,i,j;
    for(i=n,j=1;j<=k;i--,j++)
    b=b*i/j;
    return b;
}

main()
{
    int nmax,n,k;
    printf("nmax=?\n");
    scanf("%d",&nmax);
    for(n=0;n<=nmax;n++)
    {
        for(k=0;k<=n;k++)
        printf("%d\t",binko(n,k));
        printf("\n");
    } 
}
