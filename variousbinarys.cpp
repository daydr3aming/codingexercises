#include <iostream>

// DIA 1 Concurso Individual
// A. Various Binarys - Aizu ITP2_6_A
  
int binarySearch(int arr[], int l, int r, int k)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == k)
            return 1;
 
        // If x greater, ignore left half
        if (arr[m] < k)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    // If we reach here, then element was not present
    return 0;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int q;
    std::cin >> q;
    int k[q];
    for(int i = 0; i < q; i++){
        std::cin >> k[i];
    }
    for(int i = 0; i < q; i++){
        int result = binarySearch(a, 0, n-1, k[i]);
        std::cout << result << std::endl;
    }

    return 0;
}