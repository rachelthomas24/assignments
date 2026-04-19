#include <stdio.h>

void swap(int * x,int * y){
    int t=*x;
    *x=*y;
    *y=t;
};

int main(){
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    int a1=a,b1=b;
    int t=a1;
    a1=b1;
    b1=t;
    printf("swapping without pointers a=%d b=%d\n",a1,b1);
    swap(&a,&b);
    printf("swapping with pointers a=%d b=%d",a,b);
    return 0;
}