#include<stdio.h>
#include<conio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        for(int j=i;j<=n;j++){
            printf(" %d",j);
        }
        for(int j=4;j>=i;j--){
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}