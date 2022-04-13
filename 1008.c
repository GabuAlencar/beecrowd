#include <stdio.h>

int main (){
    int nf, ht;
    double vh;
    double sf;
    scanf("%d %d ", &nf, &ht);
    scanf("%lf", &vh);
    sf = ht * vh;
    printf("NUMBER = %d\n", nf);
    printf("SALARY = U$ %.2lf\n", sf);

    return 0;
}
