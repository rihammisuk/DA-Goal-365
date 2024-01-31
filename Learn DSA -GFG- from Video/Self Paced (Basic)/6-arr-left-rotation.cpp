#include <iostream>
using namespace std;

void left_rotation(int arr[], int n){

    int i = 0;
    int temp = arr[i];
    while(i<n){
        arr[i-1] = arr[i];
        i++;
    }
    arr[n-1]= temp;
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }

}
int main(){
    int arr[] = {6,3,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    left_rotation(arr,n);
    return 0;
}
