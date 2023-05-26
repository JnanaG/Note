#include<bits/stdc++.h>
using namespace std;


void reverseString(vector<char>& s) {
    int n=s.size();
    for(int i=0,j=n-1;i<n/2;i++,j--) {
        char temp=s[i];
        s[i] = s[j];
        s[j] = temp;

    }
}
template <class T>

void PrintV(vector<T>& v) {
    for(int i=i;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n=10;
    vector<char> v;
    v.resize(n);
    for(auto x:v) {
        cin>>x;
    }
    reverseString(v);
    PrintV(v);
    return 0;
}