#include<stdio.h>
#include<conio.h>

int main(){
    int marks[5],month[5];
    for(int i=0;i<5;i++){
        printf("Enter the marks and birth month of the student %d : ",i+1);
        scanf("%d%d",&marks[i],&month[i]);
    }
    float og_average, sum1=0;
    for(int i=0;i<5;i++){
        sum1+=marks[i];
    }
    og_average=sum1/5;
    for(int i=0;i<5;i++){
        marks[i]=marks[i]+month[i];
    }
    float new_average,sum2=0;
    for(int i=0;i<5;i++){
        sum2+=marks[i];
    }
    new_average=sum2/5;
    if((new_average-og_average)>=5){
        printf("Can Implement");
    }
    else{
        printf("Need not to Implement");
    }
    return 0;
}