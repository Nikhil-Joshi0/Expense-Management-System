#include<stdio.h>
#include<stdlib.h>
void vieww(char name[] , char pass[]){
    FILE *fp = NULL;
    struct calander{
        int date;
        int month ;
        int year ; 
    }day;
        int amt ; 
        char categorys[50] , name1[50] , pass1[50] , subcategorys[50];
        fp = fopen("data.txt","r");
        if(fp == NULL){
            printf("Error");
            exit(1);
        }
        while(fscanf(fp , "%d %s %s  %s %s %d %d %d", &amt ,name1 , pass1  , categorys , subcategorys  , &day.date , &day.month , &day.year )==8){
            
            
            if(strcmp(name , name1)==0 && strcmp(pass , pass1)==0){
                printf("amount: %d  category: %s subcategory: %s  Date %d-%d-%d\n"  , amt , categorys , subcategorys , day.date , day.month , day.year);
            }

        }
        fclose(fp);
        return;
}