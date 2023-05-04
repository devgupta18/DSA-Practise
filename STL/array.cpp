#include<array>
#include<iostream>
using namespace std;
int main() {
    array<int, 4> a = {1,9,7,3};
    int n = a.size();
    
    for(int i=0; i<n; i++) {
        cout<<a[i]<<",";
    }
    cout<<endl;
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl;

    cout<<"First element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;
}