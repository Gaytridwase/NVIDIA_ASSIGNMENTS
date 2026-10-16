//Count out-of-order pairs
#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int>& a,int l,int mid,int h) {
    vector<int>temp;
    int i = l;
    int j = mid + 1;
    long long count = 0;

    while (i<= mid && j<= h) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i]);
            i++;
        }else{
            temp.push_back(a[j]);
            count += mid - i + 1;
            j++;
        }
    }
    while (i<=mid) {
        temp.push_back(a[i]);
        i++;
    }
    while (j<=h) {
        temp.push_back(a[j]);
        j++;
    }
    for (int k = l; k <= h; k++){
        a[k] = temp[k-l];
    }
    return count;
}
long long mergesort(vector<int>& a, int l, int h){
    if (l>=h){
        return 0;
    }
    int mid = l + (h- l)/2;
    long long count = 0;
    count+= mergesort(a, l, mid);
    count+= mergesort(a, mid + 1, h);
    count+= merge(a, l, mid, h);
    return count;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<mergesort(a, 0, n - 1);

    return 0;
}
//time complexity - O(n log n)
//space complexity - O(n)