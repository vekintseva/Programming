#include <stdio.h>

int main() {
    int array[9]={99,88,77,66,55,44,33,22,11};
    for (int i=0; i<9;i++)
        printf("%d ",array[i]);
    printf("\n");
    int arr1[2][2]={{1,1},{1,4}};
    int arr2[2][2]={{1,2},{4,1}};
    int i,j,k;
    int arr3[2][2];
    for (i=0;i<2;i++)  {
        for (j=0;j<2;j++) {
            arr3[i][j]=0;
            for (k=0;k<2;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
