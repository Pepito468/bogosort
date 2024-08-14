#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 14


void bogosort(int* arr){
    bool flag = true;
    int temp;
    while (flag){
        for (int i = 0; i < SIZE; i++){
            int index1 = rand() % SIZE;
            int index2 = rand() % SIZE;
            temp = arr[index1];
            arr[index1] = arr[index2];
            arr[index2] = temp;
        }
        flag = false;
        for (int i = 0; i < SIZE - 1; i++){
            if (arr[i] > arr[i + 1]){
                flag = true;
                break;
            }
        }
    }

}

int main(){

    int arr[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++){
        arr[i] = rand() % SIZE;
        printf("%d ", arr[i]);
    }
    printf("\n");

    bogosort(arr);

    for (int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}