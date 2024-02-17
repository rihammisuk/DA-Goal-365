#include <iostream>
using namespace std;

int findElement(int arr[], int n, int key){
    for (int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;

}

int deleteElement(int arr[], int n, int key){
    int position = findElement(arr, n, key);
    if(position == -1){
        cout << "Element not found";
        return n;
    }
    for(int i=position; i < n-1; i++ ){
        arr[i]= arr[i+1];
    }
    return n-1;
}



int main(){
    int arr[]={10,50, 30, 40, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 30;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";


      // Function call
    n = deleteElement(arr, n, key);

    cout << "\n\nArray after deletion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;

}
