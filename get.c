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

int get(struct Array arr,int index){
      
    if (index>=0 && index<=arr.length){
    return arr.A[index];}
}

void set(struct Array *arr){
    int  index;
    int x;

    if(index>=0 && index <= arr->length){
        arr->A[index] =x;

    }

}

int max(struct Array arr){
    int i;
    int max = arr.A[0];
    for( i =1 ;i<arr.length ; i++)
        if(arr.A[i]>max){
            max =arr.A[i];
        }
        return max;
    

}
int Min(struct Array arr)
{
 int min=arr.A[0];
 int i;
 for(i=1;i<arr.length;i++)
 {
 if(arr.A[i]<min)
 min=arr.A[i];
 }
 return min;
}

int sum(struct Array arr){
    int s=0;
    int i;
    for(i=0;i<arr.length;i++){
        s+=arr.A[i];
    }
    return s;
}

float avg(struct Array arr){

    return (float)sum(arr)/arr.length;
}
_X86_

int main(){

    struct Array arr ={{23,3,14,25,6},15,5};
    printf("%f\n" , avg(arr)) ;
    Display(arr);
}