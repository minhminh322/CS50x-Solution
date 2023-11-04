// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
    // declare variable to keep track of maximum value
    int maximum = array[0];

    // Iterate through array

    for (int i = 0; i < n; i++) {
        // Compare with max value. If array[i] > max => max = array[i]
        if (array[i] > maximum) {
            maximum = array[i];
        }
    }

    return maximum;
}

// Two Pointer Approach
// int max(int array[], int n) {
//     int maximum = array[0];

//     int start = 0;
//     int end = n-1;

//     while (start <= end) {
//         if (array[start] > maximum) {
//             maximum = array[start];
//         }

//         if (array[end] > maximum) {
//             maximum = array[end];
//         }

//         start++;
//         end--;
//     }

//     return maximum;
// }