//Brute-Force
//Shortest Subarray Reaching K
#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int main (){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums(n);
    for(int i =0; i < n; i++){
        cin>>nums[i];
    }
    int min = INT_MAX;
    int s = -1;
    int e = -1;
    for(int i =0; i < n; i++){
        int sum = nums[i];
        if(sum == k && min > 1){
            min = 1;
            s = i;
            e = i;
        }
        for(int j =i+1; j < n; j++){
            sum+=nums[j];
            if(sum==k){
                int len = j-i+1;
                if(len < min){
                    min = len;
                    s = i;
                    e = j;
                }
    
            }
        }
    }
    for(int i = s; i < e+1; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}