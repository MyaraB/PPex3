#include <stdio.h>
#include "isort.h"

void shift_element(int* arr, int i){
    while (i > 0)
    {
        int temp = *(arr - 1 + i);
        *(arr + i) = temp;
        i--;
    }
}
void insertion_sort(int* arr, int len){
    for (int i = 0; i < len - 1; i++)
        for(int j = i + 1; j < len; j++)
            if(*(arr + i) > *(arr + j)){
                int temp = *(arr + j);
                shift_element(arr + i, j - i);
                *(arr + i) = temp;
            }
}
