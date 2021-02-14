#include <stdio.h>
#include <stdlib.h>
long int comp(const void *_a, const void *_b) {
    int *a, *b;
    a = (int *) _a;
    b = (int *) _b;
    return (*a - *b);
}

int main(){
    long int nuvas, pesomax;
    long int i;
    
    long int j = 0;
        
    while(scanf("%ld %ld", &nuvas, &pesomax) == 2){
        j = 0;
        long  int * x = (long int*) malloc(nuvas * sizeof( long int));
        for(i = 0; i<nuvas; i++){
            scanf("%ld", &x[i]);
        }
        //ordenamos el array
        qsort (x, nuvas, sizeof( long int), &comp);

        if(nuvas == 1 && x[0]<=pesomax){
            printf("1\n");
        }else if(nuvas == 1 && x[0]>=pesomax){
            printf("0\n");
        }else{
            while(x[j]+x[j+1] <= pesomax) {
                j++;
            }
            printf("%ld\n", j+1);
        }
    }
    return 0;
}