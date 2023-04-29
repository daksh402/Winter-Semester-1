#include<stdio.h>

int main(){
    char pass[3][3],veri[6],str[6];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%c",&pass[i][j]);
        }
    }
    int count=0;
    printf("Enter the password: ");
    scanf("%s",&veri);
    for(int i=0;i<3;i++){
        if(pass[i][i]==veri[i]){
            count++;
        }
    }
    for(int i=0;i<3;i++){
        if(pass[i][2-i]==veri[i+3]){
            count++;
        }
    }
    
    if(count==5){
        printf("Password Verified");
    }
    else{
        printf("Password Not Verified");
    }
    return 0;
}