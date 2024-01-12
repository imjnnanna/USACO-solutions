/*
// FOR STRINGS
int binarySearch(string dictionary[], string s, int w) {
    int left = 0 ;
    int right = w - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        int index;
        if (s == (dictionary[middle])) index = 0;
        if (index == 0) return middle;
        if (s > (dictionary[middle])) left = middle + 1;
        else right = middle - 1;
    }
    return -1;
}
// FOR INTS
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
*/
