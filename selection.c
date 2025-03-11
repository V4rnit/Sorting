#include <stdio.h>

void selection(int arr[], int len){
    for (int i = 0; i < len - 1; i++){
        int min = i;
        for(int j = i; j < len; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){
    int fooL[] = {1,4,66,99,200,3,58,20};
    int n = sizeof(fooL) / sizeof(fooL[0]);
    selection (fooL, n);
    for(int i = 0; i < n; i++){
        printf("%d ", fooL[i]);
    }
    return 0;
}