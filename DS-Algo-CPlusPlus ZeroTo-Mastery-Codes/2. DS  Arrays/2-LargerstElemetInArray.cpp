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
    /*int largerstNumber = a[0];

    for(int i=1; i<n;i++){
        if(largerstNumber < a[i]){
            largerstNumber = a[i];
        }
    }
    */
    int largerstNumber = INT_MIN;
    for(int i=0; i<n;i++){
        if(largerstNumber < a[i]){
            largerstNumber = a[i];
        }
    }
    cout << "Largest Number is "<< largerstNumber<< endl;
    return 0;
}
