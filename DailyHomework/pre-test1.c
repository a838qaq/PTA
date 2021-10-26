#include <stdio.h>
#include <math.h>

double ftoc(double f){
    return (f - 32) / 1.8;
}


double ctof(double c){
    return c * 1.8 + 32;
}


int main(){
    double temper = 0;
    char kb;
    double lim_c = -273.15;
    double lim_f = lim_c * 1.8 + 32;
    
    scanf("%lf %c", &temper, &kb);
    
//    if(kb == 'C') printf("1");
    if(kb == 'C'){
        if(!(temper < lim_c)) printf("%.2lf F", ctof(temper));
        else printf("Invalid");
    }
    if(kb == 'F'){
        if(!(ftoc(temper) < lim_c)) printf("%.2lf C",ftoc(temper));
        else printf("Invalid");
    } 
    return 0;
    
}