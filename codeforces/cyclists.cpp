// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int cyclists(int t, int n, int k, int p, int m, vector<int>costs){
//     queue<int>q;
//     for(int i=0; i<costs.size(); i++){
//         q.push(costs[i]);
//     }

//     for(int i=0; i<k; i++){
//         int mini = INT_MAX;
//         if(costs[i] < mini){
//             mini = costs[i];
//         }
        
//         q.pop(mini);
//         q.push(mini);


//     }

    
    


// }

// int main()
// {
//     int t,n,k,p,m;
//     cin>>t;
//     cin>>n;
//     cin>>k;
//     cin>>p;
//     cin>>m;

//     vector<int>costs;
//     for(int i=0; i<n; i++){
//         cin>>costs[i];
//     }
//     int ans = cyclists(t,n,k,p,m,costs);
//     cout<<ans<<" ";
//     return 0;
// }