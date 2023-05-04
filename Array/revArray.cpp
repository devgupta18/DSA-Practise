#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> &arr , int m)
{
	int j=arr.size()-1, n=arr.size();
	for(int i=0; i<n/2; i++) {
		swap(arr[i], arr[j]);
		j--;
	}
    return arr;
}

int main() {
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> ans = reverseArray(arr, 3);
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
}