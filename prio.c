#include<stdio.h>
void main(){
int limit,tot_wt=0,tot_tat=0,temp,temp2,temp3,k=0; 
printf("enter the no of process:");
scanf("%d",&limit);
int process[limit],bt[limit],wt[limit],tat[limit],pri[limit];
printf("Enter the process burst time and priority:\n");
for(int i=0;i<limit;i++){
scanf("%d",&process[i]);
scanf("%d",&bt[i]);
scanf("%d",&pri[i]);
}
printf("proces   bt       priority\n");
for(int i=0;i<limit;i++){
printf("%d",process[i]);
printf("   %d",bt[i]);
printf("        %d",pri[i]);
printf("\n");
}
for(int i=0;i<limit;i++){
for(int j=i;j<limit;j++){
if(pri[i]>pri[j]){
temp=pri[i];
pri[i]=pri[j];
pri[j]=temp;
temp2=bt[i];
bt[i]=bt[j];
bt[j]=temp2;
temp3=process[i];
process[i]=process[j];
process[j]=temp3;
}
}
}
wt[0]=0;
tat[0]=bt[0];
printf("Process    BT       priority       WT      TAT\n");
printf("   %d       %d            %d          0         %d\n",process[0],bt[0],pri[0],bt[0]);
tot_tat=tot_tat+bt[0];
for(int i=1;i<limit;i++){
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
printf("   %d       %d             %d       %d        %d\n",process[i],bt[i],pri[i],wt[i],tat[i]);
tot_wt=tot_wt+wt[i];
tot_tat=tot_tat+tat[i];
}
printf("----------------------------\n");
printf("Total TAT=%d\n",tot_tat);
printf("Total WT=%d\n",tot_wt);
float avg_tat,avg_wt;
avg_tat=(float)tot_tat/limit;
avg_wt=(float)tot_wt/limit;
printf("average TAT=%f\n",avg_tat);
printf("average WT=%f\n",avg_wt);

printf("\nGannd Chart\n");
for(int i=0;i<limit;i++){
printf("\t%d",process[i]);
}
printf("\n");
for(int i=0;i<limit;i++){
if(i==0){
printf("    0     %d",tat[i]);
}
else{
printf("     %d ",tat[i]);
}
}

}
