#include<stdio.h>
int main()
{
 int a,b,n,sum;
 printf("Enter the value of n:");
 scanf("%d",&n);
 b=n%10;
 a=n;
 printf("Print digit=%d\n",n);
 while(a>=10)
 {
 a=a/10;
 }
 printf("First:%d and Last:%d\n",a,b);
 sum=a+b;
 printf("Sum of First and Last:%d",sum);
 return 0;
}
