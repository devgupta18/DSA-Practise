#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    vector<int> a(5,1);

    cout<<"Printing a: ";
    for(int i=0; i<a; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(63);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    cout<<"Size: "<<v.size()<<endl;

}