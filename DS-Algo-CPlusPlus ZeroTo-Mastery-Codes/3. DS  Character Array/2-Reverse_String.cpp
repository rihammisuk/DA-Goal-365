#include <iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverseString(char input[]){
    int start= 0;
    int end = length(input)-1;
    while(start < end){
        swap(input[start],input[end]);
        start++;
        end--;
    }
}

int main(){
    char name[100];
    cout<<"Enter name "<<endl;
    cin.getline(name,100);
    reverseString(name);
    cout<< "Reverse String "  << name;
    return 0;
}
