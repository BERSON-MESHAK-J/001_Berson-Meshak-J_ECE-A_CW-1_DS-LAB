using namespace std;
int binarySearch(int arr[], int r, int x) 
{
    int mid = 0,l =0;
    for( ;l < r;mid = (l+r)/2)
    {
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid] < x)
        {
            l = mid+1;
        }
        else
        {
            r = mid -1;
        }
    }
    return 1;
    }
int main() 
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 11;
    int result = binarySearch(arr, size-1, x);
    if (result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " << result << endl;
    return 0;
}
