#include <stdio.h>

int main(){
  int n,a[50];
  printf("how many elements?\n");
  scanf("%d",&n);
  printf("enter the %d elements\n",n);
  for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
  int odd[n],even[n];
  int e=0,o=0;
  for(int i=0;i<n;i++){
      if(a[i]%2==0){
          even[e++]=a[i];
      }
      else odd[o++]=a[i];
  }
  printf("EVEN ELEMENTS\n");
  for(int i=0;i<e;i++){
      printf("%d ",even[i]);
  }
  printf("\n\nODD ELEMENTS\n");
  for(int i=0;i<o;i++){
      printf("%d ",odd[i]);
  }
    return 0;