//BRUTE-FORCE APPROACH
//Smaller Values to the Right 
#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i =0; i < n; i++){
        cin>>nums[i];
    }
    int count =0;
    vector<int> ans;

    for(int i = 0; i < n; i++){
        count = 0;
        if(i==n-1){
            ans.push_back(count);
            break;
        }
        for(int j =i+1; j < n; j++){
            if(nums[j] < nums[i]){
                count++;
            }
        }
        ans.push_back(count);
    }

    for(int i =0; i < n; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}