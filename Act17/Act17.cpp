#include <iostream>
using namespace std;


    int linearSearch(int arr[], int size, int target) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                return i; 
            }
        }
        return -1;
    }

    int main(){
        int arr[] = { 4,2,7,1,9,5 };
        int size = sizeof(arr) / sizeof(arr[0]);
        int target = 7;

        int result = linearSearch(arr, size, target);
        if (result != -1) {
            cout << "Target " << target << "found at index" << result << endl;

        }
        else {
            cout << "Target " << target << "not found in the array" << endl;
        }
    return 0;
}

