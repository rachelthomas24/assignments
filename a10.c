#include <stdio.h>
#include <math.h>
int main(){
    int c,a,b;
    printf("enter two numbers *second will not be used in factorial\n");
    scanf("%d%d",&a,&b);
    printf("MENU: 1-ADDITION\n2-SUBTRACTION\n3-MULTIPLICATION\n4-DIVISION\n5-POWER\n6-FACTORIAL\n");
    printf("enter your choice\n");
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("sum=%d\n",a+b);
        break;
        case 2:
        printf("difference=%d\n",a-b);
        break;
        case 3:
        printf("product=%d\n",a*b);
        break;
        case 4:
        if(b!=0){
        printf("quotient=%.2f\n",(float)a/b);
        }
        else printf("Cannot divide by 0\n");
        break;
        case 5:
        printf("%d to the power %d = %.0f\n",a,b,pow(a,b));
        break;
        case 6:
        {
        int fact=1;
        for(int i=1;i<=a;i++){
            fact=fact*i;
        }
        printf("factorial=%d\n",fact);
        }
        break;
        default:
        printf("invalid input\n");
    }
    return 0;
}