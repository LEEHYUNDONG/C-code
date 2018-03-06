#include <stdio.h>
#define ADD(x, y) ((x) + (y))
#define SUB(x, y) ((x) - (y))
#define MUL(x, y) ((x) * (y))

typedef struct
{
  int real;
  int img;  
  
}num;

void input(num *n, char ch, int *pn); //function pointer to the res function!!

int main(void)
{
  num a ={0, 0};  
  int n[4];
  char ch;
     
  printf("Input calculation of complex number(sum, sub, mul)\(equation ex)(a + bi)+(c - di) \n >");
  scanf("%d   %d", &n[0], &n[1]);
  scanf(" %c", &ch);
  scanf("%d   %d", &n[2], &n[3]);
  input(&a, ch, n);
      
  printf("\nResult : %d + (%di)\n", a.real, a.img);
  
  return 0;

}

void input(num *n, char ch, int *pn)
{
    
    int x, y, z;
    
    if(ch == '+')
    {
        x = ADD(pn[0], pn[2]);
        y = ADD(pn[1], pn[3]);
           
    }
    else if(ch == '-')
    {
        x = SUB(pn[0], pn[2]);
        y = SUB(pn[1], pn[3]);
  
    }
    else if(ch == '*')
    {
        x = MUL(pn[0], pn[2]);
        y = MUL(pn[1], pn[3]);
        z = -y;
        x = x + z;
        y = MUL(pn[0],pn[3]) + MUL(pn[2],pn[1]);
    
    }
    n->real = x;
    n->img = y;
            
}
