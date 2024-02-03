#include <iostream>
using namespace std;

void reverseArr(int arr[], int n){
    while(n--){
        cout<< arr[n] <<  " ";
    }
}

void reverseArr2(int arr[], int n){
    int low = 0;
    int high = n-1;
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }

}
int main(){
    int arr[] = {30,7,6,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArr2(arr,n);
    return 0;
}
