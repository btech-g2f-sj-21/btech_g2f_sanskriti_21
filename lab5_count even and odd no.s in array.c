#include <stdio.h>

int main() {
    int n,i,evenCount=0,oddCount=0;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
     int arr[n];
    printf("Enter %d integers:\n", n);
      for (int i = 0; i <n; i++)
   {scanf("%d",&arr[i]); }
   for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Total Even Numbers: %d\n", evenCount);
    printf("Total Odd Numbers: %d\n", oddCount);

    return 0;
}