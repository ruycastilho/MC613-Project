#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *train_original = fopen(argv[1], "r");
    char garbage;
    
    do{
        fscanf(train_original, "%c", &garbage);
    }   while(garbage != '\n');
    
    FILE *train_new = fopen("train_new.txt", "w");
    int data;
    
    while(fscanf(train_original, "%d", &data) != EOF){
        fscanf(train_original, "%c", &garbage);
        fprintf(train_new, "%d ", data);          
        if(garbage == '\n')
            fprintf(train_new, "%c", garbage);                  
    }

    
    return 0;
}
