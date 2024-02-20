def search(arr, n):
    a = int(input("Enter the number you want to search: "))
    if a in arr:
        print("The element is present.")
    else:
        print("The element is not present.")

def reverse(arr, n):
    print(' '.join(map(str, arr[::-1])))

def update(arr, n):
    for i in range(n):
        if i % 2 == 0:
            arr[i] *= 2
        else:
            arr[i] += 5
    print(' '.join(map(str, arr)))

def insertion(arr, n):
    k = int(input("Enter the position at which you want to enter a number: "))
    element = int(input("Enter the element you want to enter: "))
    arr.insert(k - 1, element)
    print(' '.join(map(str, arr)))

def delete_element(arr, n):
    l = int(input("Enter the position at which you want to delete the element: "))
    arr.pop(l - 1)
    print(' '.join(map(str, arr)))

def main():
    n = int(input("Enter the size of the array: "))
    arr = []
    brr = []

    for i in range(n):
        element = int(input(f"Enter the {i + 1} element of the array: "))
        arr.append(element)
        brr.append(element)

    while True:
        print("\nMenu")
        print("1. Search")
        print("2. String Reversal")
        print("3. Update")
        print("4. Insertion")
        print("5. Deletion")
        print("0. Exit")
        m = int(input("Enter your option: "))

        if m == 1:
            search(arr, n)
        elif m == 2:
            reverse(arr, n)
        elif m == 3:
            update(arr, n)
        elif m == 4:
            insertion(arr, n)
        elif m == 5:
            delete_element(arr, n)
        elif m == 0:
            break
        else:
            print("Wrong number, run the program again.")

if __name__ == "__main__":
    main()
