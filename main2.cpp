#include <iostream>

using namespace std;

int main()
{
    int a,o=2;
    bool p= true;
    cout <<"kerem a szamot ";
    cin >>a;
    while(o<a/2+1)
    {
    if(a%o==0)
    {
        p=false;
    }
    o++;
    }
    if (p)
        cout<<"a szam prim "<<endl;
    else
        cout<<"a szam NEEEM prim "<<endl;
    return 0;
}
