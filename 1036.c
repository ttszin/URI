#include<stdio.h>
#include<math.h>

void bhaskara(double a,double b,double c);

double delta(double a,double b,double c){
    double res;
    res = b*b - 4*a*c; 
    
    return res;
    
}

int main(){

    double a,b,c,deltaa;
    

    scanf("%lf %lf %lf",&a,&b,&c);
    
    deltaa = delta(a,b,c);
 
    if((deltaa<0)||(a==0)){
        printf("Impossivel calcular\n");
    }


    
    else if (deltaa>0){
        double x1,x2;
        x1 = (-b+sqrt(deltaa))/(2*a);
        x2 = (-b-sqrt(deltaa))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
    }    
    

    return 0 ;
}