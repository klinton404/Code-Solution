#include<iostream>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]=="Tetrahedron")
        {
            count+=4;
        }
        else if(s[i]=="Cube")
        {
            count+=6;
        }
        else if(s[i]=="Octahedron")
        {
            count+=8;
        }
        else if(s[i]=="Dodecahedron")
        {
            count+=12;
        }
        else if(s[i]=="Icosahedron")
        {
            count+=20;
        }

    }
    cout<<count;
}
