#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto i : mp){
            if(i.second > 1){
                return true;
                break;
            }
        }

        return false;

    }

int main(){
    int n;
    cout<<"Enter the size of the input array: ";
    cin >> n;

    vector<int>nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    bool duplicatePresent = containsDuplicate(nums);
    if(duplicatePresent){
        cout<<"Array contains a duplicate"<<endl;
    }

    else{
        cout<<"Array does not contain a duplicate"<<endl;
    }

    return 0;
}