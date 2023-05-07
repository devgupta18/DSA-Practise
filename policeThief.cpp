#include<iostream>
using namespace std;

int catchThief(char *str, int size, int k) {
    int count = 0;
    bool thief[size] = {false};
    bool police[size] = {false};
    for(int i=0; i<size; i++) {
        if(str[i] == 'P') {
            for(int j=i-k; j<i; j++) {
                if(str[j] == 'T' && thief[j] == 0 && police[i] == 0) {
                    count++;
                    thief[j] = true;
                    police[i] = true;
                    break;
                }
            }
            for(int j=i+k; j>i; j--) {
                if(str[j] == 'T' && thief[j] == 0 && police[i] == 0) {
                    count++;
                    thief[j] = true;
                    police[i] = true;
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    char str[] = {'T', 'T', 'P', 'P', 'T', 'P'};
    int size = sizeof(str)/sizeof(char);
    int k=2;

    int ans = catchThief(str, size, k);
    cout<<ans;
}