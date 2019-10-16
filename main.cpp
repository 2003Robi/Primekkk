#include <iostream>

using namespace std;

int main()
{
    int a,o;
    bool p= true;
    cout <<"kerem a szamot "<<endl;
    cin >>a;
    for (o=2;o<a/2+1;o++)
    {
    if(a%o==0)
    {
        p=false;
    }
    }
    if (p)
        cout<<"a szam prim "<<endl;
    else
        cout<<"a szam NEEEM prim "<<endl;
    return 0;
}
