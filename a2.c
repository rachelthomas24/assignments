#include <stdio.h>

int main() {
    int c,a,b;
    float r=0.0;
    printf("Enter two integers\n");
    scanf("%d%d",&a,&b);
    printf("CHOOSE OPERATION TO PERFORM: \n 1-Add\n2-Subtract\n3-Multiply\n4-Divide\n");
    scanf("%d",&c);
    switch(c){
        case 1:
        r=a+b;
        break;

        case 2:
        r=a-b;
        break;

        case 3:
        r=a*b;
        break;

        case 4:
        if(b==0){
            printf("Division by zero is not allowed");
            return 1;
        }
        else{
            r=(float)a/b;
        }
        break;
        
        default:
        printf("Invalid input");
        return 1;
    }
    printf("RESULT=%.2f",r);
    return 0;
}