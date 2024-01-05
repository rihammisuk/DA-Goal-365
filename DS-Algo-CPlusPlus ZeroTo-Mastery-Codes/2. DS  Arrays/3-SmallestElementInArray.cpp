#include<iostream>
using namespace std;

int main(){
    cout<<  "Enter the number of elements "<< endl;
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n;i++){
        cin>> a[i];
    }

    //Efficient Solution
    //int smallestNumber = a[0];
    /*for(int i=0; i<n;i++){
        if(smallestNumber > a[i]){
            smallestNumber = a[i];
        }
    }*/
    int smallestNumber = INT_MAX;
    for(int i=0; i<n;i++){
        if(smallestNumber > a[i]){
            smallestNumber = a[i];
        }
    }
    cout << "Smallest Number is "<< smallestNumber<< endl;
    return 0;
}
