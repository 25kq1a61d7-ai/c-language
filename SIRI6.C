#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],multiply[3][3], i,j,k,sum=0;
clrscr();
printf("\n enter elements of 1st matrix:\n");
for(i=0; i<3; i++)
for(j=0; j<3; j++)
{
printf(" enter element a%d%d: ", i+1,j+1);
scanf("%d", &a[i][j]);
}
printf("enter elements of 2nd matrix:\n");
for(i=0; i<3; ++i)
for(j=0; j<3; ++j)
{
printf("enter element b%d%d: ",i+1,j+1);
scanf("%d", &b[i][j]);
}
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
{
for(k=0; k<3; k++)
{
sum= sum+a[i][k]*b[k][j];
}
getch();
}}
}