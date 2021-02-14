#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int casos;
    scanf("%d", &casos);
    int l, a, al, l2, a2, al2;
    int cara1, cara2, cara3;
    int micara1, micara2, micara3;
    
    int i = 0;
    while(i < casos){
        scanf("%d %d %d %d %d %d", &l, &a, &al, &l2, &a2, &al2);
        cara1 = l2*a2;
        cara2 = a2*al2;
        cara3 = l2*al2;
        micara1 = l*a;
        micara2 = a*al;
        micara3 = l*al;
        if(l>=l2 || l>=a2 || l>=al2 || a>=l2 || a>=a2 || a>=al2 || al>=l2 || al>=a2 || al>=al2){
            printf("NO SIRVE\n");
        }else{
            printf("SIRVE\n");
        }

        i++;
    }
    return 0;
}
