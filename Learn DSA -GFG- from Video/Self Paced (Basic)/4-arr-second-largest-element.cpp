#include <iostream>
using namespace std;

int SecondLargestIndexFunc(int arr[],int arrLen){
    int SecondLargestIndex = -1;
    int largestIndex = 0;
    if (arrLen < 2) {
        cout << "Array has less than two elements." << endl;
        return -1;
    }
    for(int i =0; i< arrLen; i++){
        if(arr[i] > arr[largestIndex]){
            SecondLargestIndex = largestIndex;
            largestIndex = i;
        }else if(arr[i] != arr[largestIndex]){
            if(SecondLargestIndex == -1 || arr[i] > arr[SecondLargestIndex]){
                SecondLargestIndex =i;
            }
        }
    }
    return SecondLargestIndex;
}

int main(){
    int arr[] = {1,5,4,2,3};

    char choice;

    do{
        int arrLen = sizeof(arr)/sizeof(arr[0]);
        int secondLargestIdx  = SecondLargestIndexFunc(arr,arrLen);
        if (secondLargestIdx != -1)
            cout << "Index of the second largest element: " << secondLargestIdx << endl;
        else
            cout << "Array does not have a second largest element." << endl;


    cout <<endl<< "Do you want to insert more values? (y/n): ";
    cin >> choice;
    }while(choice == 'y' || choice =='Y');
    return 0;
}
