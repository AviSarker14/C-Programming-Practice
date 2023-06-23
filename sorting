#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char ** argv, char * envp[]) {
    int i,j;
    char t[1024];
    int index=0;
    int size = 0;
    while(envp[index]) {
        printf("envp[%d]=\"%s\"\n", index, envp[index]);
    index++;
    }
    char ** list = malloc( size * sizeof(char *));
    char ** sort = malloc ( size * sizeof(char *));

    for(i = 0; i<size; i++) {
        list[i] = malloc(sizeof(envp[i]) * sizeof(char *));
        sort[i] = malloc(sizeof(envp[i]));
    }
    while(envp[i]) {
        strncpy(list[i], envp[i], sizeof(envp[i]));
        i++;
    }
    for(i=0;i<size-1;i++) {
        for(j=0;j<sizeof(list[i]); j++) {
            if(list[i][j] > list[i+1][j]) {
                strcpy(t,list[i]);
                strcpy(list[i], list[i+1]);
                strcpy(list[i+1],t);
                j =sizeof(list[i]);
            }
        }
    }
    printf("Sorted: \n");


    
    return 0;
}
