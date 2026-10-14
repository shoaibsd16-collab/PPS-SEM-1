#include<stdio.h>
int sum(int n);
void main()
{
int n,s;
printf("enter a number ");
scanf("%d",&n);
s=sum(n);
printf("sum of first %d natural numbers is %d",n,s);
}
int sum(int n)
{
if(n==0|| n==1)
    return 1;
else
return n+sum(n-1);

}
