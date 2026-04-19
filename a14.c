#include <stdio.h>
#include <math.h>

int main(){
   long long bin;
   int digit,dec=0,i=0;
   printf("enter binary number\n");
   scanf("%lld",&bin);
   while(bin!=0){
       digit=bin%10;
       dec=dec+digit*pow(2,i);
       bin=bin/10;
       i++;
   }
   printf("decimal equivalent=%d",dec);
    return 0;
}