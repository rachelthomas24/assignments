#include <stdio.h>

int main(){
float m1,m2,m3,m4,m5;
float sum,per;
printf("Enter marks in five subjects:\n");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
 sum=m1+m2+m3+m4+m5;
 per=sum/5.0;
 printf("TOTAL MARKS = %.2f\n", sum);
 printf("\nPERCENTAGE = %.2f\n", per);
if(m1<40||m2<40||m3<40||m4<40||m5<40){
    printf("RESULT:FAIL\n");
}
else{
    printf("RESULT:PASS\n");
    if(per>75){
        printf("GRADE:DISTINCTION\n");
    }
    else if(per>=60 && per<75){
        printf("GRADE:FIRST DIVISION\n");
    }
    else if(per>=50 && per<60){
        printf("GRADE:SECOND DIVISION\n");
    }
    else if(per>=40 && per<50){
        printf("GRADE:THIRD DIVISION\n");
    }
    
}
return 0;
}