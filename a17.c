#include <stdio.h>
#include <math.h>

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
};

int main(){
    double x;
    int n;
    printf("enter angle and no of terms\n");
    scanf("%lf%d",&x,&n);
    double sum=0.0;
    for(int k=0;k<n;k++){
        int p=2*k+1;
        double term=pow(x,p)/factorial(p);
        if(k%2==0){
        term=-term;
        }
        sum=sum+term;
    }
        printf("Sum of sine series=%.10f",sum);
    return 0;
}