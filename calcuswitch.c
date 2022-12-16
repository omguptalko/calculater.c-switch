// program calculate the number
#include<stdio.h>

void main()
{
float a,b,c ;
char ch;
 
printf(" enter character '+','-','*','/','%'  ");
scanf("%c",&ch ) ;
switch(ch)
{ case '+' :
{ 
printf("enter first no.=");
scanf("%f",&a);
printf("enter second no.=");
scanf("%f",&b);
c=a+b;
 printf(" addition =%f",c ) ;
   break;
}
case '-' :
 { printf("enter first no.=");
scanf("%f",&a);
printf("enter second no.=");
scanf("%f",&b);

 c=a-b;

 printf(" substaction =%f",c) ;
   break ;
}
 case '*' :
{ printf("enter first no.=");
scanf("%f",&a);
printf("enter second no.=");
scanf("%f",&b);
c=a*b;
 printf(" multiplication =%f ",c) ;
   break;
}
case '/' :
{ printf("enter first no.=");
scanf("%f",&a);
printf("enter second no.=");
scanf("%f",&b);
c=a/b;
 printf(" division =%f ",c) ;
   break;
}

case '%' :
{ printf("enter first no.=");
scanf("%f",&a);
printf("enter second no.=");
scanf("%f",&b);
c=(int)(a)%(int)(b);
 printf("modulus of % 2f %2f= %f",a,b,c) ;
   break;
}
default :
  printf(" wrong input");
}
}










 