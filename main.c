#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct information {
    char name[20],firstname[20];
};

int i,j;
i=0;
struct information info[100];
void welcom (){
    system("cls");
    printf("\t\t\t\t\t\twelcom to this program <3");
}

void addition(){
    system("cls");
    printf("\tenter the name of person %d:",i+1);
    scanf_s("%s",&info[i].name);
    printf("\tenter the firstname of person %d:",i+1);
    scanf_s("%s",&info[i].firstname);
    i++;
    system("cls");
    printf("\t\t\t\t\t\t<%s have been added>",&info[i-1].name);
    getch();
    main();
}
void deletes(){
    system("cls");
    char deletee[100];
    int x;
    printf("\tenter the name or first name of person you need to delete:");
    scanf_s("%s",deletee);
    for (j=0;j<i;j++){
    if( strcmp(deletee,info[j].firstname)==0
        ||strcmp(deletee,info[j].name)==0 )
    {break;} }


    if (j==i){
        getch();
        printf("There is an error in the name");
        deletes();
    }
    else
    for (x=j;x<i;x++){
        strcpy(info[x].firstname,info[x+1].firstname);
        strcpy(info[x].name,info[x+1].name);
    }
        printf("done");
    i--;
    system("cls");
    printf("\t\t\t\t\t\t<done>");
    getch();
    main();
}
void modification(){
    system("cls");
    char modifi[100];
    printf("\tenter name or first name of person you need to modifit:");
    scanf_s("%s",modifi);
    for (j=0;j<i;j++){
    if( strcmp(modifi,info[j].firstname)==0
        ||strcmp(modifi,info[j].name)==0 )
        {break;} }
    if(j==i){
        printf("There is an error in the name");
        getch();
        modification();
    }
    else {
    printf("\tenter new name: ");
    scanf_s("%s",&info[j].name);
    printf("\tenter new firstname: ");
    scanf_s("%s",&info[j].firstname);
    system("cls");
    printf("\t\t\t\t\t\t<done>");
}
    getch();
    main();
}
void display(){
    system("cls");
    printf("\n\t\t\tthis is all pepole you saved:\n");
    int x;
    for(x=0;x<i;x++){
        printf("\n--------------\n");
        printf("\n\t\tinformation %d\n",x+1);
        printf("\tname: %s\n",info[x].name);
        printf("\tfirstname: %s\n",info[x].firstname);
        printf("\n--------------\n");
    }
    getch();
    main();
}
int main()
{
    int choix;
    welcom();
    printf("\n\tenter 1 for add\n");
    printf("\tenter 2 for modifite\n");
    printf("\tenter 3 for delete \n");
    printf("\tenter 4 for afiche\n");
    scanf("%d",&choix);
    switch (choix){
    case 1:addition();break;
    case 2:modification();break;
    case 3:deletes();break;
    case 4:display();break;
    }
    return 0;
}
