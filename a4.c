#include <stdio.h>

int main() {
    float bs,hra,ta,pt,ns,ts;
    printf("Input basic salary\n");
    scanf("%f",&bs);
    hra=0.1*bs;
    ta=0.05*bs;
    ts=bs+hra+ta;
    pt=0.02*ts;
    ns=ts-pt;
    printf("BASIC SALARY= %.2f\n",bs);
    printf("HRA= %.2f\n",hra);
    printf("TA= %.2f\n",ta);
    printf("TOTAL SALARY= %.2f\n",ts);
    printf("PROFESSIONAL TAX= %.2f\n",pt);
    printf("NET SALARY= %.2f\n",ns);
    return 0;
}