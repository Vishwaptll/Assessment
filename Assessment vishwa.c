/*
? Write a program to make multiplication of 2-D Matrix
Make sure each business logic is denoted with appropriate comments and
make your code interactive and represent clean and clear output on your
console screen.
Adhere to the coding principles
To Accomplish this program you have to use 2-Dimensional Array concept
Firstly take the matrix input from user and display elements in Matrix format :
*/
#include<stdio.h>
main()
{
int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("\n\n\t Enter values for first matrix ");
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
{
	printf("\n\n\t Enter value for 2D matrix :");
	scanf("%d",&a[i][j]);
}
	printf("\n\n\t Enter values for second matrix");
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
{
	printf("\n\n\t Enter value for 2D matrix :");
	scanf("%d",&b[i][j]);
}
printf("\n\n\t First matrix is :");
		for(i=0;i<3;i++)
{
	printf("\n");
		for(j=0;j<3;j++)
	printf("\n\n\t %d",a[i][j]);
	
}
printf("\n\n\t Second matrix is :");
			for(i=0;i<3;i++)
{
	printf("\n");
			for(j=0;j<3;j++)
	printf("\n\n\t %d",b[i][j]);
}
			for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
	{
		c[i][j]=0;
			for(k=0;k<3;k++)
		{
			c[i][j]+=a[i][j]*b[i][j];
		}
	}
}
printf("\n\n\t Multiplication of matrix is : ");
			for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf(" %d ",c[i][j]);
	}
}