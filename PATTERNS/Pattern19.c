#include<stdio.h>
#include<conio.h>
int main(){
    int p=1;
    char ch='a';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf(" %d",p);
                p++;
            }
            else {
                printf(" %c",ch);
                ch++;
            }
        }
        printf("\n");
    }
    return 0;
}