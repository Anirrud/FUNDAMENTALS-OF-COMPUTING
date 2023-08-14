#include <stdio.h>
int main() {
    int arr[100]; 
    int n;
    int position;
    int newValue;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);
    printf("Enter the new value to be inserted: ");
    scanf("%d", &newValue);
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = newValue;
    n++;
    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
