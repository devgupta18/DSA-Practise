#include<iostream>
using namespace std;
int main() {
    int a = 4, b = 6;
    cout<<"A&B: "<< (a&b) <<endl;
    cout<<"A|B: "<< (a|b) <<endl;
    cout<<"`A: "<< (~a) <<endl;
    cout<<"A^B: "<< (a^b) <<endl;
    cout<< (15 << 2) <<endl;
    cout<< (10 >> 3) <<endl;
}