#include <stdio.h>
/*#define ADD(x, y) ((x) + (y))
#define SUB(x, y) ((x) - (y))
#define MUL(x, y) ((x) * (y))
*/
struct Complex 
{
  int real;
  int img;  
  
};
typedef struct Complex complex;

complex input(char ch, int *pn); //function pointer to the res function!!

int main(void)
{
  complex co;  
  int n[4] = {1, 2, 3, 4};
  char ch;
  
  printf("chose one of them (+, -, *) : "); 
  scanf("%c", &ch);
  printf("(%d + %di)%c(%d + %di) = ", n[0], n[1], ch, n[2], n[3]);
  
  co = input(ch, n);
    
  /*printf(" Input calculation of complex number(sum, sub, mul)\n (equation ex)(a + bi)<>(c - di) \n >");
  printf("a : "); scanf("%d", &n[0]);
  printf("b : "); scanf("%d", &n[1]);
  printf("c : "); scanf("%d", &n[2]);
  printf("d, <> : "); scanf("%d%c", &n[3], &ch);
  input(ch, n);*/
      
  printf("%d + %di\n\n", co.real, co.img);
  
  return 0;

}

complex input(char ch, int *pn)
{
    complex com;
    int x, y, z;
    
    if(ch == '+')
    {
        //printf("%d%d%d%d", pn[0], pn[1], pn[2], pn[3]);
        x = pn[0] + pn[2];
        y = pn[1] + pn[3];
           
    }
    else if(ch == '-')
    {
        x = pn[0] - pn[2];
        y = pn[1] - pn[3];
  
    }
    else if(ch == '*')
    {
        x = pn[0] * pn[2];
        y = (pn[1] * pn[3]);
        z = -y;
        x = x + z;
        y = (pn[0]*pn[3]) + (pn[2]*pn[1]);
    
    }
    com.real = x;
    com.img = y;
    
    printf("%d, %d", com.real, com.img);
    return com;
            
}


