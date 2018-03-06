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
  complex com;  
  int n[4];
  char ch;
     
  printf(" Input calculation of complex number(sum, sub, mul)\n (equation ex)(a + bi)<>(c - di) \n >");
  scanf("a : %d b :%d",&n[0], &n[1]);
  scanf("\n<> :%c", &ch);
  scanf("\nc : %d d : %d"&n[2], &n[3]);
  
  input(ch, n);
      
  printf("\nResult : %d + %di\n", com.real, com.img);
  
  system("pause");
  return 0;

}

complex input(char ch, int *pn)
{
    complex com;
    int x, y, z;
    
    if(ch == '+')
    {
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
    
    return complex;
            
}


