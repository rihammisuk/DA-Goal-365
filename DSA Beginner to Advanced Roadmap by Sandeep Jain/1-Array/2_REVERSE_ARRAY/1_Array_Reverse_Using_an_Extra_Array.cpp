#include <iostream>
using namespace std;

void reverseArrayExtraArray(int originalArr[],int size){
    int reversedArr[size];
    for(int i=0; i < size ; i++){
        reversedArr[i] = originalArr[size-i-1];
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << reversedArr[i] << " ";
    }
}

int main(){
    int originalArr[]={1,2,3,4,5};
    int size = sizeof(originalArr)/sizeof(originalArr[0]);

    reverseArrayExtraArray(originalArr, size);
    return 0;
}