// #include<stdio.h>
// int main(){
//     int arr[5][5]={ {0,1,2,3,4},
//                     {2,3,4,5,6},
//                     {4,5,6,7,8},
//                     {5,6,7,8,9},
//                     {2,5,4,3,1}};

//     int *arr2[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             arr2[i][j]=&arr[i][j];
//         }
//     }
//     printf("the values are :\n");
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             printf("%d ",*arr2[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int arr[5][5]={ {0,1,2,3,4},
//                     {1,2,3,4,5},
//                     {2,3,4,5,6},
//                     {3,4,5,6,7},
//                     {4,5,6,7,8}};
//     //creating 2D array of pointer using dyamic memory
//     //allocation through malloc () function
//     int*** arr2= malloc(5* sizeof(int **));
//     for(int i=0;i<5;i++){
//         arr2[i]=malloc(5* sizeof(int*));
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             arr2[i][j]=&arr[i][j];
//         }
//     }
//     printf("the values are :\n");
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             printf("%d ",*arr2[i][j]);
//         }
//         printf("\n");
//     }
// }


// 10. Write a program to fill a 4 X 4 array - using all 1s
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n,i,j;
//     scanf("%d",&n);
//     int *ptr=(int *)malloc(n*sizeof(int));
//     for(i=0;i<n;i++){
//         ptr=(int *)malloc(n*sizeof(int));
//         for(j=0;j<n;j++){
//             *(ptr+j)=1;
//         }
//     }
//     // for(i=0;i<n;i++){
//     //     for(j=0;j<n;j++){
//     //         *(ptr+i)=1;
//     //     }

//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("%d ",*(ptr+i));
//         }
//         printf("\n");
//     }
// }


// 11. Write a program to fill a 4 X 4 array - using 1 to 16
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k=1;
    int *ptr=(int *)malloc(4*sizeof(int));
    for(i=0;i<4;i++){
        ptr=(int *)malloc(4*sizeof(int));
        for(j=0;j<4;j++){
            *(ptr+j)=k;
            k++;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",*(ptr+j));
        }
        printf("\n");
    }

}