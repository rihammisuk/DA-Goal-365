#include <iostream>
using namespace std;


int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter n Length ";
    cin>> n;
    char name[n];
    cout<<"Enter name ";
    cin >> name;
    cout<< "Array value : "<<name<< " Lenght: "  <<length(name);
    return 0;
}
