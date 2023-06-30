//#include<iostream>
//using namespace std;
// void print(int arr[],int size){
// 	cout<<"array after swapping = "<<endl;
// 	for(int i=0;i<size;i++){
// 		cout<<arr[i]<<" ";
// 	    } cout<<endl;
//	 }
// void swapnum(int arr[],int size){
// 	for(int i=0;i<size;i+=2){
// 		if(i+1<size){
// 			swap(arr[i],arr[i+1]);
//		 }
//	 }
// }
//int main(){
//	int odd[7] = {1,2,3,4,5,6,7};
//	int  even[6] = {2,3,4,5,6,7};	
//	swapnum(odd,7);
//	print(odd,7);
//	swapnum(even,6);
//	print(even,6);
//	return 0;
//}
#include<iostream>
using namespace std;
void print(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void swaparray(int arr[],int size){
		for(int i=0;i<size;i+=2){
			if(arr[i]<size){
			int a = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = a;
		}
	}
}
int main(){
    int	odd[5] = {11,22,33,44,55};
    int even[6] = {12,13,14,15,16,17};
    swaparray(odd,5);
    print(odd,5);
    swaparray(even,6);
    print(even,6);
    return 0;
}
