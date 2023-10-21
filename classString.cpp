#include<iostream>
using namespace std;
class str{
	int size1=0, size2=0;
	char* string1;
	char* string2;
	public:
	str(){

	}
		str(const char *s1, const char * s2){
			while(s1[size1] != '\0'){
				size1++;
			}
			while(s2[size2] != '\0'){
				size2++;
			}
			string1 = new char[size1+1];
			for(int i=0; i<size1; i++){
				string1[i] = s1[i];
			}
			string1[size1] = '\0';
			string2 = new char[size2+1];
			for(int i=0; i<size2; i++){
				string2[i] = s2[i];
			}
			string2[size2] = '\0';
		}
		
		void copy(){
			for(int i=0; i<size2; i++){
				string1[i] = string2[i];
			}
			cout<<"The first string after copy: ";
			for(int i=0; i<size2; i++){
				cout<<string1[i];
			}
		}
		void display(){
			cout<<"The first string is: "<<string1<<endl;
			cout<<"The second string is: "<<string2<<endl;
		}
		void concate(){

			char *concate = new char[size1+size2+1];
			for(int i = 0; i<size1; i++){
				concate[i] = string1[i];
			}
			for(int i = 0; i<size2; i++){
				concate[size1+i] = string2[i];
			}
			concate[size1+size2] = '\0';
			cout<<"The concatenated string is "<<concate<<endl;
		}
		
		void compare(){
			if(size1 == size2){
				cout<<"The two string have the equal length"<<endl;
			}
			else{
				cout<<"The two string have of the different length"<<endl;
			}
		}
		void len(){
			cout<<"The length of the first string is "<<size1<<" The size of the second string is "<<size2<<endl;
			
		}
};

int main(){
	char a[100];
	char b[100];
	cout<<"Enter the first string: ";
	cin.getline(a,100);
	cout<<"Enter the second string: ";
	cin.getline(b,100);
	str string(a,b);
	string.display();
	string.concate();
	string.compare();
	string.copy();
	return 0;
}
