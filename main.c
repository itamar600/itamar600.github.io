#include <stdio.h>
#include "myMath.h"
int main(){
    double x;
    printf("Please inset a real number: \n");
    if( scanf("%lf" , &x )!=1){
        printf("ERROR: the insert illegel\n");
        return 1;
    }
    double f1= sub(add(Exp((int)x),Pow(x,3)),2);
    double f2= add(mul(3,x),mul(2,Pow(x,2)));
    double f3=sub(div(mul(4,Pow(x,3)),5),mul(2,x));
    printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %0.4f is: %0.4f\n",x, f1);
    printf("The value of f(𝑥) = 3𝑥 + 2x^2 at the point %0.4f is: %0.4f\n",x ,f2);
    printf("The value of f(𝑥) =(4x^3)/5 - 2x at the point %0.4f is: %0.4f\n",x ,f3);
    return 0;
}
