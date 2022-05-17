#include<iostream>
using namespace std;
int main(){
	int feb;
	int mar;
	int apr;
	int may;
	int jun;
	cout<<"Total number of cases in February"<<endl;
	cin>>feb;
	cout<<"Total number of cases in March"<<endl;
	cin>>mar;
	cout<<"Total number of cases in April"<<endl;
	cin>>apr;
	cout<<"Total number of cases in May"<<endl;
	cin>>may;
	cout<<"Total number of cases in June"<<endl;
    cin>>jun;
    if(jun>may && may > apr && apr > mar && mar>feb){
    	cout<<"COVID-19 Cases increasing in Pakistan"<<endl;
	}
	else if (jun<may && may < apr && apr < mar && mar<feb){
		cout<<"COVID-19 Cases decreases in Pakistan"<<endl;
	}
	else if (jun==may && may == apr && apr == mar && mar==feb){
		cout<<"COVID-19 has same pase in Pakistan"<<endl;
	}
	else{
		cout<<"COVID-19 unpredictble in Pakistan"<<endl;
	}
	
}
