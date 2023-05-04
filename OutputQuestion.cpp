#include<iostream>
using namespace std;
int main() {
    // int a,b=1;
    // a=10;
    // if(++a) {
    //     cout<<b;
    // }
    // else {
    //     cout<<++b;
    // }

    // int a=1, b=2;
    // if(a-- > 0 && ++b > 2) {
    //     cout<<"Stage 1 - Inside If"<<endl;
    // }
    // else {
    //     cout<<"Stage2 - Inside Else"<<endl;
    // }
    // cout<<a<<" "<<b;

    for(int i=0; i<=15; i+=2) {
        cout<<i<<" ";
        if(i&1) {
            continue;
        }
        i++;
    } 
}