// #include<stdio.h>
// int main(){
//     int a;
//     int*p;
//     a=10;
//     p=&a; //&a=address of a given in p  
//     printf("%d\n",p);
//     printf("%d\n",*p); //*p value at address pointed by p
//     printf("%d",&a);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a=10;
//     int *p;
//     p = &a;
//     printf("size of integer %d bytes \n",sizeof(int));
//     printf("address = %d, value = %d\n",p,*p);
//     printf("address = %d value =%d\n",p+1,*(p+1));
//     char *p0;
//     p0=(char*)p;  // typecasting
//     printf("size of char is %d bytes\n",sizeof(char));
//     printf("address =%d  value =%d \n",p0,*p0);
//     printf("adress = %d  value = %d \n",p0+1,*(p0+1));
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a =1025;
//     int *p;
//     p=&a;
//     printf("size of integer is %d bytes \n",sizeof(int));
//     printf("address =%d,  value = %d\n",p,*p);
//     //void pointer - Genric pointer
//     void *p0;
//     p0=p;
//     printf("address = %d",p0);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x=5;
//     int *p=&x;
//     *p=6;
//     int **q=&p;
//     int ***r=&q;
//     printf("%d \n",*p);
//     printf("%d \n",*q);
//     printf("%d \n",**q);
//     printf("%d \n",**r);
//     printf("%d \n",***r);
//     ***r=10;
//     printf("X = %d \n",x);
//     **q=*p+2;
//     printf("x=%d \n",x);
//     return 0;
// }

// #include<stdio.h>
// void Increment(int *p){
//     *p = (*p) + 1;
// }
// int main(){
//     int a ;
//     a=10;
//     Increment(&a);
//     printf("a = %d\n",a);
//     return 0;
// }

//pointer and Arrays
// #include<stdio.h>
// int main(){
//     int A[]={2,4,6,8,1};
//     int i;
//     for(int i=0;i<5;i++){
//         printf("address = %d\n",&A[i]);
//         printf("address = %d\n",A+i);
//         printf("value = %d\n",A[i]);
//         printf("value = %d\n",*(A+i));
//     }
//     return 0;
// }

// character arrays and pointers
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char c[20];
//     c[0]='P';
//     c[1]='i';
//     c[2]='n';
//     c[3]='k';
//     c[4]='i';
//     c[5]='\0';
//     printf("%s\n",c);
//     int len =strlen(c);
//     printf("length : %d\n",len);
//     return 0;
// }



