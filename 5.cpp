#include <iostream>
using namespace std;

void patternprint(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        int k=i+1;
        for(int j=0;j<=i;j++)
        {
            cout<<k--;
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
 
