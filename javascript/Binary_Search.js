function binarySearch(array, target, low, high) {
    while (low <= high) {
      const mid = Math.floor(low + (high - low) / 2);
  
      if (array[mid] === target)
        return mid;
      else if (array[mid] < target)
        low = mid + 1;
      else
        high = mid - 1;
    }
  
    return -1; // target not found
  }
  
  // Example usage:
  const array = [3, 4, 5, 6, 7, 8, 9];
  const target = 8;
  const low = 0;
  const high = array.length - 1;
  
  // call the binary search method
  // pass arguments: array, target, index of first and last element
  const result = binarySearch(array, target, low, high);
  if (result === -1)
    console.log("Not found");
  else
    console.log("Element found at index " + result);
