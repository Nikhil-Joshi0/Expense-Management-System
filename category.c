#include<stdio.h>
void search(char name[] , char pass[] ){
    
        printf("Search by :\n");
        printf("1 .Category :\n");
        printf("2 .monthy :\n");
       
        char cati[50];
        int input  , months , dates , years , issearch = 0 ; 
        printf("enter your choice:");
        scanf("%d",&input);
        switch(input){
            case 1 :
            printf("enter the category");
            scanf("%s",cati);
            issearch = 1 ;
            break;
            case 2 :
            printf("Enter the (Month Year):");
            scanf("%d %d",&months , &years);
            issearch =2 ;
            break;
            default :
            printf("Invalid Choice");
            printf("enter the valid coice:\n");
            search(name , pass);
            return ;
        }
        
        
    FILE *fp = NULL;
        int amt;
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
        int iscategory = 0 , total = 0;
        while(fscanf(fp , "%d %s %s %s %s %d %d %d", &amt,name1 , pass1  , categorys ,subcategorys , &day.date , &day.month , &day.year )==8){
            
            if(issearch == 1){
            if(strcmp(name , name1)==0 && strcmp(pass , pass1)==0 && strcmp(categorys , cati)== 0){
                total = total + amt;
                printf(" Amount :%d  Subcategory: %s   Date : %d-%d-%d\n" , amt  , subcategorys , day.date , day.month , day.year);
                iscategory =1;
            }

        }
        else if(issearch ==2){
            if(strcmp(name , name1)==0 && strcmp(pass , pass1)==0 && day.month == months && day.year == years ){
                total = total + amt;
                printf(" Amount :%d category : %s Subcategory: %s   Date : %d-%d-%d\n" , amt  , categorys, subcategorys , day.date , day.month , day.year);
                iscategory =1;
            }

        }
      
    }
        if(iscategory == 0){
            printf("No such data found :\n");
        }
        else{
            printf("Total  expense : %d" , total);
        }
        fclose(fp);
        return;
}