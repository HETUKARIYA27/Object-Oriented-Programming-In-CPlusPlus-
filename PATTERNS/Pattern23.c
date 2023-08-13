#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    for(int i=0;i<=n;i++){
        for(int j=i;j<=5;j++){
            printf("  ");
        }
        for(int j=i;j>=0;j--){
            printf(" %d",j);
        }
        for(int j=1;j<=i;j++){
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}