 #include<iostream>
 using namespace std;

 int main(){
    cout << "Enter the number of elements "<< endl;
    int n;
    cin >> n;
    int a[n], sum = 0;

    for(int i = 0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        cout << a[i] << " ";
    }

    cout<< endl<< sum<< endl;
    return 0;
 }
