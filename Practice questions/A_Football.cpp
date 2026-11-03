#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int carrier=1;
    bool index = false;
    for(int i=1; i<s.length(); i++){
        if(s[i]==s[i-1]){
            carrier += 1;
        }else{
            carrier=1;
        };
    if(carrier>=7){
            index = true;
    };
    };
    if(index==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
};
