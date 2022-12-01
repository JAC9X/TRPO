#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int v, i, j, n, prod=1, k1=0, k2=0, sum=0, tmp=0, max, min;
    printf("Enter dimension of the array: ");
    scanf("%d", &n);
    int a[n];
    srand(time(0));
    printf("Generated array: \n");
    for (i=0; i<n; i++){
        a[i]=rand()%15+(-5);
        printf("%3d ",a[i]);
    }
    printf("\n");
    for (i=0; i<n; i++){
        if (a[i]<0){
            sum=sum+a[i];
            }
        }
    printf("Symma otritsatelnih elementov: %d\n", sum);
    max=a[0];
    for (i=0; i<n; i++){
        if (a[i]>max){
            max=a[i];
            v=i;
        }
    }
    min=a[0];
    for (i=0; i<n; i++){
        if (a[i]<min){
            min=a[i];
            j=i;
        }
    }
    if (j<v){
        for (i=j+1; i<v; i++){
            prod=prod*a[i];
        }
    }
    else{
        for (i=v+1; i<j; i++){
            prod=prod*a[i];
        }
    }
    printf("Max: %d\n", min);
    printf("Min: %d\n", max);
    printf("Proizvedenio elementov massiva mezhdy min i max elementami: %d\n", prod);
    for (i=0; i<n-1; i++){
        v=i;
        for (j=i+1; j<n; j++){
            if (a[v]>a[j]) v=j;
        }
        if (v!=i){
            tmp=a[i];
            a[i]=a[v];
            a[v]=tmp;
        }
    }   
    printf("Sorted array: \n");
    for (i=0; i<n; i++){
        printf("%3d", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
