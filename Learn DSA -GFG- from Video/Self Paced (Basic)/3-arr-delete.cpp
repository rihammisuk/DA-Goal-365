#include <iostream>
using namespace std;

void DeleteArr(int arr[], int arrLen, int value){
    int i;
    for(i=0; i < arrLen;i++){
        if(value == arr[i])
        {
            break;
        }
    }
    if(i == arrLen){
        return;
    }

    for(int j = i; j < arrLen-1;j++){
        arr[j]=arr[j+1];
    }

    arr[arrLen-1] = 0;
    cout <<endl  << "New : ";
    for(int i=0;i< arrLen;i++){
        cout <<arr[i] <<" ";
    }
}

int main(){
    int arr[5]= {1,2,3,4,5},value;
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    char choice;

    do{
        cout << "value : ";
        cin >> value;
        DeleteArr(arr, arrLen, value);
    cout <<endl<< "Do you want to insert more values? (y/n): ";
    cin >> choice;
    }while(choice == 'y' || choice =='Y');
    return 0;
}
