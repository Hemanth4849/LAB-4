#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("%d ",i+3);
		printf("\n");
	}
for(int a=n;a>0;a--)
{
	for(int b=a;b>0;b--)
	printf("%d ",a+2);
	printf("\n");
}

}

