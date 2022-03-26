#include <stdio.h>

int main()
{  int z, x, c, v, b;
   float pdx;
   printf("输入z");
   scanf_s("%d", &z);
   printf("输入x");
   scanf_s("%d", &x);
   printf("输入c");
   scanf_s("%d", &c);
   printf("输入v");
   scanf_s("%d", &v);
   printf("输入b");
   scanf_s("%d", &b);
   
   pdx = (z + x + c + v + b) / 5.0;
    printf("zxccvb的平均值为%.2f",pdx);
   return 0;
}