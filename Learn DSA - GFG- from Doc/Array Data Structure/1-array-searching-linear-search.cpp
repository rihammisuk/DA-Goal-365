#include <iostream>
using namespace std;

linearSearch(int arr[], int n, int key){
    for(int i =0;i<n;i++){
        if(arr[i]== key)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int key = 54;

    int index = linearSearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
