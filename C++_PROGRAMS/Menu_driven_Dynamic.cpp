#include <iostream>
#include <vector>
using namespace std;

void outputArray(const vector<int>& a) {
    cout << "Array elements: ";
    for (int element : a) {
        cout << element << " ";
    }
    cout << endl;
}

void linearSearch(const vector<int>& a) {
    int n;
    cout << "Enter n: ";
    cin >> n;
    bool found = false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == n) {
            cout << "Entered element " << a[i] << " found at index " << i << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Entered element " << n << " not found in the array" << endl;
    }
}

void reverseArray(vector<int>& a) {
    reverse(a.begin(), a.end());
    cout << "Reversed array: ";
    outputArray(a);
}

void updateArray(vector<int>& a) {
    cout << "Updated array: ";
    for (int i = 0; i < a.size(); ++i) {
        if (i % 2 == 0)
            a[i] *= 2;
        else
            a[i] += 5;
    }
    outputArray(a);
}

void insertElement(vector<int>& a) {
    int index, element;
    cout << "Enter index you want to insert element in: ";
    cin >> index;
    cout << "Enter element you want to insert: ";
    cin >> element;
    a.insert(a.begin() + index, element);
    cout << "Array after insertion:" << endl;
    outputArray(a);
}

void deleteElement(vector<int>& a) {
    int index;
    cout << "
