// bubble sort program
#include <stdio.h>
int n,a[10],i,j,temp;
void sort(int a[], int n) {
  for (i=0;i<n-1;i++) {
    for (j=0;j<n-i-1;j++) {
      if (a[i]>a[j]) {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp; } } } }
int main() {
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter the array: ");
  for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
  printf("Entered array: ");
  for(i=0;i<n;i++) {
    printf("%d ",a[i]); }
  sort(a,n);
  printf("Sorted array: ");
  for(i=0;i<n;i++) {
    printf("%d ",a[i]); }
 return 0; }
  


    
   
