#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int arr[3][5]={{0,1,2},{3,4,5,},{6,7,8}};
eclrscr();
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
{
printf("arr[%d][%d]: %d",i,j,arr[i][j]);
}
printf("\n");
}
getch();
}