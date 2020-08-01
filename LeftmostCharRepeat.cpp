#include <iostream>

using namespace std;
int leftrepeat(string s)
{
    int res=INT_MAX,index[256];
    for(int i=0;i<256;i++)
    {
        index[i]=-1;
    }

    for(int i=s.length()-1;i>=0;i--)
    {
        if(index[s[i]]==-1)
            index[s[i]]=i;
        else
            res=i;
    }
    return ((res==INT_MAX)?-1:res);
}
int main()
{
    int r;
    r=leftrepeat("abccb");
    cout<<r;
    return 0;
}
