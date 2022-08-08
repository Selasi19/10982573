# include<iostream>
using namespace std;
void AverageOfPNm(){
	int n;    int sumOfPrN;   float countOfPrN;   float averageOfPrN;
	sumOfPrN = 0;      countOfPrN = 0;
	cout<<"Enter positive integer: ";
	cin>>n;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Prime numbers below "<<n<<" are"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
    for(int x=2;x<n;x++){
    	int flag=0;
    	for(int i=2;i<=x/2;i++){
    		if(x%i==0){
    			flag=1; break;
	    	}
		}
		if (flag==0){
		cout<<x<<endl;
		sumOfPrN+=x;
		countOfPrN+=1;
	    }
	}
	averageOfPrN = sumOfPrN/countOfPrN;
	cout<<"The sum of the the printed prime numbers above is "<<sumOfPrN<<endl;
	cout<<"The count of the prime numbers is "<<countOfPrN<<endl;
	cout<<"The average the of the sum of the prime numbers above is "<<averageOfPrN<<endl;
}
int main(){
	AverageOfPNm();
	return 0;
}
