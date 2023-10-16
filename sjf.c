#include<stdio.h>
#include<conio.h>
void main()
{
int twt,i,n,sum,wt,ttat,tat,j,temp;
int t[10];
char pn[10][10];
float awt,atat;
clrscr();
printf("enter the number of processes:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("enter the burst time:");
 scanf("%d",&t[i]);
}
printf("sjf scheduling--\n");
printf("\nprocessid \t waiting time \t turn around time \n\n");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
 if(t[i]>t[j])
 {
  temp=t[i];
  t[i]=t[j];
  t[j]=temp;
  }
 }
}
printf("1 \t\t 0 \t\t %d \n",t[0]);
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
 printf("\n %d \t\t %d \t\t %d",i+1,wt,tat);
 printf("\n");
}
awt=(float)twt/n;
atat=(float)ttat/n;
printf("\n avg waiting time is %4.2f,avg turn around time is %4.2f",awt,atat);
getch();
}
