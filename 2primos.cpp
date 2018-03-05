#include<iostream>
using  namespace std;
int main()
{
  int a,n,b;
  cin >> n;
  for(a=2;a<n;a++){
    if(n%a==0){
       	b=1+b;
	a;
	break;}
      
    else
      b=0;
  }
  cout<< b << endl;
  if(b==0){
    cout<< "el numero SI es primo\n";
  }
  else
    { cout << "el numero NO es primo\n";
    }  
      
    
  return 0;
}
