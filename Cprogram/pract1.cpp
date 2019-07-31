#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	for(int i = 0; i<t;i++){
	    int n;
	    scanf("%d",&n);
	    int a[n-1];
	    for(int j=0;j<n-1;j++){
	        scanf("%d",&a[j]);
	    }
	    
	    int out;
	    if(a[0] != 1){
	    	out = 1;
	    }else if(a[n-2] != n){
	    	out = n;
	    }else{
	    	for(int j=0;j<n-1;j++){
	   			if((a[j]+1) != a[j+1]){
	   				out = a[j]+1;
	   				break;
	   			}
	   		}
	    }

	    printf("%d\n",out);
	}
	return 0;
}