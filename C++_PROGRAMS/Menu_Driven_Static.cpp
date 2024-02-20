#include <iostream>
using namespace std;

void search(int arr[], int *ptr_n) {
    int a, flag = 0;
    cout << "Enter the number you want to search: ";
    cin >> a;
    for (int i = 0; i < *ptr_n; i++) {
        if (arr[i] == a) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "The element is present." << endl;
    else
        cout << "The element is not present." << endl;
}

void reverse(int arr[], int *ptr_n) {
    for (int i = *ptr_n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void update(int arr[], int *ptr_n) {
    for (int i = 0; i < *ptr_n; i++) {
        if (i % 2 == 0) {
            arr[i] *= 2;
        } else {
            arr[i] += 5;
        }
    }
    for (int i = 0; i < *ptr_n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertion(int arr[], int *ptr_n) {
    int k;
    cout << "Enter the position at which you want to enter a number: ";
    cin >> k;
    for (int i = *ptr_n; i >= k; i--) {
        arr[i] = arr[i - 1];
    }
    cout << "Enter the element you want to enter: ";
    cin >> arr[k - 1];
    (*ptr_n)++;
    for (int i = 0; i < *ptr_n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteElement(int arr[], int *ptr_n) {
    int l;
    cout << "Enter the position at which you want to delete the element: ";
    cin >> l;
    for (int i = l - 1; i < *ptr_n; i++) {
        arr[i] = arr[i + 1];
    }
    (*ptr_n)--;
    for (int i = 0; i < *ptr_n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, m;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n], brr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " element of array: ";
        cin >> arr[i];
        brr[i] = arr[i];
    }
    do {
        cout << "\nMenu\n";
        cout << "1. Search\n";
        cout << "2. String Reversal\n";
        cout << "3. Update\n";
        cout << "4. Insertion\n";
        cout << "5. Deletion\n";
        cout << "0. Exit\n";
        cout << "Enter your option: ";
        cin >> m;

        switch (m) {
            case 1:
                search(arr, &n);
                break;
            case 2:
                reverse(arr, &n);
                break;
            case 3:
                for (int i = 0; i < n; i++) {
                    arr[i] = brr[i];
                }
                update(arr, &n);
                break;
            case 4:
                for (int i = 0; i < n; i++) {
                    arr[i] = brr[i];
                }
                insertion(arr, &n);
                break;
            case 5:
                for (int i = 0; i < n; i++) {
                    arr[i] = brr[i];
                }
                deleteElement(arr, &n);
                break;
            default:
                cout << "Wrong number, run the program again" << endl;
                break;
        }
    } while (m != 0);
    return 0;
}
