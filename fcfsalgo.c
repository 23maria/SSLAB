#include<stdio.h>
int main()
{
	int p[10],bt[10],tottat=0,wt[10],n,totwt=0,tat[10];
	int i;
	printf("ente no of process\n");
	scanf("%d",&n);
	printf("enter burst time:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		p[i]=i;
	}  
	printf("FCFS algorithm");
	for(i=0;i<n;i++)
	{
		if(i==0)
			tat[i]=bt[i];
		else
			tat[i]=tat[i-1]+bt[i];
		tottat=tottat+tat[i];
	}				
	int fcfstat=tottat;
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		totwt=totwt+wt[i];
	}
	int fcfswt=totwt;
	printf("\nprocess\t\tbursttime\t\tat\twt");
	for(i=0;i<n;i++)
		printf("\np[%d]\t\t%d\t\t%d\t\t%d",p[i],bt[i],tat[i],wt[i]);
	printf("\n\ntotal turnaround time:%d",fcfstat);
	printf("\naverage turnaround time:%d",fcfstat/n);
	printf("\n\ntotal waiting time:%d",fcfswt);
	printf("\naverage waiting time:%d",fcfswt/n);	
	return 0;
}
