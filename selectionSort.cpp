#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        for(int i = 0; i < arr.size(); i++){
            int temp = i;
            for(int j = i+1; j < arr.size(); j++){
                if(arr[temp] > arr[j]){
                    temp = j;
                }
            }
            swap(arr[temp], arr[i]);
        }
    }
};
int main(){
	vector<int>arr;
	int size;
	cout<<"Enter size of an array\n";
	cin>>size;
	cout<<"Enter the number into it\n";
	for(int i = 0; i < size; i++){
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	Solution obj;
	obj.selectionSort(arr);
	cout<<"The sorted data is \n";
	for(int i = 0; i < arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}