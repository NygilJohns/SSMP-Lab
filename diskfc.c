#include<stdio.h>
#include<stdlib.h>
void main(){
int head,seektime=0,distance,i,n,a[20];
printf("Enter the number of request :");
scanf("%d",&n);
printf("Enter the head position :");
scanf("%d",&head);
printf("Enter the request sequence :\n");
for(i=1;i<=n;i++){
scanf("%d",&a[i]);
}
a[0]=head;
printf("\nFCFS Scheduling\n");
for(i=0;i<n;i++){
distance=abs(a[i]-a[i+1]);
seektime+=distance;
printf("head movement from %d to %d is %d \n",a[i],a[i+1],distance);
}
printf("total seektime :%d\n",seektime);
}
