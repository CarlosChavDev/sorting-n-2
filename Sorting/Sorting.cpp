// Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;


//n^2 sort
void bubblesort(int array[], int size) {
    int temp;int compares = 0;int swaps = 0;
    for (int i = 0; i < (size - 1);i++) {
        compares++;
        for (int j = 1; j < (size - 1);j++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swaps++;
            }
        }
    }
    cout << "Compares: " << compares << endl;
    cout << "Swaps: " << swaps << endl;
}

//n^2 sort
void SelectionSort(int array[], int size) {
    int maxIndex = 0;
    int temp;
    int compares = 0;int swaps = 0;
    for (int i = 0; i < (size - 1) ; i++) {
        maxIndex = 0; 
        for (int j = 1; j < (size - i);j++) {
            compares++;
            if (array[j] > array[maxIndex]) {
                maxIndex = j;
            }
        }
        //swap max with last element
        temp = array[maxIndex];
        array[maxIndex] = array[size - 1 - i];
        array[size - 1 - i] = temp;
        swaps++;
    }
    cout << "Compares: " << compares << endl;
    cout << "Swaps: " << swaps << endl;
    
}

//n^2 sort 
void InsertionSort(int array[], int size) {
    int temp;
    int compares = 0;int swaps = 0;

    for (int j = 0; j < (size - 1); j++) { //for the size of the array...
        for (int i = j; i >= 0; i--) { 
            compares++;
            if (array[i] > array[i + 1]) { //if swapped-> keep going down the array
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swaps++;
            }
            else {
                break; //breaks out of most inner most loop
            }
        }
    }

    cout << "Compares: " << compares << endl;
    cout << "Swaps: " << swaps << endl;

}


void print(int array[], int size) {
    for (int i = 0; i < size;i++) {
        cout << array[i] << "  ";
    }
}

int main()
{
    int array[10] = { 1,9,2,3,10,7,8,5,4,6 };
    //call sort
    //bubblesort(array, 10);
    //SelectionSort(array, 10);
    InsertionSort(array, 10);
    //print array
    print(array, 10);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
