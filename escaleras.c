#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int casos;
    scanf("%d", &casos);
    int yo, escalones, pisos, esc;
    int totalesc;
    int recorrido;
    int total;

    for(int i = 0; i<casos; i++){
        scanf("%d %d %d %d", &yo, &escalones, &pisos, &esc);
        totalesc = yo*escalones;
        recorrido = pisos*escalones+esc;
        total = recorrido*2+(totalesc-recorrido);
        printf("%d %d\n", recorrido, total);
    }

    return 0;
}