 #include<stdio.h>
   int main()
   {
       int a,b;
       printf("ENTER TWO NUMBERS\n");
       printf("a = ");
       scanf("%d",&a);
       printf("b = ");
       scanf("%d",&b);
       a=a+b;
       b=a-b;
       a=a-b;
       printf("AFTER SWAPPING\n");
       printf("a = %d\nb = %d\n",a,b);
       return 0;
  }

