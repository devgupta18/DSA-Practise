#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(3);
    s.insert(3);
    s.insert(6);
    s.insert(1);
    s.insert(5);
    s.insert(1);

    for(int i: s) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Is 5 available in the set: "<<s.count(5)<<endl;
}