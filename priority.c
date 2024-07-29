#include<stdio.h>
void main() {
int i,n,j,tot_wt=0,tot_tat=0,temp1,temp2,temp3;
float avg_wt,avg_tat;
printf("Enter the number of process :");
scanf("%d",&n);
int p[n],bt[n],tat[n],wt[n],pri[n];
printf("Enter the burst time and priority :");
for(i=0;i<n;i++){
scanf("%d%d",&bt[i],&pri[i]);
p[i]=i;
}
for(i=0;i<=n;i++){
for(j=i+1;j<=n;j++){
if(pri[i]>pri[j]){


temp1=pri[i];
pri[i]=pri[j];
pri[j]=temp1;
temp2=bt[i];
bt[i]=bt[j];
bt[j]=temp2;
temp3=p[i];
p[i]=p[j];
p[j]=temp3;


}
}
}
wt[0]=0;
tat[0]=bt[0];
tot_tat=tat[0];
tot_wt=wt[0];
for(i=0;i<=n;i++){
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
tot_wt=tot_wt+wt[i];
tot_tat=tot_tat+tat[i];


avg_wt=(float)tot_wt ;
avg_tat=(float)tot_tat ;
printf("process bt\t tat\t wt\t priority\t");
for(i=0;i<n;i++){
printf("%d    %d     %d    %d ",&bt[i],&tat[i],&wt[i],&pri[i]);
}
}
}



















