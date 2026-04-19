#include <stdio.h>

int main(){
    int num,temp,digit;
    int sum=0;
    printf("enter a three digit number\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
    digit=temp%10;
    sum=sum+digit*digit*digit;
    temp=temp/10;
    }
    if(sum==num){
        printf("ARMSTRONG NUMBER");
    }
    else
    printf("NOT AN ARMSTRONG NUMBER");
    
    
    return 0;
}