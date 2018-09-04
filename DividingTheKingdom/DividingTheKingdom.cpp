//time complexity O((N+M)*N*M) not a good way -_-
#include <iostream>
#include <vector>
int solution(int N, int M, vector<int> &X, vector<int> &Y) {
    // write your code in C++14 (g++ 6.2.0)
    if( X.size()%2!=0) return 0;//odd number can not divide
    int ex = X.size()/2;//equal of array x
    int ey = Y.size()/2;

    int mines = 0;//how many gold mines be divide in this way
    int ans = 0;
    
    for( double x = 0.5 ; x<M ; x+=1){//y軸
       mines = count_if(Y.begin(),Y.end(),[x](int a){return a<x;});
       if(mines == ex){
           ans +=1;
       }
       if(mines>ey){
           break;
       }
    }
     for(double y = 0.5; y<N ; y+=1){//x軸
       mines = count_if(X.begin(),X.end(),[y](int a){return a<y;});
       if(mines == ey){
           ans +=1;
       }
       if(mines>ex){
           break;
       }
    }
    return ans;
}
