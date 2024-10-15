#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    FILE *fileP;

    fileP = fopen("..\\program.txt","w");
    //opens/creates file to write to

    if(fileP == NULL)    {
        printf("Error!");
        exit(1);}
    //if it can’t create the file it shows an error and exits

    printf("Enter num: ");
    scanf("%d",&num);

    fprintf(fileP,"%d",num); //writes the input number to the file
    fclose(fileP);

    return 0;
}