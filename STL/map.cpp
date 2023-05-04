#include<iostream>
#include<unordered_map>
#include<vector>
#include<set>
using namespace std;
// int main() {
//     map<int, string> m;

//     m[2] = "dev";
//     m[1] = "gupta";

//     m.insert({4, "new"});

//     for(auto i: m) {
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     m.erase(4);
//     cout<<"After erase: "<<endl;
//     for(auto i: m) {
//         cout<<i.first<<" "<<i.second<<endl;
//     }

// }


bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        set<int> ans;
        for(int i=0; i<arr.size(); i++) {
            mp[arr[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
        ans.insert(i->second);
        }
        return ans.size()==mp.size() ?true:false;
    }

int main() {
    vector<int> arr = {1,2,2,1,1,3};
    bool flag = uniqueOccurrences(arr);
    if(flag) {
        cout<<"Each element occurs unniquely."<<endl;
    }
    else {
        cout<<"Each element does not occurs unniquely."<<endl;
    }
}