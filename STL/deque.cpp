#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> d;

    d.push_back(4);
    d.push_back(9);
    d.push_back(5);
    d.push_front(1);
    d.push_front(7);
    d.push_front(10);
    d.push_front(3);

    for(int i: d) {
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_back();
    // for(int i: d) {
    //     cout<<i<<" ";
    // }

    cout<<"Before erase size: "<<d.size()<<endl;
    d.erase(d.begin());
    cout<<"After erasing (index 1 - 3): "<<d.size()<<endl;
    for(int i: d) {
        cout<<i<<" ";
    }
    cout<<endl;
}