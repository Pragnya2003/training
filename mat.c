#include<stdio.h>
int main()
{
	int a[10][10],n,i,j,rowsum,colsum,rcount0=0,rcount1=0,ccount1=0,ccount0=0,drcount0=0,drcount1=0,dlcount0=0,dlcount1=0;
	short x,dlsum,drsum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		rowsum=0;
		for(j=0;j<n;j++)
		{
			rowsum=rowsum+a[i][j];
			x=rowsum;
		}
		if(rowsum==4)
	    {
		   rcount1++;
	    }
    	else if(rowsum==0)
	    {
	       rcount0++;
    	}
	}
	printf("\n 1's horizantal count=%hi",rcount1);
	printf("\n 0's horizantal count=%hi",rcount0);
	for(j=0;j<n;j++)
	{
		colsum=0;
		for(i=0;i<n;i++)
		{
			colsum=colsum+a[i][j];
			x=colsum;
		}
		if(colsum==4)
	    {
		   ccount1++;
	    }
    	else if(colsum==0)
	    {
	       ccount0++;
    	}
	}
	printf("\n 1's vertical count=%hi",ccount1);
	printf("\n 0's vertical count=%hi",ccount0);
	dlsum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j){
			 dlsum=dlsum+a[i][j];
			 x=dlsum;
		}
		}
		if((dlsum==4))
		{
		    dlcount1++;
		}
		else if(dlsum==0)
		{
			dlcount0++;
		}
	}
	printf("\n 1's leftdia count=%hi",dlcount1);
	printf("\n 0's leftdia count=%hi",dlcount0);
		drsum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1){
			 drsum=drsum+a[i][j];
			 x=drsum;
		}
		}
		if((drsum==4))
		{
		    drcount1++;
		}
		else if(drsum==0)
		{
			drcount0++;
		}
	}
	printf("\n 1's rightdia count=%hi",drcount1);
	printf("\n 0's rightdia count=%hi",drcount0);
}
