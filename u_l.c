#include<stdio.h>
#include<string.h>
#define max 200
int main(){
    char str[max];
    printf("Enter the string : ");
    fgets(str,max,stdin);
    int ucase=0,lcase=0,digit=0,wspace=0,schar=0;
    int len;
    len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            ucase++;
        }
        else if(str[i]>='a'&&str[i]<='z'){
            lcase++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            digit++;
        }
        else if(str[i]==' '){
            wspace++;
        }
        else{
            schar++;
        }
    }
    printf("\n Uppercase Alphabets : %d",ucase);
    printf("\n Lowercase Alphabets : %d",lcase);
    printf("\n Digits : %d",digit);
    printf("\n Whitespaces : %d",wspace);
    printf("\n Special Characters : %d",schar-1);
    return 0;
}