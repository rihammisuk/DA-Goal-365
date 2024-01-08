#include<iostream>
using namespace std;

int main(){

    int row, column;
    cout<< "Enter Row Number : ";
    cin >> row;
    cout<< "Enter Column Number : ";
    cin >> column;
    int matrix[row][column];

    cout<< "Enter Row, Column value : ";
    for(int i=0; i<row;i++){
       for(int j=0; j<column;j++){
            cin >> matrix[i][j];
        }
    }

    cout<< "Row wise data "<<endl;
    for(int i=0; i<row;i++){
       for(int j=0; j<column;j++){
            cout << matrix[i][j] <<" ";
        }
        cout<< endl;
    }
    cout<< "Column wise data "<<endl;
    for(int i=0; i<row;i++){
       for(int j=0; j<column;j++){
            cout << matrix[j][i] <<" ";
        }
        cout<< endl;
    }

    return 0;
}
