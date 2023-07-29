#include <stdio.h>
#include <stdlib.h>

int main () {
 int n;
 scanf ("%d",&n);
 int *row_size = (int*)malloc(n*sizeof(int));
 for (int i=0;i<n;i++){
  scanf("%d",&row_size[i]);
  }
  int **cat = (int**)malloc(sizeof(int*)*n);
  for (int i=0;i<n;i++){
  cat[i]=(int*)malloc(sizeof(int))*row_size[i];
  for(int j=0 ;j<row_size[i];j++){
  cat[i][j]=1;
  }
  }
  return 0;
  }
