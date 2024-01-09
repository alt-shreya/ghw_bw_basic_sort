#include <iostream>
using namespace std;

//  program to swap out a number, would be called only if the next number is bigger than the one we currently have
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// displays the final program
void printList(int list[], int n) {
    // displays all elements of list in a a loop
    for (int i=0; i<n; i++){
        cout << list[i] << " ";
    }
    // displays a line at the end
    cout << endl;
}

// sort code using the above intuition
void sortCode(int list[], int n){
    for (int step=0; step<n-1; step++){
        // assign value of minimum index as step, so that we skip the already sorted part of the list
        int min_index = step;
        // traverse the list of numbers in a loop and check whether the next number is lesser than the number we currently have
        for (int i = step+1; i<n; i++) {
            if (list[i] < list[min_index]) {
                // update value of minimum_index as the number  we currently have
                min_index = i;
            }
        // swap out the beginning of the list with the number we found to be minimum
        
            }
            swap(&list[min_index], &list[step]);
        }
    }

// driver function to accept a user's input and display the result
int main(){
    int arraySize;

    cout << "Enter the size of your array: \t";
    cin >> arraySize;
    int a[arraySize];
    cout << "Enter the array elements: \t";
    for (int i=0; i< arraySize ; i++){
        cin >> a[i];
    }
    sortCode(a, arraySize);
    cout << "Sorted Code: \n";
    printList(a, arraySize);
}