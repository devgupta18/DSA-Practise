#include<iostream>
#include<algorithm>
using namespace std;

string reverseWords(string s) {
        if(s.size() == 0) return s;
        stack<string> stack;
        string result;
        for(int i=0; i<s.size(); i++) {
            string word;
            if(s[i]==' ') continue; //skip spaces
            while(i<s.size() && s[i]!=' ' ) { //store continuous letters into word
                word += s[i]; i++;
            }
            stack.push(word); //push word to the stack
        }
        while(!stack.empty()) {
            result += stack.top(); stack.pop();
            if(!stack.empty()) result += " ";
        }
        return result;
    }

// string revString(string s) {
//         string temp="";
//         int a=0,k=0;
//         for(int i=s.length()-1; i>=0; i--) {
//             temp[a] = s[i];
//             if(s[i] == ' ' || s[i] == '\0') {
//                 reverse(temp[k], temp[a]);
//                 k=a+1;
//             }
//         }
//         s=temp; 
//         return s;
//     }

// string revString(string s) {
//     string temp = "";
//     int k=0;
//     for(int i=0; i <s.length(); i++) {
//         temp[i] = s[i];
//         if(s[i] == " " || s[i] == "\0") {
//             reverse(temp[k],temp[i]);
//             k=i;
//         }
//     }
//     return temp;
// }

// string revString(string s) {
//     int k=0;
//     for(int i=0; i<s.length()-1; i++) {
//         int m=k;
//         if(s[i] == ' ') {
//             int n=i;
//             while(m <= i) {
//                 swap(s[m++], s[n--]);
//             }
//             k=i+1;
//         }
//     }
//     return s;
// }

int main() {
    string s="My name is Dev";
    string ans = revString(s);
    cout<<ans;
}