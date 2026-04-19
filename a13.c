#include <stdio.h>
int main(){
    int num,digit,rev=0;
    printf("enter the number\n");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0){
        digit=temp%10;
        rev=digit+rev*10;
        temp=temp/10;
    }
    printf("reversed number=%d",rev);
    return 0;
}