//Remove k digits
#include <iostream>
#include<string>
using namespace std;

int main (){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n = s.length();
    string word = "";
    for(int i = 0; i < n; i++){
       while (!word.empty() && word.back() > s[i] && k > 0) {
            word.pop_back();
            k--;
        }
        word+=s[i];
    }
    if (k > 0) {
        word.erase(word.length() - k);
    }
    cout<<word;

    return 0;
}

//Time complexity - O(n)
//space complexity - O(n)