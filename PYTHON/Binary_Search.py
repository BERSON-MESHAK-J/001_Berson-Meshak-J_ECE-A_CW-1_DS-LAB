def binary_search(array, target, low, high):
  while low <= high:
    mid = low + (high - low) // 2

    if array[mid] == target:
      return mid
    elif array[mid] < target:
      low = mid + 1
    else:
      high = mid - 1

  return -1 # target not found

# Example usage:
array = [3,4,5,6,7,8,9]
target = 8
low = 0
high = len(array) - 1

# call the binary search method
# pass arguments: array, target, index of first and last element
result = binary_search(array, target, low, high)
if result == -1:
  print("Not found")
else:
  print("Element found at index", result)
