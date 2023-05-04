#include <iostream>

using namespace std;

int power(int n) {
    
    if(n == 0) {
        return 1;
    }
    
    int smallProb = power(n-1);
    int bigProb = 2 * smallProb;
    
    return bigProb;
    
}

int main()
{
    
    int n;
    cin>>n;
    
    int ans = power(n);
    
    cout<<"Answer : "<<ans<<endl;
    
    return 0;
    
}
