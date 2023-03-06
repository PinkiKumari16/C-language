//  1.Write a python program to find maximum between two numbers.
// #include<stdio.h>
// main(){
//     int num1,num2;
//     printf("enter First numbers :");
//     scanf("%d",&num1);
//     printf("Enter Second Number :");
//     scanf("%d",&num2);
//     if (num1>num2){
//         printf("First Number is maximum: %d",num1);
//     }else if(num1<num2){
//         printf("Second Number is Maximum: %d",num2);
//     }else{
//         printf("Both Number are Equal ");
//     }
// }

//  2.Write a python program to find maximum between three numbers.
// #include<stdio.h>
// main(){
//     int num1,num2,num3;
//     printf("enter first num: ");
//     scanf("%d",&num1);
//     printf("enter second num: ");
//     scanf("%d",&num2);
//     printf("enter third num: ");
//     scanf("%d",&num3);
//     if (num1>num2 && num1>num3){
//         printf("First number is maximum %d",num1);
//     }else if(num2>num1 && num2>num3){
//         printf("Second Number is Maximun: %d",num2);
//     }else{
//         printf("Third Number is Maximum: %d",num3);
//     }
// }

// #include<stdio.h>
// main(){
//     int a,b,c;
//     printf("enter three num:");
//     scanf("%d %d %d",&a,&b,&c);
//     printf("B=%d\nA=%d\nC=%d",b,a,c);
// }

//  2.Write a python program to find maximum between three numbers.
// #include<stdio.h>
// main(){
//     int num1,num2,num3;
//     printf("enter three number :");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     if (num1>num2 && num1>num3){
//         printf("First number is Maximum = %d",num1);
//     }else if (num2>num1 && num2>num3){
//         printf("Second Number is maximum = %d",num2);
//     }else{
//         printf("Third Number is Maximum = %d",num3);
//     }
// }

//  3.Write a python program to check whether a number is negative, positive or zero.
// #include<stdio.h>
// main(){
//     int number;
//     printf("enter the number :");
//     scanf("%d",&number);
//     if (number>0){
//         printf("Positive Number = %d",number);
//     }else if (number<0){
//         printf("Negetive Number = %d",number);
//     }else{
//         printf("Number is Zero = %d",number);
//     }
// }

//  4.Write a python program to check whether a number is divisible by 5 and 11 or not.
// #include<stdio.h>
// main(){
//     int number;
//     printf("enter the number :");
//     scanf("%d",&number);
//     if (number%5==0 && number%11==0){
//         printf("Its divisible by 5 and 11 = %d",number);
//     }else{
//         printf("Its Not divisible of 5 and 11 ");
//     }
// }

// 5.Write a python program to check whether a number is even or odd.
// #include<stdio.h>
// main(){
//     int number;
//     printf("enter the number :");
//     scanf("%d",&number);
//     if (number%2==0){
//         printf("This is Even Number %d",number);
//     }else{
//         printf("This is Odd Number %d",number);
//     }
// }

// 6.Write a python program to check whether a year is leap year or not.
// #include<stdio.h>
// main(){
//     int year;
//     printf("enter the year :");
//     scanf("%d",&year);
//     if(year%4==0 && year%400==0 && year%100!=0){
//         printf("This is Leap Year = %d",year);
//     }else{
//         printf("Not Leap Year = %d",year);
//     }
// }

// 7.Write a python program to check whether a character is an alphabet or not.
// #include<stdio.h>
// main(){
//     char Alfa;
//     printf("Enter the Character :");
//     scanf("%c",&Alfa);
//     if (Alfa>='a' && Alfa<='z'){
//         printf("%c This is a Alphabet",Alfa);
//     }else if (Alfa>='A' && Alfa<='Z'){
//         printf("%c This is a Alphabet",Alfa);
//     }else{
//         printf("%c This is Not Alphabet",Alfa);
//     }
// }

// 8.Write a python program to input any alphabet and check whether it is vowel or consonant.
// #include<stdio.h>
// main(){
//     char Alfa;
//     printf("enter the Alphabet :");
//     scanf("%c",&Alfa);
//     if (Alfa=='a' ||Alfa=='e' ||Alfa=='i' ||Alfa=='o' ||Alfa=='u'){
//         printf("%c : This is a Vowel",Alfa);
//     }else if (Alfa=='A' ||Alfa=='E' ||Alfa=='I' ||Alfa=='O' ||Alfa=='U'){
//         printf("%c : This is a Vowel",Alfa);
//     }else{
//         printf("%c : This is a Consonant",Alfa);
//     }
// }

//  9. Write a python program to input any character and check whether it is alphabet, digit or special character.
// #include<stdio.h>
// int main(){
//     char Alfa;
//     printf("enter the Alfa : ");
//     scanf("%c",&Alfa);
//     if((Alfa>='a' && Alfa<='z') || (Alfa>='A' && Alfa<='Z')){
//         printf("This is a Alphabet : %c");
//     }else if (Alfa>='0' && Alfa <='9'){
//         printf("This is a Digit : %c",Alfa);
//     }else{
//         printf("This is a Special Character : %c",Alfa);
//     }
//     return 0;
// }

// 10. Write a python program to check whether a character is uppercase or lowercase alphabet.
// #include<stdio.h>
// int main(){
//     char Alfa;
//     printf("enter the Character :");
//     scanf("%c",&Alfa);
//     if(Alfa>='A' && Alfa<='Z'){
//         printf("Upper-Case String : %c",Alfa);
//     }else{
//         printf("Lower-Case Srting : %c",Alfa);
//     }
//     return 0;
// }

// 11. Write a python program to input week number and print week day.
// #include<stdio.h>
// int main(){
//     int day;
//     printf("enter the Number of day(1-7) :");
//     scanf("%d",&day);
//     if(day==1){
//         printf("Sunday");
//     }else if(day==2){
//         printf("Monday");
//     }else if(day==3){
//         printf("Thesday");
//     }else if(day==4){
//         printf("Wednesday");
//     }else if(day==5){
//         printf("Thursday");
//     }else if(day==6){
//         printf("Friday");
//     }else if(day==7){
//         printf("Saturday");
//     }else{
//         printf("Invalide Input");
//     }
//     return 0;
// }

// 13.Write a python program to count the total number of notes in a given amount.
// #include<stdio.h>
// int main(){
//     int amount,count;
//     int t_notes=0;
//     printf("enter the amount: ");
//     scanf("%d",&amount);
//     if(amount>=2000){
//         count=(amount/2000);
//         amount-=(count*2000);
//         t_notes+=count;
//     }if (amount>=500){
//         count=(amount/500);
//         amount-=(count*500);
//         t_notes+=count;
//     }if(amount>=200){
//         count=(amount/200);
//         amount-=(count*200);
//         t_notes+=count;
//     }if(amount>=100){
//         count=(amount/100);
//         amount-=(count*100);
//         t_notes+=count;
//     }if (amount>=50){
//         count=(amount/50);
//         amount-=(count*50);
//         t_notes+=count;
//     }if (amount>=20){
//         count=(amount/20);
//         amount-=(count*20);
//         t_notes+=count;
//     }if (amount>=10){
//         count=(amount/10);
//         amount-=(count*10);
//         t_notes+=count;
//     }if (amount>=5){
//         count=(amount/5);
//         amount-=(count*5);
//         t_notes+=count;
//     }if (amount>=2){
//         count=(amount/2);
//         amount-=(count*2);
//         t_notes+=count;
//     }if (amount>=1){
//         count=(amount/1);
//         amount-=(count*1);
//         t_notes+=count;
//     }printf("Total Notes of Amount :%d",t_notes);
//     return 0;
// }

// 16.Write a python program to check whether the triangle is equilateral, isosceles or scalene triangle.
// #include<stdio.h>
// int main(){
//     int s1,s2,s3;
//     printf("enter the sides of tringle :");
//     scanf("%d %d %d",&s1,&s2,&s3);
//     if (s1>0 && s2>0 && s3>0){
//         if (s1==s2==s3){
//             printf("Equilateral Triangle");
//         }else if(s1==s2 ||s2==s3 ||s3==s1){
//             printf("Isisceles Triangle");
//         }else{
//             printf("Scalene Triangle");
//         }
//     }else{
//         printf("Invalid Triangle");
//     }
//     return 0;
// }

// 17. Write a python program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%
// #include<stdio.h>
// int main(){
//    int salary,g_salary;
//    printf("enter your salary :");
//    scanf("%d",&salary);
//    if (salary<=10000){
//     g_salary=(salary*20/100)+(salary*80/100);
//     printf("Gross Salary : %d",g_salary);
//    }else if(salary<=20000){
//     g_salary=(salary*25/100)+(salary*90/100);
//     printf("Gross Salary : %d",g_salary);
//    }else if (salary>20000){
//     g_salary=(salary*30/100)+(salary*95/100);
//     printf("Gross Salary : %d",g_salary);
//    }
//    return 0;
// }

// 18.Write a python program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
// #include<stdio.h>
// int main(){
//     int unit,bill=0;
//     printf("enter unit of elecricity :");
//     scanf("%d",&unit);
//     if(unit>=50){
//         unit-=50;
//         bill+=(50*0.50);
//     }else if(unit>0 && unit<50){
//         bill+=(unit*0.50);
//         unit-=50;

//     }if(unit>=100){
//         unit-=100;
//         bill+=(100*0.75);
//     }else if(unit>0 && unit<100){
//         bill+=(unit*0.75);
//         unit-=100;
        
//     }if(unit>=100){
//         unit-=100;
//         bill+=(100*1.20);
//     }else if(unit>0 && unit<100){
//         bill+=(unit*1.20);
//         unit-=100;
        
//     }if(unit>0){
//         bill+=(unit*1.50);
//     }printf("Total Bill Amount : %d RS.",(bill+(bill*20/100)));
//     return 0;
// }

//  Construct a flowchart to find a maximum between three numbers. (Use minimum number of comparisons)
// #include<stdio.h>
// int main(){
//     int a,b,c,max_num;
//     printf("enter three numbers :");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a>b){
//         max_num=a;
//     }else{
//         max_num=b;
//     }if (max_num>c){
//         printf("maximum number : %d",max_num);
//     }else{
//         printf("Maximum Number : %d",c);
//     }
//     return 0;
// }

// Find the maximum occurring number out of the given 5 numbers.
// #include<stdio.h>
// int main(){
//     int a,b,c,d,e;
//     printf("enter fives numbers :");
//     scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
                    // incomplete 
// }

// Find the third max of 4 numbers. (Use minimum number of comparisons)
// #include<stdio.h>
// int main(){
//     int a,b,c,d,min1,s_min1,min2,s_min2;
//     printf("Enter four numbers :");
//     scanf("%d %d %d %d",&a,&b,&c,&d);
//     if (a>b){
//         min1=b;
//         s_min1=a;
//     }else{
//         min1=a;
//         s_min1=b;
//     }if(c>d){
//         min2=d;
//         s_min2=c;
//     }else{
//         min2=c;
//         s_min2=d;
//     }if(min1>min2){
//         if (min1>s_min2){
//             printf("Third Max is : %d",s_min2);  
//         }else{
//             printf("Third Max is : %d",min1);
//         }
//     }else{
//         if(min2>s_min1){
//             printf("Third Max is : %d",s_min1);
//         }else{
//             printf("Third Max is : %d",min2);
//         }
//     }
//     return 0;
// }

// Accept the age, gender (‘M’,‘F’), and the number of days and display the wages accordingly

// If the age does not fall in any range then display the following message: “Enter appropriate age”
// #include<stdio.h>
// int main(){
//     int age,days;
//     char gender;
//     printf("enter your age,gender,days :");
//     scanf("%d %c %d",&age,&gender,&days);
//     if(age>=18 && age<30){
//         if(gender=='F'){
//             printf("Total wages : %d",days*750);
//         }else{
//             printf("Total wages : %d",days*700);
//         }
//     }else if(age>=30 && age<=40){
//         if(gender=='F'){
//             printf("Total wages : %d",days*850);
//         }else{
//             printf("Total wages : %d",days*800);
//         }
//     
