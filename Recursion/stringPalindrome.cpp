#include<iostream>
using namespace std;

bool isPalindrome(string str, int start, int size) {
    if(start > size - start - 1) return true;

    if(str[start] != str[size - start - 1]) {
        return false;
    }
    else {
        return isPalindrome(str, start + 1, size);
    }
}

// bool isPalindrome(string str, int start, int end) {
//     if(start > end) return true;

//     if(str[start] != str[end]) return false;
//     else {
//         return isPalindrome(str, start + 1, end - 1);
//     }
// }

int  main() {
    string abc = "abbccbba";
    cout<<isPalindrome(abc,0,abc.length());
    return 0;
}