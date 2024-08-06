#include<stdio.h>
#include<stdlib.h>
void main(){
int a[15],tm=0,i,initial,n,size,move;

printf("Enter the number of requests :\n");
scanf("%d",&n);
int req[n];
printf("Enter the request sequence :");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the head position :");
scanf("%d",&initial);
printf("Enter the maximum size :");
scanf("%d",&size);
printf("Enter the head direction");
scanf("%d",&move);
for(i=0;i<n;i++){
for(int j=0;j<n-i-1;i++){
   if(a[j]>a[j+1]){
   int temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
   }
   }
   }
   int index=0;
   while (index<n&&initial>=a[index]){
   index++;
   }
   
   if(move==1){
   for(i=index;i<n;i++){
   tm=abs(a[i]-initial);
   initial = a[i];
   }
   tm=abs(size-a[n-1]-1);
   tm+=size-1;
   initial=0;
   for(i=0;i<index;i++){
   tm+=abs(a[i]-initial);
   initial=a[i];
   }
   }
   else{
   for(i=index-1;i>=0;i--){
   tm+=abs(a[i]-initial);
   initial=a[i];
   }
   tm+=abs(a[0]-0);
   tm+=size-1;
   initial=size-1;
   for(i=n-1;i>=index;i--){
   tm+=abs(a[i]-initial);
   initial=a[i];
   }
   }
   printf("Total head movement=%d\n",tm);
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
