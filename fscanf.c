#include <stdio.h>

int main(void){
char fname[10], sname[15];
    int year;
    FILE *file;
    file=fopen("..//data.txt","r");
    while (fscanf(file, "%s %s %d", fname, sname,&year)!=EOF) {
       printf("String read: %s \n",fname);
        printf("String read: %s \n",sname);
        printf("String read: %d \n",  year);
    }
    fclose(file);
    return 0;
}