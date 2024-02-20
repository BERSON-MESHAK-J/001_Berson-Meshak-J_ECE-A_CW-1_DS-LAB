import java.utill.Scanner;

public class Menu_Driven_Static {
    static void outputArray(int[] arr) {
        System.out.print("Array elements: ");
        for (int element : arr) {
            System.out.print(element + " ");
        }
        System.out.println();
    }

    static void linearSearch(int[] arr, int n) {
        boolean flag = false;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == n) {
                System.out.println("Entered element " + arr[i] + " found at index " + i);
                flag = true;
            }
        }

        if (!flag) {
            System.out.println("Entered element " + n + " not found in the array");
        }
    }

    static void reverseArray(int[] arr) {
        int i = 0, j = arr.length - 1;

        while (j > i) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

        System.out.print("Reversed array: ");
        outputArray(arr);
    }

    static void updateArray(int[] arr) {
        System.out.print("Updated array: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = (i % 2 == 0) ? arr[i] * 2 : arr[i] + 5;
        }

        outputArray(arr);
    }

    static void insertElement(int[] arr, Scanner scanner) {
        System.out.print("Enter index you want to insert element in: ");
        int index = scanner.nextInt();

        System.out.print("Enter element you want to insert: ");
        int element = scanner.nextInt();

        int[] newArr = new int[arr.length + 1];

        for (int i = 0, j = 0; i < newArr.length; i++) {
            if (i == index) {
                newArr[i] = element;
            } else {
                newArr[i] = arr[j];
                j++;
            }
        }

        System.out.println("Array after insertion:");
        outputArray(newArr);
    }

    static void deleteElement(int[] arr, Scanner scanner) {
        System.out.print("Enter index to be deleted: ");
        int index = scanner.nextInt();

        if (index >= 0 && index < arr.length) {
            int[] newArr = new int[arr.length - 1];

            for (int i = 0, j = 0; i < arr.length; i++) {
                if (i != index) {
                    newArr[j] = arr[i];
                    j++;
                }
            }

            System.out.println("Array after deletion:");
            outputArray(newArr);
        } else {
            System.out.println("Invalid index");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter size of array: ");
        int size = scanner.nextInt();

        int[] arr = new int[size];

        System.out.println("Enter elements in the array:");
        for (int i = 0; i < size; i++) {
            arr[i] = scanner.nextInt();
        }

        outputArray(arr);

        int choice;

        do {
            System.out.println("\nMenu:");
            System.out.println("1. Linear Search");
            System.out.println("2. Reverse Array");
            System.out.println("3. Update Array");
            System.out.println("4. Insert Element");
            System.out.println("5. Delete Element");
            System.out.println("6. Exit");

            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter n: ");
                    int n = scanner.nextInt();
                    linearSearch(arr, n);
                    break;
                case 2:
                    reverseArray(arr);
                    break;
                case 3:
                    updateArray(arr);
                    break;
                case 4:
                    insertElement(arr, scanner);
                    break;
                case 5:
                    deleteElement(arr, scanner);
                    break;
                case 6:
                    System.out.println("Exiting program.");
                    break;
                default:
                    System.out.println("Invalid choice. Please enter a valid option.");
                    break;
            }

        } while (choice != 6);

        scanner.close();
    }
}