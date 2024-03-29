#include <stdio.h>

int find_max_array(int size, const int a[]) {
    if (size <= 0) {
        return -1;  // Handle empty or invalid array
    }

    int max_element = a[0];  // Initialize with the first element

    for (int i = 1; i < size; i++) {
        if (a[i] > max_element) {
            max_element = a[i];  // Update if a larger element is found
        }
    }

    return max_element;
}

int main() {
    int arr[] = {773, 307, 371, 548, 531, 765, 402, 27, 573, 591, 217, 859,
                 662, 493, 173, 174, 125, 591, 324, 231, 130, 394, 573, 65,
                 570, 258, 343, 3, 586, 14, 785, 296, 140, 726, 598, 262,
                 807, 794, 510, 465, 66, 895, 182, 218, 302, 34, 205, 252,
                 687, 660, 952, 737, 2, 32, 310, 680, 36, 139, 346, 139, 489,
                 217, 767, 544, 158, 774, 883, 154, 802, 136, 569, 377, 867,
                 423, 224, 176, 118, 660, 513, 734, 45, 978, 983, 749, 909,
                 601, 270, 147, 433, 737, 789, 304, 842, 769, 815, 503, 190,
                 399, 3};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int max_value = find_max_array(size, arr);

    printf("The maximum element in the array is: %d\n", max_value);

    return 0;
}