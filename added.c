#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void addedd(char name[] , char pass[] , int limit){
    
    struct cat{
        int amt; 
        char category[50];
        char subcategory[50];
    }user; 
    struct calander{
        int date;
        int month ; 
        int year ; 
    }day;

    

       printf("enter the amount:");
        scanf("%d",&user.amt);
        printf("enter category: ");
        scanf("%s",user.category);
        printf("enter the subcategory: ");
        scanf("%s",user.subcategory);
        printf("enter the (date Month Year) :");
        scanf("%d %d %d" , &day.date , &day.month , &day.year);

            int tots = 0 ; 
    FILE *fp = NULL;
        int amt ; 
        char categoryss[50] , name1[50] , pass1[50] , subcategoryss[50];
        struct calande{
            int date;
            int month ; 
            int year ; 
        }days;
        fp = fopen("data.txt","r");
        if(fp == NULL){
            printf("Error");
            exit(1);
        }
        while(fscanf(fp , "%d %s %s  %s %s %d %d %d", &amt,name1 , pass1  , categoryss , subcategoryss , &days.date , &days.month , &days.year )==8){
            
            
            if(strcmp(name , name1)==0 && strcmp(pass , pass1)==0 &&  days.month == day.month && days.year == day.year){
               tots += (amt );
            }

        }
       
        fclose(fp);
        
        int isadd = 1 ;
        if(tots + user.amt >limit){
            isadd =0;
}
        if(isadd ==1){
       
            FILE *fp = fopen("data.txt", "a"); 
            if(fp == NULL){
                printf("Error");
                exit(1);
            }
        fprintf(fp , " %d %s %s %s %s %d %d %d\n" , user.amt , name , pass , user.category , user.subcategory , day.date , day.month , day.year);
        printf("Data Added ");
        
        
        
       
        fclose(fp);
        }
        else{
            printf("limit exceed");
        }
        return;
}