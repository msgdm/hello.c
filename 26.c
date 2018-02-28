#include<stdio.h>
int x[10];
int y[10];
void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(x[l1] <= x[l2])
         y[i] = x[l1++];
      else
         y[i] = x[l2++];
   }
   
   while(l1 <= mid)    
      y[i++] = x[l1++];

   while(l2 <= high)   
      y[i++] = x[l2++];

   for(i = low; i <= high; i++)
     x[i] = y[i];
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
   }   
}

int main(void) { 
   int i,n;
scanf("%d\n",&n);
for(i = 0; i <n; i++)
{
      scanf("%d\n",&a[i]);
}
sort(0, n);
for(i = 0; i <n; i++)
   {
      printf("%d\n",a[i]);
   }
return 0;
	
}
