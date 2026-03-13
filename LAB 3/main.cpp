#include <iostream>

using namespace std;

void swapValues(int* p1, int* p2) {
    cout << "---------------------" << endl;
    cout << "Swapping two numbers" << endl;
    cout << "Before swap" << endl;
    cout << "a = " << *p1 << endl;
    cout << "b = " << *p2 << endl;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;


    cout << "\nAfter swap" << endl;
    cout << "a = " << *p1 << endl;
    cout << "b = " << *p2 << endl;
    cout << "---------------------" << endl;


}

void printArray(int* arr, int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
}

int findMax(int* arr, int size) {
    int max = *arr;
    for (int i = 0; i < size; i++) {
        if (max < *(arr + i)) {
            max = *(arr + i);
        }
    }
    cout << "Max element: ";
    return max;
}

void reverseArray(int* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    cout << "---------------------" << endl;
    cout << "Reversing array..." << endl;
    cout << "Array after reverseArray: ";
    printArray(arr, size);
    cout << endl << "---------------------";

}

int* createArray(int size) {
    cout << "Creating dynamic array..." << endl;
    int* p = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter number: ";
        cin >> p[i];
    }
    return p;
}

void deleteArray(int* arr) {
    cout << "Deleting array..." << endl << "Memory released successfully.";
    delete[] arr;
}

int main() {
    int a = 5;
    int b = 3;
    int arr[] = {1, 2, 3, 4};
    int* array = createArray(4);
    reverseArray(array, 4);

    swapValues(&a, &b);

    cout << a << endl;
    cout << b << endl;

    printArray(arr, 4);
    cout << endl <<  findMax(arr, 4) << endl;

    reverseArray(arr, 4);
    printArray(arr, 4);

    deleteArray(arr);

}