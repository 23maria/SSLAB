#include<stdio.h>
int p[10],bt[10],tottat=0,wt[10],n,totwt=0,tat[10],sjfwt=0,sjftat=0;
int swap(int *a,int *b);
int sort();
int main()
{
	int i;
	printf("ente no of process\n");
	scanf("%d",&n);
	printf("enter burst time:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		p[i]=i;
	}  
	sort();
	for(i=0;i<n;i++)
	{
		if(i==0)
			tat[i]=bt[i];
		else
			tat[i]=tat[i-1]+bt[i];
		tottat=tottat+tat[i];
	}
	 sjftat=tottat;
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		totwt=totwt+wt[i];
	}
	sjfwt=totwt;
	printf("\nprocess\t\tbursttime\tat\twt");
	for(i=0;i<n;i++)
	printf("\np[%d]\t\t%d\t\t%d\t\t%d",p[i]+1,bt[i],tat[i],wt[i]);	
	printf("\n\ntotal turnaround time:%d",sjftat);
	printf("\naverage turnaround time:%d",sjftat/n);
	printf("\n\ntotal waiting time:%d",sjfwt);
	printf("\naverage waiting time:%d",sjfwt/n);	
	return 0;
}	
int sort()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(bt[i]>bt[j])
			{
				swap(&bt[i],&bt[j]);
				swap(&p[i],&p[j]);
			}
		}
	}
	return 0;
}
int swap(int *a,int *b)
{
	int t;	
	t=*a;
	*a=*b;
	*b=t;
	return 0;
}
