#include <iostream>
using namespace std;

int DeleteArr(int arr[], int arrLen, int value){
    int i;
    for(i=0; i < arrLen;i++){
        if(value == arr[i])
        {
            break;
        }
    }
    if(i == arrLen){
        return arrLen;
    }

    for(int j = i; j < arrLen-1;j++){
        arr[j]=arr[j+1];
    }


    return (arrLen-1);
}

int main(){
    int arr[5]= {1,2,3,4,5},value;

    char choice;

    do{
        int arrLen = sizeof(arr)/sizeof(arr[0]);
        cout << "value : ";
        cin >> value;
        arrLen = DeleteArr(arr, arrLen, value);
        for(int i=0; i < arrLen;i++){
            cout << arr[i] <<" ";
        }
    cout <<endl<< "Do you want to insert more values? (y/n): ";
    cin >> choice;
    }while(choice == 'y' || choice =='Y');
    return 0;
}
