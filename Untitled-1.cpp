#include <iostream>
using namespace std;
const int s=100;
int main(){
    int n,d;
    int p[s][s];
    int p1[s][s];
    cout<<"entrez le degree"<<endl;
    cin>>d;
    cout<<"entrez la puissance"<<endl;
    cin>>n;
    cout<<"donnez la matrice"<<endl;
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            cin>>p[i][j];
        }}
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            for(int k=0;k<n;k++){
            p1[i][j]+=p[k][j]*p[i][k];}
            cout<<p1[i][j]<<"\t";
        }cout<<endl;
    }
    return 0;
}
