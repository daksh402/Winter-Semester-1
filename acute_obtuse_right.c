#include<stdio.h>
#include<conio.h>

int main(){
    int acute=0,obtuse=0,right=0,we=0,n=5,a,b,c;
    for(int i=0;i<n;i++){
        printf("Enter the Angles of %d Triangle : ",i+1);
        scanf("\n%d%d%d",&a,&b,&c);
        if(a+b+c!=180){
            printf("\nWrong entry pls try again");
            n+=1;we++;
        }
        else{
            if(a==90||b==90||c==90){
                right++;
            }
            else if(a>90||b>90||c>90){
                obtuse++;
            }
            else if(a<90&&b<90&&c<90){
                acute++;
            }
        }
    }
    printf("\nAcute Angled Triangle : %d",acute);
    printf("\nRight Angled Triangle : %d",right);
    printf("\nObtuse Angled Triangle : %d",obtuse);
    printf("\nWrong Entries : %d",we);
    return 0;
}   