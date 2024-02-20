def output_array(a):
    print("Array elements:", *a)

def linear_search(a):
    n = int(input("Enter n: "))
    flag = False
    for i, item in enumerate(a):
        if item == n:
            print(f"Entered element {item} found at index {i}")
            flag = True
    if not flag:
        print(f"Entered element {n} not found in the array")

def reverse_array(a):
    a.reverse()
    print("Reversed array:", *a)

def update_array(a):
    for i in range(len(a)):
        if i % 2 == 0:
            a[i] *= 2
        else:
            a[i] += 5
    print("Updated array:", *a)

def insert_element(a):
    index = int(input("Enter index you want to insert element in: "))
    element = int(input("Enter element you want to insert: "))
    a.insert(index, element)
    print("Array after insertion:")
    output_array(a)

def delete_element(a):
    index = int(input("Enter index to be deleted: "))
    if index < 0 or index >= len(a):
        print("Invalid index")
        return
    del a[index]
    print("Array after deletion:")
    output_array(a)

def main():
    size = int(input("Enter size of array: "))
    a = []
    print("Enter elements in the array:")
    for _ in range(size):
        element = int(input("Enter element: "))
        a.append(element)
    output_array(a)

    while True:
        print("\nMenu:")
        print("1. Linear Search")
        print("2. Reverse Array")
        print("3. Update Array")
        print("4. Insert Element")
        print("5. Delete Element")
        print("6. Exit")

        choice = int(input("Enter your choice: "))
        if choice == 1:
            linear_search(a)
        elif choice == 2:
            reverse_array(a)
        elif choice == 3:
            update_array(a)
        elif choice == 4:
            insert_element(a)
        elif choice == 5:
            delete_element(a)
        elif choice == 6:
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Please enter a valid option.")

if __name__ == "__main__":
    main()
