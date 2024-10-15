#include <stdio.h>
int main(void) {
char c[10];
    FILE *file;
    file=fopen("..\\data.txt","r");

while(fgets(c,10,file)!=NULL) {
    printf("String: %s \n",c);
}
fclose(file);

    return 0;
}