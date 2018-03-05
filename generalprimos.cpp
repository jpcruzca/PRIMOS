#include<iostream>
using namespace std;
int primo(int a)
{
  int b,i;
  for (i=2;i<a;i++)//este codigo mustra los pimos entre dos valores dados x e y
    {
      if(a%i==0){
	b=1;
      break;}
      else
	b=0;
    }
  return b;
}
int main()
{
  int y;
  int x;
  int i;
  
  cin>> y;
  cin>> x;
  if(y<=1){// esto se escribe para evitar el error de contar al 1 como número primo
    i=2;}
  else{i=y;}
  for(i;i<=x;i++)
    {
	if(primo(i)==0)
	  cout<< i << endl;
    }
  return 0;
  }  
