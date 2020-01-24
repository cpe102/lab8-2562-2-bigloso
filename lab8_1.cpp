#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	float q,w ,total,interest;
	float x,y,z,i;
	
	cout<< "Enter initial loan: ";
	cin >> x ;
	cout<<"Enter interest rate per year (%): ";
	cin >> y ;
	cout<<"Enter amount you can pay per year: ";
	cin >> z ;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int A=1 ;
	while(x != 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << A; 
	cout << setw(13) << left << x;
	interest = x*y/100;
	cout << setw(13) << left << interest;
	total = x+interest ;
	cout << setw(13) << left << total;
	if(total < z){
		z=total ;
		cout << setw(13) << left << z;
	}
	else cout << setw(13) << left << z;
	i=total-z;
	cout << setw(13) << left << i;
	x = i;
	cout << "\n";
	if(x == 0) break;
	A++	;
}
	return 0;
}
