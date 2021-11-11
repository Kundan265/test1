// Start time: 09:23 PM
// End time: 09:25 PM
// Name: VIGNESH C V
// Mobile Number: 9789975616
// College: RAJALAKSHMI INSTITUTE OF TECHNOLOGY
// Department: ECE
// Original file Name: PrgSample-VigneshCV.C
#include<stdio.h>
void printArray(int a[]) {
 int i;
 for (i = 1; i <= a[0]; i++) {
 printf(" %d", a[i]);
 }
}
int main() {
 int a[100]={0}, i, temp;
 printf("Enter AdminDroid Array: ");
 for (i = 0; i <= a[0]; i++) {
 scanf("%d", & a[i]);
 }
 printf("Elements in the Array: ");
 printArray(a);
}
