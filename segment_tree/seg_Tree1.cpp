#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

Class SegmentTree{
    vector<ll>SegTree;
    int n;

    void build(int i, int l, int r, vector<int>&nums){
        if(l == r){
            SegTree[i] = nums[l]; // or SegTree[i] = nums[r]; both are same
            return;
        }
        int mid = l + (r - l)/2;
        build(2*i+1, l , mid, nums);
        build(2*i+2, mid+1, r, nums);
        SegTree[i] = SegTree[2*i+1] + SegTree[2*i + 2];
    }
}

int main()
{
    vector<int>arr = {1,2,3,4,5,6,7,8,9, 11};
    SegmentTree st(arr);

    return 0;
}