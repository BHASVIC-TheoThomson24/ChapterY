#include <stdio.h>
#include <stdlib.h>
int main(void) {
FILE *file;
char name[30];
int code, chars, i, n, marks;
file=fopen("..//text.txt","w");

if (file==NULL) {
    printf("Error opening file \n");
    exit(1);
}

printf("How many people do you want to enter data for: \n");
    scanf("%d",&n);

    for (i=0;i<n;i++) {
        fflush(stdin);
        printf("Enter name of student %d: \n",i+1);
        gets(name);
        printf("Enter ID number: \n");
        scanf("%d",&code);
        printf("Enter total mark: \n");
        scanf("%d",&marks);
        chars=fprintf(file,"Name:%s\t\t ID: %d\t\tMark:%d\n",name,code,marks);
        printf("\n%d characters successfully written to file\n\n",chars);
    }
    printf("\n");
    fclose(file);
    return 0;
    }