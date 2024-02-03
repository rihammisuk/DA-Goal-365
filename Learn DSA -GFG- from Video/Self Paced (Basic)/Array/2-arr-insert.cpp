#include <iostream>
using namespace std;

void insertArr(int arr[],int arrLen, int pos, int value){
        if (pos <= 0 || pos > arrLen) {
            cout << "Invalid index for insertion" << endl;
            return ;
        }
        else{
            for(int i=arrLen-1;i >=pos-1;i--){
                arr[i+1] = arr[i];
            }
            arr[pos-1] = value;
            cout << "Updated array : ";
            for(int i=0;i< arrLen;i++){
                cout<< arr[i] << " ";
            }
        }

}

int main(){
    int arr[5]= {1,2,4,5},pos,value;
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    char choice;
    do{
        cout << "position : ";
        cin >> pos;

        cout << "value : ";
        cin >> value;

        insertArr(arr, arrLen, pos, value);


    cout <<endl<< "Do you want to insert more values? (y/n): ";
    cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    return 0;
}
