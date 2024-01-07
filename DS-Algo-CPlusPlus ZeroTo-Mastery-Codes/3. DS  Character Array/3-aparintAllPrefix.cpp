#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void PrintAllPrefix(char input[]){
    for(int i=0;input[i]!='\0';i++){
        for(int s=0;s<=i;s++ ){
            cout<< input[s];
        }
        cout<< endl;
    }
}

int main(){
    char name[10];
    char name2[10];
    cout<<"Enter name ";
    cin >> name;

    cout<< "print prefix value : "<<endl;
    PrintAllPrefix(name);
    return 0;
}
