#include<iostream>
using namespace std;
class a{
    protected:
    int size;
    int *arr;
    public:
    void input(){
        cout<<"Enter the size of the array: ";
        cin>>size;
        arr = new int[size];
        cout<<"Now enter all the elements";
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
    }
};

class b: public a{
    protected:
    int *filter;
    public:
    void filter(){
        filter = new int[size];
    }
};
int main(){

return 0;
}
