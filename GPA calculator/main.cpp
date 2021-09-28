#include <iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int n;

void cal(string arr1[], int arr2[]){
	
	double sum = 0.0;
	int credit = 0;
	double gpa;
	int x;
	
	for(x=0; x<n ; x++){
		
		if(arr1[x]=="A+" || arr1[x]=="a+" || arr1[x]=="A" || arr1[x]=="a"){
			sum = sum + 4.0*arr2[x];	
		}
		
		else if(arr1[x]=="A-" || arr1[x]=="a-"){
			sum = sum + 3.7*arr2[x];	
		}
		
		else if(arr1[x]=="B+" || arr1[x]=="b+"){
			sum = sum + 3.3*arr2[x];	
		}
		
		else if(arr1[x]=="B" || arr1[x]=="b"){
			sum = sum + 3.0*arr2[x];	
		}
		
		else if(arr1[x]=="B-" || arr1[x]=="b-"){
			sum = sum + 2.7*arr2[x];	
		}
		
		else if(arr1[x]=="C+" || arr1[x]=="c+"){
			sum = sum + 2.3*arr2[x];	
		}
		
		else if(arr1[x]=="C" || arr1[x]=="c"){
			sum = sum + 2.0*arr2[x];	
		}
		
		else if(arr1[x]=="C-" || arr1[x]=="c-"){
			sum = sum + 1.7*arr2[x];	
		}
		
		else if(arr1[x]=="D+" || arr1[x]=="d+"){
			sum = sum + 1.3*arr2[x];	
		}
		
		else if(arr1[x]=="D" || arr1[x]=="d"){
			sum = sum + 1.0*arr2[x];	
		}
		
		else{
			sum = sum + 0.0;
		}
	}
	
	for(x=0; x<n; x++){
		credit = credit + arr2[x];
	}
	
	gpa =  sum/credit;
	cout << endl << "***** " "Your GPA is " << gpa << " *****" << endl;
	
}

int main(){
	
	int x;
	cout << "***** ~Find out your GPA here~ *****" << endl << endl;
	cout << "Enter the number of subjects : ";
	cin >> n; cout << endl;
	
	string array1[n];
	for (x=0; x<n; x++) {
		cout << "Enter the " << "subject "  << x+1 << " grade : ";
    	cin >> array1[x];
	}
	
	cout << endl;
	
	int array2[n];
	for (x=0; x<n; x++) {
		cout << "Enter the " << "subject "  << x+1 << " credit value : ";
    	cin >> array2[x];
	}
	
	cal(array1, array2);
	
	system("pause");
	
}
