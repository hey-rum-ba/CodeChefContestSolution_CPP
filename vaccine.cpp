#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int d1,d2,v1,v2;
    int p,k;
    cin>>d1>>v1>>d2>>v2>>p;
    int produce;
    int total_vac =0;
    for(k=0; total_vac < p; k++)
    {
        if(k<d1&&k<d2) {produce=0;}
        else if(k>=d1&&k<d2) {produce = v1;}
        else if(k<d1&&k>=d2) {produce = v2;}
        else {produce = v1+v2;}
        total_vac +=produce;
    }
    int ans =k; 
    cout << ans-1 << endl;
    return 0;
    
}