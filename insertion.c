#include <stdio.h>
void insertion(int arr[], int len){
    for(int i = 1; i < len; i++){
        int j = i - 1;
        int temp = arr[i];
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main (){
    int notSorted [] = {101, 3, 5, 8, 99, 0 , 57};
    int len = sizeof(notSorted) / sizeof(notSorted[0]);
    insertion(notSorted, len);
    for (int i = 0; i < len; i ++){
        printf("%d ", notSorted[i]);
    }
    return 0;

}