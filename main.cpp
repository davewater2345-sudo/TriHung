#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 float a, b, c;
  cout<<"nhap gia tri 3 canh tam giac: ";
  cin>>a>>b>>c;
  float CV= (a+b+c);
  float p=CV/2;
  float S=sqrt(p*(p-a) *(p-b)*(p-c));
  cout<<"chu vi tam giac = "<< CV << endl;
    cout<<"dien tich tam giac = "<< S << endl;

    return 0;

}
