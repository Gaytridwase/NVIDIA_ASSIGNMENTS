//Asteroid Collision
#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main (){
    int n;
    cin>>n;
    vector<int> nums(n);
    stack<int> st;
    for(int i =0; i < n; i++){
        cin>>nums[i];
    }
    st.push(nums[0]);
    int j =1;
    while(j < n){
        if(!st.empty()){
            if((st.top() < 0 && nums[j] < 0) || (nums[j] > 0 && st.top() < 0) || (st.top() > 0 && nums[j] > 0)){
                st.push(nums[j]);
                j++;
            }
            else if(st.top() > 0 && nums[j] < 0){
               if (st.top() < abs(nums[j])) {
                    st.pop();
                }
                else if (st.top() == abs(nums[j])) {
                    st.pop();
                    j++;
                }
                else{
                    j++;
                }
            }
            else{
                j++;
            }
          
        }
     
    }
    vector<int> ans;
     while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    for (int x : ans) {
        cout<<x<< " ";
    }
    return 0;
}

//Time complexity - O(n)
//space complexity - O(n)