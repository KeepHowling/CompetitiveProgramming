#include <stdio.h>
int main(){
    int inicio, anio, suma, unidades;
        
    while(scanf("%d %d", &inicio, &anio) == 2){
        
        suma = anio%10;

     
        if((inicio + 9)%10 == suma){
            printf("FELIZ DECADA NUEVA\n");
        }else{
            printf("TOCA ESPERAR\n");
        }
        
    }
    return 0;
}