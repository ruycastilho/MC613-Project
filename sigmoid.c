#include <stdio.h>
#include <math.h>

#define EXAMPLES 100

void sigmoid(int matrix[][10]){
    for(int i = 0; i < EXAMPLES; i++)
        for(int j = 0; j < 10; j++)
            matrix[i][j] = 1/(1+exp(-1*matrix[i][j]));
}
