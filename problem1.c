// Given a number N. Print the factorial of number N.
#include <stdio.h>
long long int fact(int n){
    long long int result = 1;
    for(int i=1;i<=n;i++){
        result*=i;

    }
    return result;
}
int main(){
    int t,N;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&N);
        printf("%lld\n",fact(N));
    }
}