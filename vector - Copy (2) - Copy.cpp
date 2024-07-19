#include<iostream>
#include<vector>
using namespace std;
int main(){
//	vector<string> v;
//	
//	printf("vector insertion pushback...\n");
//	v.push_back("sudhagar");
//	v.push_back("nivas");
//	v.push_back("sudhakutty");
//	for(vector<string>::iterator itr=v.begin();itr!=v.end();++itr){
//	//	printf("%s",*itr);
//	cout<<*itr<<"=>";
//	}
//	cout<<"NULL";
//	printf("\n");
//	printf("\n vector at() function \n");
//	
////	for(vector<string>::iterator itr=v.begin();itr!=v.end();itr++){
////		cout<<
////	} 
////		
//	for(int i=0;i<v.size();i++){
//		cout<<v.at(i)<<endl;
//	}
//	
//	
//	cout<<"vector front and back method"<<endl;
//	cout<<v.back()<<endl;
//	cout<<v.front();
//	
//	cout<<"swapping two vectors"<<endl;
//	
//	vector<int> v1={1,2,3,4,5,6};
//	vector<int> v2={10,20,30,40,50,60};
//	
//	v1.swap(v2);
//	cout<<"v1 vector "<<endl;
//	for(int i=0;i<v1.size();i++){
//		cout<<v1[i]<<" =>";
//	}
//	cout<<"v2 vector "<<endl;
//		for(int i=0;i<v2.size();i++){
//		cout<<v2[i]<<" =>";
//	}
	vector<int>  v1={1,2,3,4,5};  
vector<int>  v2={6,7,8,9,10};  
cout<<"Before swapping,elements of v1 are :";  
for (int i=0;i<v1.size();i++)  
cout<<v1[i]<<" ";  
cout<<'\n';  
cout<<"Before swapping,elements of v2 are :";  
for(int i=0;i<v2.size();i++)  
cout<<v2[i]<<" ";  
cout<<'\n';  
v1.swap(v2);  
cout<<"After swapping,elements of v1 are  :";  
for(int i=0;i<v1.size();i++)  
cout<<v1[i]<<" ";  
cout<<'\n';  
cout<<"After swapping,elements of v2 are:";  
for(int i=0;i<v2.size();i++)  
cout<<v2[i]<<" ";  

	
	return 0;
}
