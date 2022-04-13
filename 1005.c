#include <stdio.h>

int main (){
    double n1;
    double n2;
    double media_ponderada;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    n1 = n1 * 3.5;
    n2 = n2 * 7.5;
    media_ponderada = (n1 + n2) / 11.0;
    printf("MEDIA = %.5lf\n", media_ponderada);
    return 0;
}
