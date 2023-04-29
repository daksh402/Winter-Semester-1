#include<stdio.h>
#include<conio.h>

int main(){
    int sum=0,sum1;
    for(int i=1000;i<9999;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    if(sum1>9){
        while(sum>0){
             sum1+=sum%10;
             sum=sum/10;
        }
        sum=sum1;
       
    }
    if(sum%2==0){
        printf("Odd Found");
    }
    else{
        printf("Even Found");
    }
    return 0;
}       #include<stdio.h>
#include<conio.h>

int main(){
    int sum=0,sum1;
    for(int i=1000;i<9999;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    if(sum1>9){
        while(sum>0){
             sum1+=sum%10;
             sum=sum/10;
        }
        sum=sum1;
       
    }
    if(sum%2==0){
        printf("Odd Found");
    }
    else{
        printf("Even Found");
    }
    return 0;
}       