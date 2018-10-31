#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num;
	int a, b;
	int q;
	int s1=0, s2=0, i=1,j=1, res;
	cin>>num>>a>>b;
	q= a*b;
    
	while((a*i)<num && (b*i)<num){
        s1 += (a*i);
        s2 += (b*i);
        i++;
	}
	
	if((a*i)< num){
	    while((a*i)<num){
	        s1+=(a*i);
	        i++;
	    }
	}
	
	if((b*i)< num){
	    while((b*i)<num){
	        s2+= (b*i);
	        i++;
	    }
	}
	
	res=s1+s2;
	
	while((q*j)< num){
	    res-= (q*j);
	    j++;
	}

	// Final Result
	cout<<res;
    	
	return 0;
}
