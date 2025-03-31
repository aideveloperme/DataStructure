#include <iostream>
#include <vector>

int countElementsWithGreater(const std::vector<int>& arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr.size(); ++j) {
            if (i != j && arr[j] > arr[i]) {
                ++count;
                break; // Break the inner loop once we find one greater element
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> myArray = {3, 1, 5, 2, 4};
    int result = countElementsWithGreater(myArray);
    std::cout << "Number of elements with at least one element greater than itself: " << result << std::endl;
    return 0;
}

