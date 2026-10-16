//Longest consecutive sequence
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main (){
    int n ;
    cin>>n;
    vector<int> arr(n);
    unordered_set<int> st;

    for(int i =0 ; i<n; i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }
    int k = 0;
    int s =0;
    for(int i =0; i <n; i++){
        if(st.find(arr[i]-1)==st.end()){
            int curr = arr[i];
            int count =1;

            while(st.find(curr+1) != st.end()){
                curr++;
                count++;
            }
            if(count > k){
                k = count;
                s=arr[i];
            }
        }
    }
    cout<<k<<endl;
    for(int i=0; i < k; i++){
        cout<<s+i<<" ";
    }

    return 0;
    
}
//Time (worst) - O(n^2)
//Time (average) - O(n)
//Space complexity - O(n)