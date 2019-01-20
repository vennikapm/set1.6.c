#include<stdio.h>
#include<conio.h>
void main()
{
int n,yr;
scanf("%d",&n);
while(n>0)
{
scanf("%d",&yr);
if((yr%4==0&&yr%100!=0)||(yr%400==0))
{
printf("leap year");
}
else
{
printf("not");
}
n--;
}
getch();
}
