#include <stdio.h>

int binary_search(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return -1; // element not found
}

int main() {
    int arr[100], n, x, pos;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the element to search: ");
    scanf("%d", &x);
    
    pos = binary_search(arr, n, x);
    
    if(pos == -1)
        printf("Element not found\n");
    else
        printf("Given element %d is found at %d position in the array\n", x, pos+1);
    
    return 0;
}
