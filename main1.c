#include <stdio.h>
#include "isort.h"

int main(){
    int i = 0;
    int arr[ARRAYSIZE];
    while (i < 50){
        printf("Enter a real number");
        scanf("%d", (arr + i));
        i++;
    }
    insertion_sort(arr, 50);
    int j;
    for(j = 0; j < 49; j++)
        printf("%d,", arr[j]);
    printf("%d", arr[49]);
    
    return 0;
}
