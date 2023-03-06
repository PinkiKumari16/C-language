// #include<stdio.h>
// int main(){
//     int array_1[5];
//     int i;
//     for (i=0;i<5;i++){
//         array_1[i]=i*2;
//     }
//     int j=0;
//     for (j=0;j<5;j++){
//         printf("%d  \n",array_1[j]);
//     }

//     return 0;
// }

// 1. Write a program in C to store elements in an array and print them. Go to the editor
// Test Data :
// Input 10 elements in the array :
// element - 0 : 1
// element - 1 : 1
// element - 2 : 2
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter array size :");
//     scanf("%d",&n);
//     int array[n];
//     int i=0;
//     while (i<n){
//         printf("enter thr number :");
//         scanf("%d",&array[i]);
//         i++;
//     }
//     for (i=0;i<n;i++){
//         printf("element - %d : %d \n",i,array[i]);
//     }
// }


// 2. Write a program in C to read n number of values in an array and display them in reverse order.
// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("enter the size :");
//     scanf("%d",&n);
//     int array1[n];
//     int m=n-1;
//     for (i=0;i<n;i++){
//         printf("enter the number :");
//         scanf("%d",&array1[m]);
//         m--;
//     }
//     for (i=0;i<n;i++){
//     printf("element %d : %d \n",i,array1[i]);}
//     return 0;
// }

// 3. Write a program in C to find the sum of all elements of the array. Go to the editor
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 8
// Expected Output :
// Sum of all elements stored in the array is : 15
// #include<stdio.h>
// int main(){
//     int n,i,sum=0;
//     printf("array size :");
//     scanf("%d",&n);
//     int array2[n];
//     for (i=0;i<n;i++){
//         printf("enter the element :");
//         scanf("%d",&array2[i]);
//     }
//     for (i=0;i<n;i++){
//         sum+=array2[i];
//         printf("element : %d \n",array2[i]);
//     }printf("The sum of Array : %d",sum);
//     return 0;
// }



// 4. Write a program in C to copy the elements of one array into another array. Go to the editor
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12
// Expected Output :
// The elements stored in the first array are :
// 15 10 12
// The elements copied into the second array are :
// 15 10 12
// #include<stdio.h>
// void main(){
//     int n,i;
//     printf("enter array size :");
//     scanf("%d",&n);
//     int array[n],array1[n];
//     for (i=0;i<n;i++){
//         printf("enter the element :");
//         scanf("%d",&array[i]);
//         array1[i]=array[i];
//     }
//     for (i=0;i<n;i++){
//         printf("element : %d \n",array1[i]);
//     } 
// }

// 5. Write a program in C to count the total number of duplicate elements in an array. Go to the editor
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 1
// element - 2 : 1
// Expected Output :
// Total number of duplicate elements found in the array is : 1
// #include<stdio.h>
// void main(){
//     int n,i,j,c,count=0;
//     printf("enter array size :");
//     scanf("%d",&n);
//     int array[n];
//     for(i=0;i<n;i++){
//         printf("element :");
//         scanf("%d",&array[i]);
//     }
//     for(i=0;i<n;i++){
//         c=0;
//         for(j=i+1;j<n;j++){
//             if(array[i]==array[j]){
//                 c+=1;
//             }
//         }if (c>0){
//             count+=1;
//         }
//     }
//     printf("number of duplicate elements : %d \n",count);
// }

// 6. Write a program in C to print all unique elements in an array. Go to the editor
// Test Data :
// Print all unique elements of an array:
// Input the number of elements to be stored in the array: 4
// Input 4 elements in the array :
// element - 0 : 3
// element - 1 : 2
// element - 2 : 2
// element - 3 : 5
// Expected Output :
// The unique elements found in the array are:
// 3 5
// #include<stdio.h>
// void main(){
//     int n,i,j,c;
//     printf("array size :");
//     scanf("%d",&n);
//     int array[n];
//     for (i=0;i<n;i++){
//         printf("element :");
//         scanf("%d",&array[i]);
//     }
//     printf("Unique elements : ");
//     for (i=0;i<n;i++){
//         c=0;
//         for(j=0;j<n;j++){
//             if (array[i]==array[j]){
//                 c++;
//             }
//         }if (c==1){
//             printf("%d , ",array[i]);
//         }
//     }
// }

// 7. Write a program in C to merge two arrays of the same size sorted in descending order.
// The merged array in decending order is :
// 3 3 2 2 1 1
#include<stdio.h>
void main(){
    int arr1[5]={1,2,5,8,9};
    int arr2[5]={6,7,8,9,12};
    int n=sizeof(arr1);
    int marge[n*2];
    int i=n,j=n,k=0;
    while (k<(n*2)){
        if (arr1[i]>=arr2[j]){
            marge[k]=arr1[i];
            i--;
        }else{
            marge[k]=arr2[j];
            j--;
        }k++;
    }
    printf("Marge Array :");
    for (i=0;i<(n*2);i++){
        printf("%d , ",marge[i]);
    }
}