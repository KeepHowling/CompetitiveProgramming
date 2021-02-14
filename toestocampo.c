#include <stdio.h>
int main(){
    
    int abu, iglesia;
    
        scanf("%d %d", &abu, &iglesia);
        while(abu+iglesia!=0){
            
            if(abu>=iglesia){
                printf("CUERDO\n");
            }else{
                printf("SENIL\n");
            }

            scanf("%d %d", &abu, &iglesia);
        }
    
    return 0;
}