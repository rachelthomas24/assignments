#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,n;
    printf("enter how many numbers to generate\n");
    scanf("%d",&n);
    srand(time(0));
    printf("pseudo random no.s are\n");
    for(i=0;i<n;i++){
        printf("%d\n",rand());
    }
    return 0;
}