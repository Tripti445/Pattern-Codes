#include <iostream>
using namespace std;

void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j<(2*i)-1;j++)
        {
            cout<<j;
        }
        for(int j=(2*i)-1;j>=i;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}
int main()
{
  int n;
  cin>>n;
  patternprint(n);
  return 0;
}
