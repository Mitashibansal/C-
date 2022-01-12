#include <stdio.h>
#include<conio.h>
int main()
{
    int n, array[100], c, t;
    
    printf("Enter number of elements\n");
    scanf("%d", &n);
    
    printf("Enter %d integers\n", n);
    
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    
    for (c = 1 ; c <= n - 1; c++) {
        
        while ( c > 0 && array[c-1] > array[c]) 
        {
            t          = array[c];
            array[c]   = array[c-1];
            array[c-1] = t;
            
            c--;
        }
    }
    
    printf("Sorted list in ascending order:\n");
    
    for (c = 0; c <= n - 1; c++) {
        printf("%d\t", array[c]);
    }
    
    return 0;
}