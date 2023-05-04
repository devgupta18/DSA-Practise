#include<iostream>
#include<queue>
using namespace std;
int main() {
    //By default, it creates a max heap
    priority_queue<int> maxi;

    //Min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(4);
    maxi.push(6);
    maxi.push(3);

    int n = maxi.size();
    for(int i=0; i<n; i++) {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int l = mini.size();
    for(int i=0; i<l; i++) {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
}