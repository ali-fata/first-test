#include <iostream>
using namespace std;//heyyyyyyyyyyyy dude
int main(){
	int n,z=0;
	cin>>n;
	int i=n-1;
	
	for(n;n>1;n--){
		for(i=n-1;i>1;i--){
			if(n%i==0){
				break;
			}
		}
		if(i==1){
			i=n-1;	
			z++;
		}
		if(z==5){
			break;
		}
	}
	cout<<n;
	
	return 0;
}
