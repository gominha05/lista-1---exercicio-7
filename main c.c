#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a;
    float b;
    float c;
    float X1;
    float X2;
    float XV;
    float YV;
    int d;

    printf("Para a funcao y = ax^2+bx+c\n o coeficiente a:");
    scanf("%f",&a);

    printf("\ninsira o coeficiente b:");
    scanf("%f",&b);

    printf("\ninsira o coeficiente c:");
    scanf("%f",&c);

    if(a>=0){
        printf("\n\nsua concavidade e para cima.");
    }
    else{
        printf("\n\nsua concavidade e para baixo.");
    }

    d = (b*b) - 4*a*c;
    X1 = (-(b)+sqrt(d))/(2*a);
    X2 = (-(b)-sqrt(d))/(2*a);

    printf("\n\nsuas raizes sao (%f,%f)",X1,X2);

    XV = (-(b))/(2*a);
    YV = (-(d))/(4*a);

    printf("\n\no vertice da funcao e: (%f,%f)",XV,YV);

    return 0;

}
