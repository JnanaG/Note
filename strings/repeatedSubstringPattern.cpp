#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.size();
        string subs="";
        string str="";
        for(int i=0;i<len/2;++i) {
            subs +=s[i];
            while(str.size()<len) {
                str +=subs;
                if(str.compare(s)==0&&str.size()==len) {
                    return true;
                }
            }
        }
        return false;
    }
};

// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//         int n = s.size();
//         for (int i = 1; i * 2 <= n; ++i) {
//             if (n % i == 0) {
//                 bool match = true;
//                 for (int j = i; j < n; ++j) {
//                     if (s[j] != s[j - i]) {
//                         match = false;
//                         break;
//                     }
//                 }
//                 if (match) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };


int main() {
    string s = "abababab";
    Solution sn;
    bool ans = sn.repeatedSubstringPattern(s);
    cout<<ans<<endl;

}