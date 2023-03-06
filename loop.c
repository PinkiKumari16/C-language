// Construct a flowchart to find the sum of the squares of the first 9 natural numbers that are divisible by 3.
// #include<stdio.h>
// int main(){
//     int i,sum=0;
//     for(i=1;i<=9;i++){
//         if (i%3==0){
//             sum+=(i*i);
//             printf("%d + ",i);
//         }
//     }printf("= %d",sum);
//     return 0;
// }

// Construct a flowchart to calculate the sum of the following series where n is input. 1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n
// #include<stdio.h>
// int main(){
//     float i,n,sum=0;
//     printf("enter the number :");
//     scanf("%f",&n);
//     for(i=1;i<=n;i++){
//         sum+=(1/i);
//     }printf("The sum of series : %.2f",sum);
//     return 0;
// }

// Construct a flowchart to show how to find the sum of all the numbers that are divisible by P but not divisible by Q within a given range. (Input lower limit, upper limit, P, and Q from the user)
// #include<stdio.h>
// int main(){
//     int lower,i,upper,p,q,sum=0;
//     printf("enter the lower_limit,upper_limit,p and q :");
//     scanf("%d %d %d %d",&lower,&upper,&p,&q);
//     for(i=lower;i<=upper;i++){
//         if(i%p==0 && i%q!=0){
//             printf("%d + ",i);
//             sum+=i;
//         }
//     }printf("\n Total sum : %d",sum);
//     return 0;
// }

// Draw a flowchart to show how to obtain the HCF and LCM of two numbers. (input two numbers from the user)
// #include<stdio.h>
// int main(){
//     int num1,num2,hcf=1,i;
//     printf("enter the num1 and num2 :");
//     scanf("%d %d",&num1,&num2);
//     for(i=1;i<=num1;i++){
//         if(i<=num2){
//             if(num1%i==0 && num2%i==0){
//                 hcf=i;
//             }
//         }else if(i>num2){
//             break;
//         }
//     }printf("num1 and num2 of LCM : %d \n num1 and num2 of HCF : %d ",(num1*num2)/hcf,hcf);
//     return 0;
// }

// Draw a flowchart to show how the sum of the digits of a given number can be obtained. (Input the number from the user)
// #include<stdio.h>
// int main(){
//     int number,sum=0;
//     printf("enter the number :");
//     scanf("%d",&number);
//     while(number>0){
//         sum+=(number%10);
//         number/=10;
//     }printf("the sum of digits : %d",sum);
//     return 0;
// }

// Draw a flowchart to show the logic of obtaining the reversed form of a given whole number. (Input the number from the user)
// #include<stdio.h>
// int main(){
//     int number,rev=0;
//     printf("enter the number :");
//     scanf("%d",&number);
//     while(number>0){
//         rev=(rev*10+(number%10));
//         number/=10;
//     }printf("reverse number is : %d",rev);
//     return 0;
// }

// Construct a flowchart to show how the factors of a given number can be obtained. (Input the number from the user)
// #include<stdio.h>
// int main(){
//     int number,i=1;
//     printf("enter the number: ");
//     scanf("%d",&number);
//     if(number==1){
//         printf("%d",number);
//     }else{
//     for(i=1;(i*i<=number);i++){
//         if (number%i==0){
//             printf("%d , %d , ",i,number/i);
//         }
//     }
//     }
//     return 0;
// }

// Construct a flowchart to show how to determine whether a given number is a perfect number.  (Input the number from the user)
// Note: A number is said to be a perfect number if the sum of its factors (except itself) equals the number.
// #include<stdio.h>
// int main(){
//   int number,i,sum=0;
//   printf("enter the number :");
//   scanf("%d",&number);
//   if(number==1){
//     printf("Perfect Number ")
//   }else{
//     for(i=1;i<number;i++){
//       if(number%i==0){
//         sum+=i;
//       }
//     }if(number==sum){
//       printf("Perfect Number")
//     }else{printf("Not Perfect Number ")}
//   }
//   return 0;
// }

// Construct a flowchart to show how you can decide if a given number is prime or not.  (Input the number from  the user)
// #include<stdio.h>
// int main(){
//     int number,i,count=1;
//     printf("enter the number :");
//     scanf("%d",&number);
//     for(i=1;i*i<=number;i++){
//         if(number%i==0){
//             count++
//         }
//     }if(count==1){
//         print("Prime number")
//     }else{print("Not Prime Number")}
//     return 0;
// }

// Construct a flowchart to print multiplication tables from 1 to 5.
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=10;i++){
//         for(j=1;j<=5;j++){
//             printf("%d    ",i*j);
//         }printf("\n");
//     }
//     return 0;
// }

// // Develop a flowchart to show how to find all the perfect numbers under 10,000.
// #include<stdio.h>
// int main(){
//     int i,j,sum;
//     printf("%d , ",1);
//     for(i=2;i<=10000;i++){
//         sum=0;
//         for(j=1;j<i;j++){
//             if(i%j==0){
//                 sum+=j;
//             }
//         }if(sum==i){
//             printf("%d , ",i);
//         }
//     }
// }

// Develop a flowchart to show how to determine all the 3-digit Armstrong numbers.
//  A number is called an Armstrong number if the sum of the values of the digits 
// each raised to the power equal to the number of digits in the number equals the
//  number. For example, 153 is an Armstrong number, because 153 = 13 + 53 + 33.
// #include<stdio.h>
// int main(){
//     int i,j,sum=0;
//     for(i=100;i<=999;i++){
//         j=i;
//         while (j>0){
//             sum+=((j%10)*(j%10)*(j%10));
//             j/=10;
//         }if(sum==i){
//             printf("%d  ,",i);
//         }
//     }
//     return 0;
// }

// Some three-digit numbers show the property that the sum of the factorials of the digits equals the numbers, for example, 145 = 1! + 4! + 5!. Develop a flowchart to show how to determine all such numbers.
// #include<stdio.h>
// int main(){
//     char a='12';
//     print("%d\n",a)
//     return 0;
// }

