#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int *pq = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> pq[i];
    }

    for(int i = 1; i < n; i++) {
        int childIndex = i;

        while(childIndex > 0) {
            int parentIndex = (childIndex - 1)/2;
            if(pq[parentIndex] > pq[childIndex]) {
                swap(pq[parentIndex], pq[childIndex]);
            }
            else {
                break;
            }
            childIndex = parentIndex;
        }
    }

    // Step2

    int size = n;

    while(size > 1) {
        swap(pq[0], pq[size - 1]);
        size--;

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;
        int minIndex = 0;

        while(leftChildIndex < size) {
            if(pq[minIndex] > pq[leftChildIndex]) {
                minIndex = leftChildIndex;
            }
            if(rightChildIndex < size && pq[minIndex] > pq[rightChildIndex]) {
                minIndex = rightChildIndex;
            }

            if(parentIndex == minIndex) {
                break;
            }

            swap(pq[parentIndex], pq[minIndex]);

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
    }

	// Sorted array 
    for(int i = 0; i < n;i++) {
        cout << pq[i] << " ";
    }

}