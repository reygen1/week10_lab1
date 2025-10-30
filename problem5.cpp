#include<iostream>
using namespace std;
bool stricklyEqual (const int list1[], const int list2[], int size) {
    if (size < 1) return false;
    for (int i =0; i < size; i++ ) {
        if (list1[i] !=  list2[i])
            return false;
    }
}

int main () {
    int nums1, nums2, n;
    cin >> nums1 >> nums2>> n;
    int arr1[nums1], arr2[nums2];
    for (int i = 0; i < nums1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < nums2; i++) {
        cin >> arr2[i];
    }

    cout << stricklyEqual (arr1, arr2, n ) <<endl;
}

