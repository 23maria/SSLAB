#include<stdio.h>
int main()
{
	int i,j,n,no,pf=0,count=0;
	printf("\n enter no of pages");
	scanf("%d",&n);
	int a[n];
	printf("\nenter reference string:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n enter no of frames:");
	scanf("%d",&no);
	int frame[no];
	for(i=0;i<no;i++)
			frame[i]=-1;		
	for(i=0;i<n;i++)
	{
		for(j=0;j<no;j++)
		{
			if(a[i]==frame[j])
				break;	
		}	
		if(j==no)
		{
			frame[count]=a[i];
			count++;
			pf++;
		}
		for(int k=0;k<no;k++)
			printf(" %d ",frame[k]);
		printf("\n");
		if(j==no)
			printf("\npage fault-> %d \n ",pf);
		if(count==no)
			count=0;
	}
return 0;
}			
