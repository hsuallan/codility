//time complexity O(N*log(N))
#include<iostream>
#include<vector>
#include<algorithm>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::sort(A.begin() , A.end());//sort small to big
	auto u = std::unique(A.begin(), A.end());
	A.erase(u, A.end());
  //let array's element be unique
  
  while(!A.empty()&&A.front() <= 0){
	    A.erase(A.begin());
	}
//delete elements<=0
  if( A.back() < 0 ) {
		return 1;//Due to question
	}

	int x=1;
	
  for(auto iter = A.begin();iter!=A.end();iter++){
	  //use array index to decide 
    if(*iter!=x ){
	           return x;    
	   }
	   x+=1;
	}
	return x;
}
