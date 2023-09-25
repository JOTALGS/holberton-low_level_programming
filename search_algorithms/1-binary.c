#include "search_algos.h"

int binary_search(int *array, size_t size, int value) {

int i;
int left = 0;
int right = size - 1;
int mid;

if (array == NULL || size == 0) {
return -1;
}



while (left <= right) {
mid = left + (right - left) / 2;

printf("Searching: ");
for (i = 0; i < size; i++) {
if (i == mid) {
printf("| ");
}
printf("%d ", array[i]);
}
printf("\n");

if (array[mid] == value) {
return mid;
}

if (array[mid] > value) {
right = mid - 1;
}
else {
left = mid + 1;
}
}

return -1;
}