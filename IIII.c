#include <stdio.h>

long long int mcd();
int main(){
    
    long long int a, b, c;
    long long int total, MCD;
    
    scanf("%lld %lld %lld", &a, &b, &c);
    while(a+b+c!=0){
        MCD = mcd(mcd(a, b), c);
        if(MCD == 1){
            printf("%lld\n", a+b+c);
        }else{
            total = a/MCD + b/MCD + c/MCD;
            printf("%lld\n", total);
        }

        scanf("%lld %lld %lld", &a, &b, &c);
    }
    
    return 0;
}

long long int mcd(long long int a,long long int b) {
    if(b == 0){
	    return a;
    }else{ 
	    return mcd(b,a%b);
    }
}
