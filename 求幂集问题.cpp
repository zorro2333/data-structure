
#include "iostream"
#include "vector"
#include "cmath"
using namespace std;
#define MaxN 10


void inc(int b[],int n);//将b表示的二进制数加一
void PSet(int a[],int b[],int n);//求幂集
int main();

void inc(int b[],int n){//将b表示的二进制数加一
    for(int i=0;i<n;++i){
        if(b[i]){
            b[i]=0;
        }else{
            b[i]=1;
            break;
        }
    }


};//将b表示的二进制数加一
void PSet(int a[],int b[],int n) {
    int i, k;
    int pw = (int) pow(2, n);
    cout<<"1~"<<n<<"的幂集"<<endl;

    for (i = 0; i < pw; ++i) {
        cout << "{";
        for (k = 0; k < n; ++k) {
            if (b[k])
                cout << a[k];
        }
        cout << "}";
        inc(b, n);
        cout << endl;
    };//求幂集
}
int main() {
    int n = 3;
    int a[MaxN], b[MaxN];
    for (int i = 0; i < n; ++i) {
        a[i] = i + 1;
        b[i] = 0;
    }
    PSet(a, b, n);
}




