#include<iostream>
using namespace std;

//Write the function printO() here
char printO(int a, int b){
	if(a<=0 or b<=0){
		cout << "invalid input\n" ;
	}
	for(int i=0 ; i<a ; i++){
		for(int t=0 ; t<b ;t++){
			cout <<"O";
		}
		cout<<"\n" ;
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,0);
	cout << "\n";	
	
	return 0;
}
