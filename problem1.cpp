#include <iostream>
using namespace std;
int main () {
    int num_vars;
    cin >> num_vars;
    int nums[num_vars];
    int sum = 0;

    for (int i = 1; i <= num_vars; i++) {
        cin >> nums[i];
        sum += nums[i];

    }
    cout << sum << endl;

}