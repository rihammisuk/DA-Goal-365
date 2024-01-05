#include <iostream>
using namespace std;

int main(){

    int a, b,temp;
    cin >> a>> b;
    cout<< "Before Swapping " << endl;
    cout<< "a is "<< a << endl;
    cout<< "b is "<< b << endl;
    //One way
    /*temp = a;
    a = b;
    b = temp;*/

    //2nd way
    /*a = a^b;
    b = a^b;
    a = a^b;*/

    //3rd way
    swap(a,b);
    cout<< "After Swapping " << endl;
    cout<< "a is "<< a << endl;
    cout<< "b is "<< b << endl;
    return 0;
}
