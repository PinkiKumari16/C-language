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
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i,j,k=1;
//     int *ptr=(int *)malloc(4*sizeof(int));
//     for(i=0;i<4;i++){
//         int *p=ptr;
//         p=(int *)malloc(4*sizeof(int));
//         for(j=0;j<4;j++){
//             *(p+j)=k;
//             k++;
//         }
//     }
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             printf("%d ",*(ptr+j));
//         }
//         printf("\n");
//     }

// }

// ***************  2D  array in pointer   ******************
// #include<stdio.h>
// int main(){
//     int b[3][2]={{1,2},
//                 {4,5},
//                 {3,6}};
//     int (*p)[2]=b;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",*(*(p+i)+j));
//         }
//         printf("\n");
//     }
// }


// *************** MULTIDIMENTIONAL ARRAY *********************
// #include<stdio.h>
// int main(){
//     int c[3][2][2]={{{2,5},{7,9},
//                     {3,4},{6,1},
//                     {0,8},{11,13}}};
//     printf("%d %d %d %d\n",c,*c,c[0],&c[0][0]);
//     printf("%d\n",*(c[0][0]+1));
// }


// 11. Write a program to fill a 4 X 4 array - using 1 to 16
// #include<stdio.h>
// int main(){
//     int li[4][4];
//     int (*p)[4]=li;
//     int k=1,i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             *(*(p+i)+j)=k;
//             k++;
//         }
//     }
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             printf("%d ",*(*(p+i)+j));
//         }
//         printf("\n");
//     }
// }


// // Write a program to fill a 4 X 4 array - using the user's input
// #include<stdio.h>
// int main(){
//     int li[4][4];
//     int (*p)[4]=li,i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             printf("element :");
//             scanf("%d",*(p+i)+j);
//         }
//     }
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             printf("%d ",*(*(p+i)+j));
//         }
//         printf("\n");
//     }
// }


// // 13. Print value of the elements in the 2nd row, and 3rd column in an above-initialized array
// #include<stdio.h>
// int main(){
//     int arr[4][4]={{1,2,3,4},
//                     {5,6,7,8},
//                     {9,10,11,12},
//                     {13,14,15,16}};
//     int (*p)[4]=arr,i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             if(i==1 || j==2){
//                 printf("%d ",*(*(p+i)+j));
//             }
//         }
//     }
// }

// // 14. Print the value of the elements in the m row, n column in an already initialized array,
// // where m and n are given by the user.
// #include<stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},
//                     {4,5,6},
//                     {7,8,9}};
//     int (*p)[3]=arr,m,n,i,j;
//     printf("enter M(row) & N(column) : ");
//     scanf("%d %d",&m,&n);
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i==(m-1) || j==(n-1)){
//                 printf("%d ",*(*(p+i)+j));
//             }
//         }
//     }
// }

// 15. Print all the elements in the 2nd row in an already initialized array
// #include<stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},
//                     {4,5,6},
//                     {7,8,9}};
//     int (*p)[3]=arr,i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i==1){
//                 printf("%d ",*(*(p+i)+j));
//             } 
//         }
//     }
// }


// #include<stdio.h>
// int main(){
//     int grid[9][6]={{'.', '.', '.', '.', '.', '.'},
//                     {'.', 'O', 'O', '.', '.', '.'},
//                     {'O', 'O', 'O', 'O', '.', '.'},
//                     {'O', 'O', 'O', 'O', 'O', '.'},
//                     {'.', 'O', 'O', 'O', 'O', 'O'},
//                     {'O', 'O', 'O', 'O', 'O', '.'},
//                     {'O', 'O', 'O', 'O', '.', '.'},
//                     {'.', 'O', 'O', '.', '.', '.'},
//                     {'.', '.', '.', '.', '.', '.'}};
//     int (*p)[6]=grid,i,j;
//     for(i=0;i<6;i++){
//         for(j=0;j<9;j++){
//             printf("%c",*(*(p+j)+i));
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int arr[3][3]={ {2,4,1},
//                     {8,0,-1},
//                     {1,-4,0}};
//     int arr2[3][3]={{8,0,3},
//                     {2,-5,7},
//                     {3,-1,5}};
//     int arr3[3][3];
//     int (*p)[3]=arr;
//     int (*q)[3]=arr2;
//     int (*r)[3]=arr3,i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             *(*(r+i)+j)=(*(*(p+i)+j) + *(*(q+i)+j));
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",*(*(r+i)+j));
//         }
//         printf("\n");
//     }
// }


// Write a program to multiply two matrices and store the result in a separate matrix.
// #include<stdio.h>
// int main(){
//     int arr[3][3]={{2,4,1},
//                     {8,0,-1},
//                     {1,-4,0}};
//     int arr2[3][3]={{8,0,3},
//                     {2,-5,7},
//                     {3,-1,5}};
//     int arr3[3][3];
//     int (*p)[3]=arr;
//     int (*q)[3]=arr2;
//     int (*r)[3]=arr3,i,j,k,sum;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             sum=0;
//             for(k=0;k<3;k++){
//                 sum+=(*(*(p+i)+k) * *(*(q+k)+j));
//             }
//             *(*(r+i)+j)=sum;
//         }
        
//     }
//     printf("multiple array :\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",*(*(r+i)+j));
//         }
//         printf("\n");
//     }
// }

