#include<stdio.h>

struct Array
{
    int A[15];
    int size;
    int length;
};

void Display(struct Array arr){

    int i;

    printf("The elements are \n");
    for(i=0;i<arr.length;i++)
    printf("%d " , arr.A[i]);

}

int BinSearch(struct Array arr , int key){

    int l,mid,h;
    l=0;
    h=arr.length-1;
    while (l<=h)
    {
        mid=(l+h)/2;
        if (key == arr.A[mid])
        return mid;

        else if (key < arr.A[mid])
        h=mid-1;
        
        else
        l=mid + 1;        
    }  
    return -1;
}



int main(){

    struct Array arr ={{2,3,4,5,6},15,5};
    printf("%d\n"  ,BinSearch(arr,5));
    Display(arr);
}