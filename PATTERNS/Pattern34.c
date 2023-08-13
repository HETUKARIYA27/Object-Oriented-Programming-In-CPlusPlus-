#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(i==j || i==1 || j==5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}