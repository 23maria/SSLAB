#include<stdio.h>
int true=0;
int false=-1;
int tbt[10],bt[10],tat[10],n=0,wt[10],qt=0,tqt=0,time=0,more,ttat=0,twt=0;
int main()
{
	int i;
	printf("enter no of process");
	scanf("%d",&n);
	printf("enter quantum time:");
	scanf("%d",&qt);
	for(i=0;i<n;i++)
	{
		printf("\nenter burst time:");
		scanf("%d",&bt[i]);
		//tbt[i]=bt[i];
		wt[i]=tat[i]=0;
	}
	more=true;
	while(more==true)
	{
		more=false;
		for(i=0;i<n;i++)
		{
			if(bt[i]!=0)
				wt[i]=wt[i]+(time-tat[i]);
			tqt=1;
			while(tqt<=qt&&bt[i]!=0)
			{
				more=true;
				bt[i]=bt[i]-1;
				tqt++;
				time++;
				tat[i]=time;
			}
		}
	}
	printf("\nprocess\t\tbursttime\t\ttat\t\twt");
	for(i=0;i<n;i++)
	{
		printf("\np[%d]\t\t\t%d\t\t%d\t\t%d\n",i+1,tbt[i],tat[i],wt[i]);
		ttat=ttat+tat[i];
		twt=twt+wt[i];
	}
	printf("\n\ntotal turnaround time:%d",ttat);
	printf("\naverage turnaround time:%d",ttat/n);
	printf("\n\ntotal waiting time:%d",twt);
	printf("\naverage waiting time:%d",twt/n);							
}

