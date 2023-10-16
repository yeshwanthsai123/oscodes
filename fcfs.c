#include<Stdio.h>
#include<conio.h>

void main()
{
int i,n,sum,wt,tat,twt,ttat;
int t[10];
char pn[10][10];
float awt,atat;
clrscr();
printf("enter number of processes:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("enter the processname:");
 scanf("%s",pn[i]);
 printf("enter the burst time:");
 scanf("%d",&t[i]);
}
printf("fcfs schedule is as follows \n");
printf("-----------------------------");
printf("\nprocessid \t waiting time \t turn aroundtime\n\n");
printf("%s \t\t 0 \t\t %d \n",pn[0],t[0]);
sum=0;
twt=0;
ttat=t[0];
for(i=1;i<n;i++)
{
sum=sum+t[i-1];
wt=sum;
tat=sum+t[i];
twt=twt+wt;
ttat=ttat+tat;
printf("\n%s\t\t %d \t\t %d",pn[i],wt,tat);
printf("\n");
awt =(float)twt/n;
atat=(float)ttat/n;

}
printf("%4.2f",awt);
printf("\n%4.2f",atat);
  getch();
}
