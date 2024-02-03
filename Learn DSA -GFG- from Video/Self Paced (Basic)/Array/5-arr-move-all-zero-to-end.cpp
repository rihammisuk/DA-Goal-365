#include <iostream>
using namespace std;

void move_all_zeros_to_end(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
}
int main(){
    int arr[] = {8,5,0, 10, 0,13,3,0,1,0, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    move_all_zeros_to_end(arr,n);
    return 0;
}
