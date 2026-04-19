#include <stdio.h>
#include <string.h>
struct Employee{
    char name[50];
    char job[50];
    char gen;
    char date[11];
    float sal;
};
int main(){
    int n,f=0,m=0,i;
    printf("enter no. of employees\n");
    scanf("%d",&n);
    struct Employee s[n];
    for(int i=0;i<n;i++){
        printf("EMPLOYEE %d\n",i+1);
        printf("name: \n");
        scanf("%s",s[i].name);
         printf("job: \n");
        scanf("%s",s[i].job);
         printf("date of joining (DD/MM/YYYY): \n");
        scanf("%s",s[i].date);
         printf("gender (m/f): \n");
        scanf(" %c",&s[i].gen);
        printf("salary: \n");
        scanf("%f",&s[i].sal);
    }
    printf("total employees=%d\n",n);
    for(i=0;i<n;i++){
    if(s[i].gen == 'm') m++;
    else f++;
    }
    printf("\nNo. of female employees=%d\n",f);
    printf("\nNo. of male employees=%d\n",m);
    printf("\nHIGH SALARY EMPLOYEES\n");
    int found = 0;
    for (i = 0; i < n; i++){
        if (s[i].sal > 10000.0f){
            printf("%s\n", s[i].name);
            found = 1;
        }
    }
    if (!found) printf("none\n");

    printf("\nASSISTANT MANAGERS\n");
    found = 0;
    for (i = 0; i < n; i++){
        if (strcmp(s[i].job, "asst.manager") == 0){
            printf("%s\n", s[i].name);
            found = 1;
        }
    }
    if (!found) printf("none\n");
    return 0;
}
    