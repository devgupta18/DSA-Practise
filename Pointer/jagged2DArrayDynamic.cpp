#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int **arr = new int* [n];
    int *m = new int[n];
    
    cout<<"OK"<<endl;
    
    for(int i=0; i<n; i++) {
        cin>>m[i];
        arr[i] = new int[m[i]];
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m[i]; j++) {
            arr[i] = new int[j];
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m[i]; j++) {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"OK"<<endl;
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m[i]; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0; i<n; i++) {
        delete[] arr[i];
    }
    
    delete[] arr;

    return 0;
}
