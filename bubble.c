#include <stdio.h>

void bubble(int arr[], int len){
    for (int i = 0; i < len - 1; i++){
        int flag = 0;
        for(int j = 0; j < len - i - 1; j++){
            if(arr[j] > arr[j+1]){
                flag = 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main(){
    int list[] = {5,0,99,88,21,4,3,5};
    int n = sizeof(list) / sizeof(list[0]);
    bubble(list, n);
    for(int i = 0; i < n; i++){
        printf("%d ", list[i]);
    }
    return 0;
}