#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

	int i_s,j_s,length;
	int point;
	int point_me;

	cout<<"Enter the cordinates : ";
	cin>>i_s>>j_s;

	point = i_s+j_s;

	cout<<"Enter the length : ";
	cin>>length;

	point_me = point;

	for(int i=0; i<10; i++){
			point_me-=2;
		for(int j=0; j<10; j++){

			if(point==i+j && i>=i_s && i<(i_s+length))
			{
				printf("%d,%d ", i,j);
			}
			if(point+2==i+j && i>=i_s && j>=j_s)
			{
				printf("%d,%d+ ", i,j);	
			}
			else
			{
				printf("-,- ");
			}
		}
		cout<<endl;
	}
}