#include <stdio.h>

int main()
{
    //1
    int total; // total = number for array
    int i;
    //2
    int start, end, temp;

    //3

    scanf("%d", &total);

    //4 Initialize array 
    int array[total];

    //5 Scanning elements for array
    for (i = 0; i < total; i++)
    {
        scanf("%d", &array[i]);
    }

    //6
    start = 0; // start position in array i.e at 0th index
    end = total - 1; // end position in array

    //7 reversing elements in array
    while (start < end)
    {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

    //8 printing reversed array

    for (i = 0; i < total; i++)
    {
        printf("%d ", array[i]);
    }
}