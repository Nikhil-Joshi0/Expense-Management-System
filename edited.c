#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void editedd(char name[50], char pass[50]) {
    struct se {
        int amt;
        char name1[50];
        char pass1[50];
        char categorys[50];
        char subcategorys[50];
        int dates;
        int months ; 
        int years ; 
    } nedata;
    struct calander{
        int date;
        int month ; 
        int year ; 
    }day;
    int newamt;
    char cat[50];
    char subcat[50];

    printf("Enter the new amount: ");
    scanf("%d", &newamt);
    printf("Enter the category to be edited: ");
    scanf("%s", cat);
    printf("Enter the sub sub category to be edited: ");
    scanf("%s",subcat);
    printf("Enter the date :");
    scanf("%d %d %d" ,&day.date ,&day.month , &day.year);

    FILE *fp = fopen("data.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    int issubcat = 0;
    while (fscanf(fp, "%d %s %s %s %s %d %d %d", &nedata.amt, nedata.name1, nedata.pass1, nedata.categorys , nedata.subcategorys , &nedata.dates , &nedata.months , &nedata.years) == 8) {
        if (strcmp(name, nedata.name1) == 0 && strcmp(pass, nedata.pass1) == 0 && strcmp(cat, nedata.categorys) == 0 && strcmp(subcat, nedata.subcategorys) == 0 && nedata.dates == day.date && nedata.months == day.month && nedata.years == day.year ) {
            nedata.amt = newamt; 
            issubcat = 1;
        }
        fprintf(temp, "%d %s %s %s %s %d %d %d\n", nedata.amt, nedata.name1, nedata.pass1, nedata.categorys , nedata.subcategorys , nedata.dates , nedata.months , nedata.years);
    }
    if(issubcat == 0){
        printf("No such Data found\n");
    }
    else{
        printf("Amount Updated successfully\n");
    }

    fclose(fp);
    fclose(temp);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    
}
