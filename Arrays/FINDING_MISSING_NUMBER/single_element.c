#include <stdio.h>


int main()
{
    //for single missing ele in sorted array staring from 1
    int arr[8]={1,2,3,5,6,7,8,9};
    for(int i=0;i<8;i++)
    {
        if(i+1 != arr[i])
        {
            printf("missing ele is %d\n",i+1);// O(n)
            break;
        }
    }
return 0;
}
