#include<stdio.h>
int main()
{
int n,q,count=0;
printf("Enter the value of n:");
scanf("%d",&n);
while (n>0)
{
count=count+1;
q=n/10;
n=q;
}
printf("No of Digits:%d",count);
return 0;
}
