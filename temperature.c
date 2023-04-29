#include<stdio.h>
#include<conio.h>

int main(){
    int tempc[7],tempg[7];
    for(int i=0;i<7;i++){
        printf("Enter the temperature of Chennai on day %d : ",i+1);
        scanf("%d",&tempc[i]);
    }
    for(int i=0;i<7;i++){
        tempg[i]=(tempc[i]+5)-(tempc[i]-8);
    }
    for(int i=0;i<7;i++){
        printf("\nTemperature of Gangtok on day %d is %d",i+1,tempg[i]);
    }
    return 0;
}   