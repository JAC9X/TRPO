#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    float x,y;
    printf("vvedite x: ");
    scanf("%f", &x);
    if (x>2.5)
        y = x-2;
    else if ((x>=0) && (x<=2.5)) 
        y = 1 + pow(x,2);
    else 
        y = x * log(fabs(cos(x)));
    printf("y=%f\n", y);
    system("pause");
    return 0;
}