#include <stdio.h>
int main(){
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    int min=(a<b)?a:b;

    int s=0;
    for(int i=2;i<=min;i++){
        if(a%i==0 && b%i==0){ 
            s=i; 
            break; 
        }
    }
    while (b!=0){
        int t = a%b;
        a=b;
        b=t;
    } 
    printf("GCD = %d\n", a);
    if (s) printf("Smallest common factor(after 1) = %d\n", s);
    else printf("No common factor>1\n");
    return 0;
}