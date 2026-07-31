#include<bits/stdc++.h>
using namespace std;

int TowerOfBoxes(int n, int m, int d){
    int maxHeight = d / m + 1;
    int towers = (n + maxHeight - 1) / maxHeight;
    return towers;
}

int main()
{
    cout << TowerOfBoxes(8,10,20) << endl;
    cout << TowerOfBoxes(8,1,20) << endl;
    cout << TowerOfBoxes(5,3,2) << endl;

    return 0;
}