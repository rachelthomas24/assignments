#include <stdio.h>
#include <string.h>

int main(){
    char str1[50],str2[50],rev[50];
    printf("enter first string\n");
    scanf("%s",str1);
    printf("enter second string\n");
    scanf("%s",str2);
    int len=strlen(str1);
    printf("length of string 1= %d\n",len);
    for(int i=0;i<len;i++){
        rev[i]=str1[len-i-1];
    }
    rev[len]='\0';
    printf("Reversed string is %s\n",rev);
    if(strcmp(str1,str2)==0){
        printf("Both strings are equal\n");
    }
    else{
        printf("Both strings are unequal\n");
    }
    if(strcmp(str1,rev)==0){
        printf("string is a palindrome\n");
    }
    else{
        printf("not a palindrome\n");
    }
    if(strstr(str1,str2)!=NULL){
        printf("%s is found in %s",str2,str1);
    }
    else{
        printf("not a substring\n");
    }
    return 0;
}
