#include <stdio.h>
int main ()
{
int n,n1,c=0;
scanf("%d\n",&n);
scanf("%d\n",&n1);
int array1[n];
int array2[n1];
n=sizeof(array1)/sizeof(array1[0]);
n1=sizeof(array2)/sizeof(array2[0]);
int array3[n+n1];
printf("Enter any number:\n");
for(int i=0;i<n;i++){
    scanf("%d\n",&array1[i]);    
  }
  printf("Enter any number:\n");
   for(int i=0;i<n1;i++){
       scanf("%d\n",&array2[i]);
  }
  for(int k=0;k<n;k++){
       array3[k]=array1[k];
  }
  for(int l=0;l<n1;l++){
       array3[l]=array2[l];
  }
  int m=0;
  while(m<2){
    for(int l=0;l<n+n1;l++){
        if(m==0){
           array3[l]=array1[l];
        } else
           array3[l]=array2[l];
       }
       m++;
     }
     int du[10],p=1;
     for(int x=0; x<n+n1; x++){
        for(int y=x+1; y<n+n1; y++){
             if(array3[x]==array3[y]){
                 p=p+1;
                 }
               }
                if(p>1){
                   printf("\nduplicate Elements:%d\n",array3[x]);
             }
         }
         return 0;
      }
              
                   

