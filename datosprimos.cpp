#include<iostream>
using namespace std;
int primo(int a)
{
  int b,i;
  for (i=2;i<a;i++)
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
  int x=100000000;//cambio a constante
  int i;
  int y=0;
  int a=0;
  //cin>> x;
  for(i=2;i<=x;i++)
    {
      if(primo(i)==0){
	y++;
	cout<< a++ << "\t" << i << endl;}  
    }
  //cout << y << endl;
  return 0;
}  
