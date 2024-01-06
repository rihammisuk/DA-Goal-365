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

    //My Implementation
    /*int half = n/2;
    for(int i=0; i<n;i++){
        if(i <= half){
            //int temp = arr[i];
            //arr[i] = arr[n-i-1];
            //arr[n-i-1] = temp;
            swap(arr[i],arr[n-i-1]);
        }
        else{
            break;
        }
    }*/

    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }


    cout<< "After Reverse The Array "<< endl;
    for(int i=0;i< n;i++){
        cout << arr[i] << " ";
    }
    return 0;
 }
