#include<iostream>
using namespace std;
int main() {
    cout<<"Enter a character: ";
    char ch;
    cin>>ch;
    if(ch >= 65 && ch <= 90) {
        cout<<"This is uppercase."<<endl;
    }
    else if(ch >= 97 && ch <= 122) {
        cout<<"This is lowercase"<<endl;
    }
    else if(ch >= 48 && ch <= 57) {
        cout<<"This is numeric"<<endl;
    }
}