//2D Array
#include<stdio.h>
int main()
{
    int arr2D[2][3]={
        {1,2,3},
        {4,5,6}
    };
    printf("\nElements of 2D array:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("arr2D[%d][%d] = %d\n",i,j,arr2D[i][j]);
        }
    }
    return 0;
}