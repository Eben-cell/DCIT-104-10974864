# include<iostream> 
using namespace std;
void AvgOfPrimeNum(){
	int asan;    
	int sumOfPrimeNum;  
	float countOfPrimeNum; 
	float meanOfPrimeNum;

	sumOfPrimeNum = 0;     
	 countOfPrimeNum = 0;


	cout<<"Insert positive number: ";
	cin>>asan;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Prime numbers less than "<<asan<<" are"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;


    for(int x=2;x<asan;x++){
    	int flag=0;
    	for(int i=2;i<=x/2;i++){
    		if(x%i==0){
    			flag=1; break;
	    	}
		}
		if (flag==0){
		cout<<x<<endl;
		sumOfPrimeNum+=x;
		countOfPrimeNum+=1;
	    }
	}
	meanOfPrimeNum = sumOfPrimeNum/countOfPrimeNum;  
	cout<<"The sum of the prime numbers above is "<<sumOfPrimeNum<<endl;
	cout<<"The count of the  prime numbers is "<<countOfPrimeNum<<endl;
	cout<<"The mean of the sum of the prime numbers above is "<<meanOfPrimeNum<<endl;
}
int main(){

	AvgOfPrimeNum();

	return 0;
}

