#include <stdio.h>

int fact_r(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact_r(n-1);
    }
}

int fact_i(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
        return fact;
    }


int main() {
 int n,r1,r2;
 printf("enter a number\n");
 scanf("%d",&n);
 r1=fact_r(n);
 r2=fact_i(n);
 printf("ITERATIVE METHOD\n Factorial = %d\n",r2);
 printf("\nRECURSIVE METHOD\n Factorial = %d",r1);
return 0;
}