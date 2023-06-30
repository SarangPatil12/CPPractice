
//sum of all element in array
//#include<iostream>
//using namespace std;
//void sum(int arr[],int size){
//	int addition = 0;
//	for(int i=0;i<size;i++){
//	addition = addition + arr[i];
//
//	}
//	cout<<"sum of all element "<<addition;
//}
//
//
//int main() {
//int digits[7] = {1,2,3,4,5,6,7};
//sum(digits,7);
//return 0;
//}
//average of array element
//#include<iostream>
//using namespace std;
//void sum(int arr[],int size){
//	int addition = 0;
//	for(int i=0;i<size;i++){
//	addition = addition + arr[i];
//
//	}
//	cout<<"average is " <<addition/size;
//}
//
//
//int main() {
//int digits[7] = {1,2,3,4,5,6,7};
//sum(digits,7);
//return 0;
//}
#include<iostream>
using namespace std;
void small(int arr[],int size){
	int element = 0;
	for(int i=1;i<size;i++){
	if(arr[0]>arr[i]){
		arr[0]=arr[i];
   }
 }
	cout<<"smallest element is "<<arr[0]<<endl;
}
void large(int arr[],int size){
	int element = 0;
	for(int i=1;i<size;i++){
	if(arr[0]<arr[i]){
		arr[0]=arr[i];
   }
 }
	cout<<"large element is "<<arr[0];
}
int main() {
int digits[7] = {2,3,4,1,6,7,5};
small(digits,7);
large(digits,7);
return 0;
}

