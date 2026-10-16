//Number of subarrays with sum k 
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> nums(n);

    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }

    unordered_map<long long,int> mp;
    int pref = 0;
    int count = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++) {
        pref += nums[i];
        count += mp[pref - k];
        mp[pref]++;
    }

    cout<<count<<endl;

    return 0;
}

//Time (average) - O(n)
//Time (worst case) - O(n²)
//Space - O(n)