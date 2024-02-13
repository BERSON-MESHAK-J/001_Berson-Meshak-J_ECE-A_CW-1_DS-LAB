package data_structures_lab.java_programs;
public class Binary_Search {
  int binarySearch(int array[], int element, int low, int high) {

    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (array[mid] == element)
        return mid;
      else if (array[mid] < element)
        low = mid + 1;
      else
        high = mid - 1;
    }

    return -1;
  }

  public static void main(String args[]) {

    // create an object of Main class
    Binary_Search obj = new Binary_Search();

    // create a sorted array
    int[] array = { 3, 4, 5, 6, 7, 8, 9 };
    int n = array.length;
    int element;
    element = 8;

    // call the binary search method
    // pass arguments: array, element, index of first and last element
    int result = obj.binarySearch(array, element, 0, n - 1);
    if (result == -1)
      System.out.println("Not found");
    else
      System.out.println("Element found at index " + result);
  }
}

