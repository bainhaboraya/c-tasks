#include<stdio.h>
#include<stdlib.h>
struct numbers
{
    int sum;
    int sub;
    int multi;
}res;
struct numbers calc(int x,int z);
int main()
{
    int n,m;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter m: ");
    scanf("%d",&m);
    res=calc(n,m);
    printf("sum= %d\nsubstract= %d\n multiply= %d",res.sum,res.sub,res.multi);

    return 0;
}

struct numbers calc(int x,int z)
{
    res.sum=x+z;
    res.sub=x-z;
    res.multi=x*z;
    return res;
};

