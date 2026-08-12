#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"main.c"
void log1();
extern void choices(char[], char[] , int ) ;
void log1(){
        
        FILE *fp = NULL;
        char name1[50] , pass1[50] ;
        int lim ;
        char ch , nam[50] , pas[50];
        fp = fopen("reg.txt","r");
        if(fp == NULL){
            printf("Error");
            exit(1);
        }
        printf("LOGIN");
        printf("\nEnter the user name :");
        scanf("%s",name1);
        printf("\nEnter the user password :");
        scanf("%s",pass1);
        while(fscanf(fp , "%s %s %d",nam , pas , &lim )==3){
            
            
            if(strcmp(nam , name1)==0 && strcmp(pas , pass1)==0){
              printf("Login successfull");
              choices( nam , pas , lim);
              return;
            }

        }
        printf("Invalid user\n Login again\n");
        log1();
        


        }
        
        
        
        
        
    
    
