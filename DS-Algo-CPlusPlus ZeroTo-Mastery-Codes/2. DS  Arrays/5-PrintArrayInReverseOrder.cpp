 #include <iostream>
 using namespace std;

 int main(){
    int n;
    cin >> n;
    int arr[n];

    cout<< "Give Array "<< endl;
    for(int i=0;i< n;i++){
        cin >> arr[i];
    }
    cout<< "Reverse Array "<< endl;
    for(int i=n-1;i>=0;i--){
        cout<< arr[i] <<" " ;
    }
    return 0;
 }
