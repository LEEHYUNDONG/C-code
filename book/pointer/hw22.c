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
  char ch1;
     
  printf("Input calculation of complex number(sum, sub, mul)\(equation ex)(a + bi)+(c - di) \n >");
  scanf("%c%d%c%c%c%%d%c",&ch1, &n[0],&ch1,&ch1,&ch1, &n[1], &ch1);
  scanf("%c%c%c", &ch1, &ch, &ch1);
  scanf("%c%d%c%c%c%%d%c",&ch1, &n[2],&ch1,&ch1,&ch1, &n[3], &ch1);
  input(&a, ch, n);
      
  printf("\nResult : %d + (%di)\n", a.real, a.img);
  
  system("pause");
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



