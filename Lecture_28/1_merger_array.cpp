#include <iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> a,vector<int> b){
    int i=0,j=0;
    int m=a.size();
    int n=b.size();
    vector<int> nums;
    while(i<m and j<n){
        if(a[i]<=b[j]){
            nums.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j]){
            nums.push_back(b[j]);
            j++;
        }
    }
    while(i<m){
        nums.push_back(a[i]);
        i++;
    }
    while(j<n){
        nums.push_back(b[j]);
        j++;
    }
    return nums;
}
int main() {
    vector<int> a={1,4,6,9,10};
    vector<int> b={2,3,5,7,8};
    vector<int> ans=merge(a,b);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}