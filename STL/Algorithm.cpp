#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout<<"Finding 5 using binary search: "<<binary_search(v.begin(), v.end(), 5)<<endl;

    int a=3, b=5;

    cout<<"Max of a and b: "<<max(a,b)<<endl;
    cout<<"Min of a and b: "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"After swapping: a = " <<a<<" and b = "<<b<<endl;

    string st = "abcd";
    reverse(st.begin(), st.end());
    cout<<"After reversing: "<<st<<endl;

    rotate(v.begin(), v.begin()+2, v.end());
    cout<<"After rotating: ";
    for(int i: v) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Sorted vector: ";
    sort(v.begin(), v.end());
    for(int i: v) {
        cout<<i<<" ";
    }
    cout<<endl;

}