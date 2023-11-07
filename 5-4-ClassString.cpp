#include<iostream>
using namespace std;
class str{
    int size;
    char arr[];
    public:
        void inpuit(){
            cout<<"Enter the string"<<endl;
            cin.getline(arr,100);
        }
        void display(){
            cout<<"The inserted string is: "<<endl;
            for (int i = 0; arr[i]!='\0'; i++)
            {
                cout<<arr[i];
            }
            cout<<endl;
        }
        friend void reverse(str s1);
        friend void compare(str s1,str s2);
        friend void copy(str s1, str s2);
};

void reverse(str s1){
    int size=0;
    int i=0;
    while (s1.arr[i]!='\0')
    {
        size++;
        i++;
    }
    for (int i = 0; i < size; i++)
    {
        char temp = s1.arr[i];
        s1.arr[i] = s1.arr[size-i];
        s1.arr[size-1] = temp;
    }
    
}

void compare(str s1, str s2){
    if (s1.arr == s2.arr)
    {
        cout<<"The two arrays are equal"<<endl;

    }
    else{
        cout<<"The two arrays are unequal"<<endl;
    }
    
}

void copy(str s1, str s2){
    int i=0;
    while (s1.arr[i]!='\0')
    {
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        s1.arr[i] = s2.arr[i];
    }
    cout<<s1.arr;
}
int main(){
    str s1;
    s1.inpuit();
    s1.display();
    reverse(s1);
    s1.display();
    copy(s1,s2);
return 0;
}
