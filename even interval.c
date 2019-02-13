#include<stdio.h>
#include<conio.h>
void main()
{
int num,m,n;
clrscr();
printf("Enter the value");
scanf("%d %d",&m,&n);
for (num=m;num<n;num++)
{
if (num%2==0)
printf ("%d",num);
}
getch();
}
