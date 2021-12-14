 #include<stdio.h>
 int n,frm,pf=0,i,j,k,next=1,min=0;
 int main()
 {
	 printf("ENTER THE LENTH OF REF STRING-->");
	 
	 scanf("%d",&n);
	 
	 int refstr[n],flag[n];
	 
	 printf("ENTER THE REF STRING--->");
	 
	 for( i=0;i<n;i++)
	 {
		 scanf("%d",&refstr[i]);
		 flag[i]=0;
	 }
	 printf("ENTER THE NO OF FRAMES--->");
	 scanf("%d",&frm);
	 int frames[frm],count[frm];
	 for(i=0;i<frm;i++)
	 {
		 frames[i]=-1;
		 count[i]=0;
	 }
	 for(i=0;i<n;i++)
	 {
		 for( j=0;j<frm;j++)
		 {
			 if(frames[j]==refstr[i])
			 {
				 flag[i]=1;
				 count[j]=next;
				 next++;
				
			 }
		}
		if(flag[i]==0)
		{
			if(i<frm)
			{
				frames[i]=refstr[i];
				count[i]=next;
				next++;
			}
			else
			{
				min=0;
				for(j=1;j<frm;j++)
					if(count[min]>count[j])
						min=j;
				frames[min]=refstr[i];
				count[min]=next;
				next++;
			}
			pf++;
		}
		for(k=0;k<frm;k++)
			printf("%d ",frames[k]);
		if(flag[i]==0)
		{		
		printf("\n pf = %d \n\n",pf);
		}
		printf("\n");
	}
			printf("\n\n\nTOTAL PAGE FAULT--->%d",pf);
}
		
				
