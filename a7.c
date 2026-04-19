#include <stdio.h>

struct Student{
    int roll;
    char name[20];
    float m1,m2,m3;
    float total, per;
};
int main()
{
    int n;
    printf("enter no. of students\n");
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
        printf("STUDENT %d's DETAILS\n",i+1);
        printf("Enter Roll no.\n");
        scanf("%d",&s[i].roll);
        printf("Enter name\n");
        scanf(" %19[^\n]",s[i].name);
        printf("Enter marks in subjects 1,2,3 respectively\n");
        scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
    }
           for(int i=0;i<n;i++){
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].per=(s[i].total/300.0)*100;
        printf("Student %d's result\n",i+1);
        printf("Roll no. = %d\n",s[i].roll);
        printf("Name = %s\n",s[i].name);
        printf("Total marks obtained=%.2f\n",s[i].total);
        printf("Percentage = %.2f\n",s[i].per);
        }

return 0;
}