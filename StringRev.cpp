// Example program
#include <iostream>
#include <string>
using namespace std;
class ReverseString
{
    string s1;
    int n;
    public:
    void get()
    {
        cout<<"Enter the string:";
        cin>>s1;
        }
        void reverse()
        {
            cout<<"Reverse of the string is,";
            n=s1.length();
            for(int i=n-1;i>=0;i--)
            {
                cout<<s1[i];
                }
            }
    };
int main()
{
ReverseString rs;
rs.get();
rs.reverse();
return 0;
}