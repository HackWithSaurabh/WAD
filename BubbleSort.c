#include <stdio.h>
#include<stdlib.h>

void Display(int Brr[],int a)
{
    int i = 0;
    for(i = 0; i < a;i++)
    {
        printf("%d\t",Brr[i]);
    }
}

void BubbleSort(int arr[], int n) 
{ 
    int i, j, temp;
    for(i = 0; i < n; i++) 
    { 
        for(j = 0; j < n-i-1; j++) 
       { 
               if( arr[j] > arr[j+1]) 
            { 
                temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            } 
        } 
    }
    Display(arr,n);
}



int main()
{
    int a = 0,c= 0,*arr = NULL,i = 0;
    printf("Enter how many numbers that you want to sort :\n");
    scanf("%d",&i);
    arr = (int*)malloc(sizeof(int)*i);
    
    for(int c = 0;c < i;c++)
    {
        printf("Enter the next number :\n");
        scanf("%d",&arr[c]);
    }
    BubbleSort(arr,i);
}