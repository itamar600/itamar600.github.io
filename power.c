#include <stdio.h>
double Pow(double x , int y);
#define EXP 2.718281828
double Exp(int x){
   return(Pow(EXP,x));
    
}
double Pow(double x , int y){
    if(y==0){
       return 1;
    }
    int negative=0;
    if(y<0){
       negative=1;
       y=y*(-1);
    }
    double pw=1;
    for(int i=0; i<y; i++){
       pw=pw*x;
    }
    if(negative==0){
       return pw;
    }
    else
    {
       return 1/pw;
    }
    
}
