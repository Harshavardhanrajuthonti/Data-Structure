#include <stdio.h>
int search(int n, int a[100], int key, int l, int h);
int main() 
{
    int n, a[100], i, j;
    printf("\nEnter the size of the array:\n");
    scanf("%d",&n);
    printf("\nEnter the elements:\n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++) 
	{
        for (j=0;j<n;j++)
		 {
            if (a[j]>a[i]) 
			{
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }

    printf("\nPrint the sorted elements:\n");
    for (i=0;i<n;i++) 
	{
        printf("%d ",a[i]);
    }

    int l = 0;
    int key;
    printf("\nEnter the key value:\n");
    scanf("%d", &key);
    int k = search(n, a, key, l, n - 1);
    if(k>=0)
    printf("\nThe position of the key value a[%d] is %d", k, a[k]);
    else
    printf("\n Element not found in the array \n");
}

int search(int n, int a[100], int key, int l, int h) 
{
    if (l <= h) 
	{
        int mid = (l + h) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            return search(n, a, key, l, mid - 1);
        else
            return search(n, a, key, mid + 1, h);
    }
    return -1;
}

