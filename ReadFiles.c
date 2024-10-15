#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    FILE *filePointer;

    //if there isn’t a file at that file path
    if ((filePointer = fopen("..\\program.txt","r")) == NULL){     printf("Error! opening file");
        exit(1); // Program exits if the file pointer returns NULL.
    }

    fscanf(filePointer,"%d", &num);   //file version of scanf function, reads in an integer from the file

    printf("Value of n=%d", num); //and then displays it on screen
    fclose(filePointer);
    return 0; }
