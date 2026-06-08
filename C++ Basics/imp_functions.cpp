#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public: 

        // height of tree 
        int height(TreeNode *node){
            if(node == nullptr){
                return 0;
            }else{
                int left_height = height(node->left);
                int right_height = height(node->right);
            return max(left_height, right_height);
            }
        }
}

int main(){



// merging sorted arrays using two pointers

int i = 0;
int j = 0;
vector<int> ans;

while(i < nums1.size() && j < nums2.size()) {
    if (nums1[i] > nums2[j]) {
        ans.push_back(nums2[j]);
        j++;
    } else {
        ans.push_back(nums1[i]);
        i++;
    }
}

while (i < nums1.size()) {
    ans.push_back(nums1[i]);
    i++;
}


while (j < nums2.size())
{
    ans.push_back(nums2[j]);
    j++;
}


// hasing for counting frequencies

unordered_map<int,int>mpp;

for(auto num : nums){
    mpp[num]++;
}

for(int i=0; i<n; i++){
    mpp[nums[i]]++;
}


// sliding window max sum of any contiguous subarray of size k 

int maxSubarraySum(vector<int>& arr, int k){
    int n = arr.size();
    int max_sum = INT_MIN;
    int window_sum = 0;

    for(int i=0; i<k; i++){
        window_sum += arr[i];
    }

    max_sum = window_sum;

    for(int i=k; i<n; i++){
        window_sum += arr[i] - arr[i-k];
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}



// substr()  returns string 

string str = "Hello, World!";

//  str.substr(pos, len)

// pos = strating index
// len = length of substring


}