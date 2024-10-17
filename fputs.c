#include <stdio.h>

int main(void) {
FILE *file;
char sentence[30];
file=fopen("..//sentence.txt","a+");
printf("Enter a sentence : \n");
gets(sentence);
fputs(sentence,file);
fputs("\n",file);
rewind(file);
printf("Contents of the file: \n\n");
while(fgets(sentence,10,file)!=NULL) {
    printf("%s",sentence);
}
printf("\n");
fclose(file);
    return 0;
}