#include<stdio.h>
#include"added.c"
#include"edited.c"
#include"view.c"
#include"category.c"
#include"total.c"
#include"dele.c"
extern void del(char[] , char[] );
extern void editedd(char[] , char[] );
extern void totall(char[] , char[]);
extern void search(char[] , char[]);
extern void vieww(char[] , char[]);
extern void addedd(char[] , char[], int );
void choices(char name[] , char pass[] , int lim){
int choice ;
printf("\nMAIN MENU :-\n");
printf("1 . Add Expense \n");
printf("2 . View Expense \n");
printf("3 . Edit Expense \n");
printf("4 . Delete Expense \n");
printf("5 . Total Expense \n");
printf("6 . Search  \n");
printf("7 . Exit \n");
printf("Enter the Option :");
    scanf("%d",&choice);
    switch(choice){
        case 1 :
        addedd(name , pass  , lim );
        break;
        case 2 :
        vieww(name , pass  );
        break;
        case 3 :
        editedd(name , pass);
        break;
        case 4 :
        del(name , pass);
        break;
        case 5 :
        totall(name , pass);
        break;
        case 6 :
        search(name , pass );
        break;
        case 7 :
        printf("Program End ");
        return;
        break;
        default:
        printf("Invalid input : \n\nEnter the Valid Option again :");
        choices(name , pass , lim); 
          
    }
    choices(name , pass , lim); 
}
    
    
  
