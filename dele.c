#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void del(char name[50], char pass[50]) {
    struct se {
        int amt;
        char name1[50];
        char pass1[50];
        char categorys[50];
        char subcategorys[50];
        int date ; 
        int month ; 
        int year;
    } nedata;
    printf("Delete \n");
    printf("1 . Category  :\n");
    printf("2 . subcategory : \n");
    int choice  , issub = 0; 
    scanf("%d",&choice );
    switch(choice){
        case 1 :
        break;
        case 2 :
        issub = 1 ; 
        break;
        default :
        printf("invalid choice \n");
        printf("enter your choice again");
        del(name , pass);
        return;

    }

    int newamt;
    char cat[50];
    char subcat[50];
    int dates ; 
    int months ; 
    int years;

    printf("Enter the category to be deleted: ");
    scanf("%s", cat);
    if(issub == 1){
        printf("enter the subcategory to be deleter :");
        scanf("%s", subcat);
        printf("enter the date :");
        scanf("%d %d %d" , &dates , &months , &years);
    }
    

    FILE *fp = fopen("data.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    int iscat = 0;

    while (fscanf(fp, "%d %s %s %s %s %d %d %d", &nedata.amt, nedata.name1, nedata.pass1, nedata.categorys , nedata.subcategorys, &nedata.date , &nedata.month , &nedata.year) == 8) {
        if(issub == 0){
        if (strcmp(name, nedata.name1) == 0 && strcmp(pass, nedata.pass1) == 0 && strcmp(cat, nedata.categorys) == 0 ) {
             iscat = 1;
        }else{
        fprintf(temp, "%d %s %s %s %s %d %d %d\n", nedata.amt, nedata.name1, nedata.pass1, nedata.categorys , nedata.subcategorys , nedata.date , nedata.month , nedata.year);
        }
    }
    else if(issub ==1){
        if (strcmp(name, nedata.name1) == 0 && strcmp(pass, nedata.pass1) == 0 && strcmp(cat, nedata.categorys) == 0 && strcmp(subcat, nedata.subcategorys) == 0 && dates == nedata.date && months == nedata.month && years  == nedata.year ) {
            iscat = 1;
       }else{
       fprintf(temp, "%d %s %s %s %s %d %d %d\n", nedata.amt, nedata.name1, nedata.pass1, nedata.categorys , nedata.subcategorys , nedata.date , nedata.month , nedata.year);
       }
    }
    }
    if(iscat ==0){
        printf("Nosuch data found\n");
    }
    else{
        printf("data deleted sucessfully\n");
    }

    fclose(fp);
    fclose(temp);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    
}
