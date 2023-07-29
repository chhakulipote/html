#include <stdio.h>
int main ()
{
 int n;
 int c=0,c1=0;
 scanf("%d",&n);
 int even [n];
 int odd [n];
 for (int i=1;i<=n*2;i++)
 {
 if (i%2==0)
 {
 even [c]=i;
 c++;
 }
 else 
 { odd[c1]=i;
 c1++;
 }
 printf("even=");
 for(int i=0;i<c;i++)
     printf("%d\n",even[i]);
}
printf("\n");
printf("odd=");
for(int i=0;i<c;i++){
  printf("%d\n",odd[i]);
}
return 0;
}
