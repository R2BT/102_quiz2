#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    int p1,p2,p3;
    scanf("%d",&n);
    int num[n],cnum[n],newnum[n];
    i=0;
    while(i<n)
    {
        num[i]=i+1;
        cnum[i]=i+1;
        i++;
    }
    for(i=0;i<9;i++)
    {
        newnum[i]=num[i];
    }
    i=0;
    j=9;
    while(i<n)
    {

        if(i>8&&i<100)
        {
            p2=cnum[i]%10;
            p1=cnum[i]/10;
            newnum[j]=(p2*10)+p1;
            j++;
        }
        i++;
    }
    i=0;
    while(i<n)
    {
        if(num[i]==newnum[i])
        {
            sum++;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}
