#include<stdio.h>
void totall(char name[50] , char pass[50]){
    int tot = 0 ; 
    FILE *fp = NULL;
        int amt ; 
        char categorys[50] , name1[50] , pass1[50] , subcategorys[50];
        struct calander{
            int date;
            int month ; 
            int year ; 
        }day;
        fp = fopen("data.txt","r");
        if(fp == NULL){
            printf("Error");
            exit(1);
        }
        while(fscanf(fp , "%d %s %s  %s %s %d %d %d", &amt,name1 , pass1  , categorys , subcategorys , &day.date , &day.month , &day.year )==8){
            
            
            if(strcmp(name , name1)==0 && strcmp(pass , pass1)==0){
                tot += (amt );
            }

        }
        printf("Total expense : %d",tot);
        fclose(fp);
        return ;
}