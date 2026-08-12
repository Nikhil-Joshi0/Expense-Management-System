#include<stdio.h>
#include<stdlib.h>
#include"register.c"
#include"login.c"
extern void log1();
extern int regi();
int option(){
    printf("1 . Sign in\n");
    printf("2 . Login\n");
    printf("Enter the valid choice :");
    int opt ;
    scanf("%d",&opt);
    switch(opt){
        case 1 :
        if(regi()){
            log1();
        }
        else{
        log1();
        }
        break;
        case 2:
        log1();
        break;
        default :
        printf("\nEnter the valid input again");
        option();


    }
    return 0;
}
int main(){
    option();
    return 0;
}