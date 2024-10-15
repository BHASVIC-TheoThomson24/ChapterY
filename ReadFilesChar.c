#include <stdio.h>

int main (void) {
    char c;
    FILE *file;
    file=fopen("..\\numbers.txt","r");
    if (file==NULL) {
        printf("Error opening file.\n");
        return -1;
    }

    while(c!=EOF) {
        c=fgetc(file);
        printf("%c \t",c);
    }

    printf("\n\n now closing file... \n");
    fclose(file);
    return 0;
}