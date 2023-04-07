// #include<stdio.h>
// int main(void){
//     char s[]="My name is pinki , and i am \'good\' girl";
//     printf("%s\n",s);
// }

// #include<stdio.h>
// int main(void){
//     char s[]="I am pinki , I am a \"student\"";
//     printf("%s\n",s);
// }

// #include<stdio.h>
// int main(void){
//     char s[]="I am pinki , I am a \\student";
//     printf("%s\n",s);
// }

// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char alfa[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     printf("%d\n",strlen(alfa));
//     printf("%d\n",sizeof(alfa));
// }

// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char alfa[30]="abcdefghijklmnopqrstuvwxyz";
//     printf("%d\n",strlen(alfa));
//     printf("%d\n",sizeof(alfa));
// }

// string ****************   concatenate string  *************
// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char str1[]="pinki";
//     char str2[]="kumari";
//     printf("%s\n",str1);
//     printf("%s\n",str2);
//     strcat(str1,str2);
//     printf("%s\n",str1);
//     printf("%s\n",str2);
// }

// ******* copy string ************
// #include<stdint.h>
// #include<string.h>
// int main(void){
//     char s[]="pinki";
//     char s2[10];
//     strcpy(s2,s);
//     s[0]='R';
//     printf("%s\n",s2);
//     printf("%s\n",s);
// }
// *************** compare string ******************
// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char s[]="hello";
//     char s2[]="hii";
//     char s3[]="hello";
//     printf("%d\n",strcmp(s,s2));
//     printf("%d\n",strcmp(s2,s3));
//     printf("%d\n",strcmp(s,s3));
// }

// #include<stdio.h>
// int main(void){
//     char str[30];
//     printf("enter string :");
//     scanf("%s",str);
//     printf("%s\n",str);
// }

// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char str[30];
//     printf("enter string :");
//     gets(str);
//     printf("%s\n",str);
//     puts(str);
// }

// #include<stdio.h>
// int main(void){
//     char s[]="pinki";
//     char *p=s;
//     for(int i=0;i<6;i++){
//         printf("%c ",s[i]);
//         printf("%c ",p[i]);
//         printf("%c \n",*(p+i));
        
//     }
//     printf("%s\n",s);
//     printf("%s",p);
// }

// #include<stdio.h>
// void print(char *p){
//     int i=0;
//     while (p[i]!='\0'){
//         printf("%c",p[i]);
//         i++;
//     }
//     printf("\n");
// }
// int main(void){
//     char s[]="pinki_kumari";
//     print(s);
// }

// #include<stdio.h>
// void print(char *p){
//     while (*p!='\0'){
//         printf("%c",*p);
//         p++;
//     }
//     printf("\n");
// }
// int main(void){
//     char s[]="pinki_kumari";
//     print(s);
// }

// 2. Write a program in C to find the length of a string without using library functions.
// #include<stdio.h>
// int main(void){
//     int n,i,c=0;
//     printf("size :");
//     scanf("%d",&n);
//     char str[n];
//     printf("string :");
//     scanf("%s",str);
//     i=0;
//     while (str[i]!='\0'){
//         c++;
//         i++;
//     }
//     printf("The length of String : %d\n",c);
// }

// #include<stdio.h>
// int main(void){
//     int n,i;
//     printf("size :");
//     scanf("%d",&n);
//     char *p;
//     p=(char *)malloc (sizeof(char)*n);
//     char *c=p;
//     for (i=0;i<n;i++){
//         scanf("%c",(c+i));
//         // *(p+i)='p';
//     }
//     // for (i=0;i<n;i++){
//     //     printf("%c",p[i]);
//     // }
//     printf("%s \n",c);
// }

// Write a program in C to separate individual characters from a string.
// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char str[30];
//     scanf("%s",str);
//     int n=strlen(str);
//     int i;
//     for(i=0;i<n;i++){
//         printf("%c ",str[i]);
//     }
// }

// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char str[30];
//     scanf("%s",str);
//     int n=strlen(str);
//     int i;
//     char *s=str;
//     for(i=0;i<n;i++){
//         printf("%c ",*(s+i));
//     }
// }

// Write a program in C to print individual characters of a string in reverse orde
// #include <stdio.h>
// #include<stdio.h>
// int main(void){
//     char str[30];
//     gets(str);
//     int n=strlen(str);
//     for (int i=n-1;i>=0;i--){
//         printf("%c ",str[i]);
//     }
//     printf("\n");
// }

// #include <stdio.h>
// #include<stdio.h>
// int main(void){
//     char str[30];
//     gets(str);
//     int n=strlen(str);
//     char *p=str;
//     for (int i=n-1;i>=0;i--){
//         printf("%c ",*(p+i));
//     }
//     printf("\n");
// }

// #include <stdio.h>
// #include<stdio.h>
// int main(void){
//     int n,i;
//     scanf("%d",&n);
//     char *str=(char *)malloc(sizeof(char)*(n+1));
//     for(i=0;i<n;i++){
//         scanf("%c",&str[i]);
//     }
//     char *p=str;
//     for (int i=n-1;i>=0;i--){
//         printf("%c ",*(p+i));
//     }
//     printf("\n");
// }

// Write a program in C to count the total number of words in a string.
// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char str[30];
//     gets(str);
//     int n=strlen(str);
//     int i,c=0;
//     for (i=0;i<n;i++){
//         if(str[i]==' '){
//             c++;
//         }
//     }
//     printf("Total words are %d\n",(c+1));
// }

// Write a program in C to compare two strings without using string library functions
// #include<stdio.h>
// int main(void){
//     int n,i;
//    scanf("%d",&n);
//    char s[n],str[n];
//       scanf("%s %s",s,str);
//    int p=1;
//    for(i=0;i<n;i++){
//     if(s[i]!=str[i]){
//         p=0;
//         break;
//     }
//    } 
//    if(p==1){
//     printf("string are equal \n");
//    }else{
//     printf("string are not equal \n");
//    }
// }

// #include<stdio.h>
// int main(void){
//     int n,i;
//    scanf("%d",&n);
//    char s[n],str[n];
//    scanf("%s %s",s,str);
//    char *p=s,*q=str;
//    int flag=1;
//    for(i=0;i<n;i++){
//     if((*p) != (*q)){
//         flag=0;
//         break;
//     }
//     p++;
//     q++;
//    } 
//    if(flag==1){
//     printf("string are equal \n");
//    }else{
//     printf("string are not equal \n");
//    }
// }

// Write a program in C to count the total number of alphabets, digits and special characters in a string.
// #include<stdio.h>
// #include<string.h>
// int main(void){
//    char str[30];
//    gets(str);
//    char *p=str;
//    int a=0,d=0,s=0;
//     while((*p)!='\0'){
//         if(((*p) >='a' && (*p)<='z') ||((*p) >='A' && (*p)<='Z')){
//             a++;
//         }else if((*p)>='0' && (*p)<='9'){
//             d++;
//         }else if((*p) != ' '){
//             s++;
//         }
//         p++;
//     }
//     printf("Alphabets : %d  and Digits : %d  and Special : %d\n",a,d,s);
// }

// Write a program in C to copy one string to another string.
// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char str1[30];
//     gets(str1);
//     char *str2 = str1;
//     int n=strlen(str1);
//     printf("1 : %s\n",str1);
//     printf("2 : %s\n",str2);
//     printf("lenght :  %d\n",n);
// }

// Write a program in C to convert a string to lowercase.
// #include<stdio.h>
// #include<string.h>
// int main(void){
//     char str[30];
//     gets(str);
//     char *p=str;
//     int i,n=strlen(str);
//     for(i=0;i<n;i++){
        
//     }
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     char *c=(char *)malloc(n*sizeof(char));

//     for(i=0;i<n;i++){
//         scanf("%s",c+i);
//     }
//     printf("%s",c);
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int N;
//     printf("Input a number: ");
//     scanf("%d",&N);
//     char *ptr = (char*)malloc(N*sizeof(char));
//     for (int i = 0; i<N; i++){
//         printf("alpha :");
//         scanf(" %c",(ptr+i));
//     }
//     // for (int i = 0; i<N; i++){
//         printf("%s",(ptr));
//     // }
// }

