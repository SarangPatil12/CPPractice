#include<iostream>;
using namespace std;
int main (){
	int range,number;
	cout<<"enter the number";
	cin>>number;
	cout<<"enter the range";
	cin>>range;
	for(int i=1;i>=range;i++){
		int table;
		table = number*i;
		cout<<table;
	}

    //cout<<table;

}
