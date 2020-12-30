int ternarySearch(int *arr, int beg, int end, int x)
{
    if (end >= beg)
    {
        int mid1 = beg + (end - beg) / 3;
        int mid2 = end - (end - beg) / 3;
        if (arr[mid1] == x)
            return mid1;
        if (arr[mid2] == x)
            return mid2;
        if (x < arr[mid1])
            return ternarySearch(arr, beg, mid1 - 1, x);
        else if (x > arr[mid2])
            return ternarySearch(arr, mid2 + 1, end, x);
        else
            return ternarySearch(arr, mid1 + 1, mid2 - 1, x);
    }
    return -1;
}
