//sum of natural number using recursion

#include<stdio.h>
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return sum(n-1)+n;
}

int main()
{

int r=sum(8);
printf("%d",r);

return 0;
}