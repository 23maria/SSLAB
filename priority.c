#include<stdio.h>
int p[10],bt[10],tottat=0,wt[10],n,totwt=0,tat[10],pr[10],prtat=0,prwt=0;
int swap(int *a,int *b)
{
	int t;	
	t=*a;
	*a=*b;
	*b=t;
	return 0;
}

int sort()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pr[i]>pr[j])
			{
				swap(&bt[i],&bt[j]);
				swap(&p[i],&p[j]);
				swap(&pr[i],&pr[j]);
			}
		}
	}
	return 0;
}
int main()
{
	int i;
	printf("ente no of process\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter burst time and priority of process %d:",i);
		scanf("%d %d",&bt[i],&pr[i]);
		p[i]=i;
	}  
	for(i=0;i<n;i++)
	{
		if(i==0)
			tat[i]=bt[i];
		else
			tat[i]=tat[i-1]+bt[i];
		tottat=tottat+tat[i];
	}				
	int prtat=tottat;
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		totwt=totwt+wt[i];
	}
	int prwt=totwt;
	printf("\nprocess\t\tpriority\t\tbursttime\t\tat\twt");
	for(i=0;i<n;i++)
		printf("\np[%d]\t\t%d\t\t%d\t\t%d",p[i],bt[i],tat[i],wt[i]);
	printf("\n\ntotal turnaround time:%d",prtat);
	printf("\naverage turnaround time:%d",prtat/n);
	printf("\n\ntotal waiting time:%d",prwt);
	printf("\naverage waiting time:%d",prwt/n);	
	return 0;
}
