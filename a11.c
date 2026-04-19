#include <stdio.h>
#include <math.h>

int main(){
   int num;
   long long fact = 1;
   int count = 0;
   printf("enter a number\n");
   scanf("%d", &num);
   int sr = (int)sqrt((double)num);
   printf("SQUARE ROOT=%d\n", sr);
   printf("SQUARE=%d\n", num * num);
   printf("CUBE=%d\n", num * num * num);
   for(int i=1;i<=num;i++){
       if(num%i==0)
           count++;
   }
   if(count==2){
       printf("IT IS A PRIME NUMBER\n");
   }
   else printf("NOT A PRIME NUMBER\n");
   for(int i=1;i<=num;i++){
       fact=fact*i;
   }
   printf("FACTORIAL=%lld\n", fact);
    printf("prime factors are:\n");
    int temp = num;
    if (temp == 0) { 
        printf("0 has no prime factors\n");
         return 0;
         }
    if (temp < 0) { 
        printf("-1 ");
        temp = -temp;
    }
    while(temp % 2 == 0){
        printf("%d ", 2);
        temp = temp / 2;
    }
    for(int i = 3; (long long)i * i <= temp; i += 2){
        while(temp % i == 0){
            printf("%d ", i);
            temp = temp / i;
        }
    }
    if (temp > 1) printf("%d", temp);
    printf("\n");
    return 0;
}
