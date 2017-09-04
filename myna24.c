#include<stdio.h>
int main()
{
int num,revnum=0,rem;
printf("Enter an integer:\n");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
revnum=revnum*10+rem;
num/=10;
}
printf("Reversed Number = %d", revnum);
return 0;
}
