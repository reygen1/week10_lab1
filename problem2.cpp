#include <iostream>
using namespace std;
int main () {
    int num_vars;
    cin >> num_vars;
    int nums[num_vars];
    float sum = 0;
    float count = 0;

    for (int i = 1; i <= num_vars; i++) {
        count ++;

        cin >> nums[i];
        sum += nums[i];

    }
    cout << sum / count << endl;

}