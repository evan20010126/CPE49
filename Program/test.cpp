#include <algorithm>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int up_bound(int arr[], int i, int j, int target) {
    int mid = (i + j) / 2;
    if (arr[j] < target)
        return j + 1;

    if ((arr[mid] >= target) && (mid - 1 < 0 || arr[mid - 1] < target)) {
        return mid;
    } else if (arr[mid] < target) {
        up_bound(arr, mid + 1, j, target);
    } else {
        up_bound(arr, i, mid - 1, target);
    }
}
int main() {
    int arr[] = {-1, 0, 1, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << up_bound(arr, 0, 10, 9) << endl;

    return 0;
}
`