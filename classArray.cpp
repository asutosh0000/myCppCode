#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
class Array{
	int size;
	int arr[];
	public:
		Array(int num){
			size = num;
			arr[size];
			cout<<"Enter the elements of the array "<<endl;
			for(int i = 0; i<size; i++){
				cin>>arr[i];
			}
		}
		int largest(){
			int max = INT_MIN;
			for(int i = 0; i<size; i++){
				if(max < arr[i]){
					max = arr[i];
				}
			}
			return max;
		}
		float std(){
			int sum = 0;
			for(int i=0; i<size; i++){
				sum += arr[i];
			}
			int mean = sum/size;
			int dif = 0;
			for(int i=0; i<size; i++){
				dif += pow((arr[i] - mean), 2);
			}
			float meanOfDif = dif/size;
			float s = sqrt(meanOfDif);
		}
};
int main(){
	Array a(5);
	cout<<"The largest element in the array is "<<a.largest()<<endl;
	cout<<"The standard deviation of the array is "<<a.std()<<endl;
	return 0;
}
