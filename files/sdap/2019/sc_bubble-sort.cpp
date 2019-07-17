#include <stdio.h>

main() {
 int a[50], n, i, j, temp = 0;

 printf("Input jumlah bilangan\t: ");
 scanf("%d", &n);
 
 for (i = 0; i < n; i++) {
 	printf("Input bilangan ke-%d: ", i+1);
  	scanf("%d", &a[i]);
 }

 printf("\nBilangan sebelum terurut\t: ");
 for (i = 0; i < n; i++) {
  printf("%d  ", a[i]);
 }
 
 for (i = 0; i < n; i++) {
  for (j = i + 1; j < n; j++) {
   if (a[i] > a[j]) {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
 
 printf("\nBilangan terurut\t\t: ");
 for (i = 0; i < n; i++) {
  printf("%d  ", a[i]);
 }
}
