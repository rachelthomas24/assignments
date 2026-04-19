#include <stdio.h>

int main() {
    int num,i;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("MULTIPLICATION TABLE OF %d\n",num);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d",num,i,num*i);
        printf("\n");
    }
    return 0;
}