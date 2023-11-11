#include <iostream>
using namespace std;

template <typename T>
void insertionSortAlgorithm(T arrayToBeSorted[], int sizeOfArray) {
    for (int i = 1; i < sizeOfArray; i++) {
        T algoKey = arrayToBeSorted[i];
        int temp = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (temp >= 0 && arrayToBeSorted[temp] > algoKey) {
            arrayToBeSorted[temp + 1] = arrayToBeSorted[temp];
            temp--;
        }
        arrayToBeSorted[temp + 1] = algoKey;
    }
}

int main() {
    int arrayBeforeSorting[] = { 100, 12, 19, 36, 78, 90, 82, 55, 49 };
    int n = sizeof(arrayBeforeSorting) / sizeof(arrayBeforeSorting[0]);

    insertionSortAlgorithm(arrayBeforeSorting, n);

    cout << endl;
    cout << "Sorted array of Integers: ";
    for (int i = 0; i < n; i++) {
        cout << arrayBeforeSorting[i] << " ";
    }
    cout << endl << endl;

    double secondArray[] = { 3.14, 2.71, 1.41, 1.62, 1.73, 8.9, 9.2, 7.7, 5.7 };
    int m = sizeof(secondArray) / sizeof(secondArray[0]);

    insertionSortAlgorithm(secondArray, m);

    cout << "Second Sorted array of Doubles: ";
    for (int i = 0; i < m; i++) {
        cout << secondArray[i] << " ";
    }
    cout << endl << endl;

    string arr3[] = { "Ayesha", "Samia", "Nasreen", "Tahira", "Izal", "Arham", "Jahan" };
    int k = sizeof(arr3) / sizeof(arr3[0]);

    insertionSortAlgorithm(arr3, k);

    cout << "Third Sorted array of Strings: ";
    for (int i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl << endl << endl;

    return 0;
}
