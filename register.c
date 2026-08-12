#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int regi(){
    struct regis{
        char name[50] , pass[50] ;
        int limit;
    }reg;
    

    printf("\nEnter the user name :");
    scanf("%s",reg.name);
    
    printf("\nEnter the user password :");
    scanf("%s",reg.pass);
     
    printf("\nenter your monthly limit :");
    scanf("%d",&reg.limit);
  

   
        FILE *fp = NULL;
   
    
    fp = fopen("reg.txt","a");
    if(fp == NULL){
        printf("Error");
        exit(1);
    }
    fprintf(fp , "%s %s %d\n" , reg.name, reg.pass ,reg.limit);
    printf("Register successful\n");
    
    
    
    


fclose(fp);
return 1;
}