void selection_sort(int a[], int n){
    int i, j, temp, pos;
    for(i = 0; i < n - 1; i++){
        pos = i;
        int swap = 0;
        for(j = i + 1; j < n; j++){
            if(a[j] < a[pos])
            pos = j;
            swap = 1;
        }
    temp = a[i];
    a[i] = a[pos];
    a[pos] = temp;
    
    if(swap == 0)
    break;
    }
}
