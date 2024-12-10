#include<stdio.h>
void swap(int *a,int *b){ 
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=10, y=20;
//     int *ptr1, *ptr2;
//     ptr1=&x;
//     ptr2=&y;
x++
    ;printf("before swaping a=%d, b=%d\n",x,y);
    swap(&x,&y);
    printf("after swaping a=%d,b=%d ",x,y);
    return 0;     
}