#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);

return i + 1;
}

void merge_sort(int arr[], int low, int high){
    if(low < high){
        int pivot = partition(arr, low, high);
        merge_sort(arr, low, pivot - 1);
        merge_sort(arr, pivot + 1, high);
    }
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int>arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
   merge_sort(arr.data(), 0, N - 1);
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    
return 0;
}
