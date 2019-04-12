#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    int n;     
    int a, b, c, d; 
    printf("輸入正方形的邊長：\n");
    scanf("%d", &n); 
    
    d = n;
    for(c=1 ; c<=d; c++){
       for(b=n ; b<d ; b++)
          printf(" ");
               for(a = 1 ; a <= n ; a++ )
                  printf("*");
                  printf("\n");
                  n--;
    }
    
    system("pause");
    return 0;
}
