#include<iostream>
using namespace std;

class Sorting{
	friend istream& operator>>(istream&, Sorting&);
	friend ostream& operator<<(ostream&, const Sorting&);
	
	public:
		void selection_sort();
		void pencarianBiner();
		
	private:
		void minimum(int,int,int&);
		void tukar(int*,int*);
		int data[100], n, low, middle, high;
};

void Sorting::minimum(int dari, int n, int &tempat){
	int min=data[dari];
	tempat=dari;
	for(int i=dari+1; i<n; i++){
		if(data[i]<min){
			min=data[i];
			tempat=i;
		}
	}
}

void Sorting::tukar(int*a, int*b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void Sorting::selection_sort(){
	int t;
	for(int i=0; i<n; i++){
		minimum(i,n,t);
		tukar(&data[i], &data[t]);
		cout<<data[i]<<" ";
	}
}

void Sorting::pencarianBiner(){
	int midle, kunciPencarian;
	low = 0;
	high = (n-1);
	middle = (low+high)/2;
	
	while(low<=high){
		middle=(low+high)/2;
		if(kunciPencarian == data[middle]){
			
			if (kunciPencarian == data[middle])	
				return middle;
			else if (kunciPencarian < data[middle])
				high = middle - 1;
			else low = middle + 1;
		}
	}

istream& operator>>(istream& in, Sorting& a){
	cout<<"Tentukan banyak data : ";
	in>>a.n;
	for(int i=0; i<a.n; i++){
		cout<<"MAsukkan data ke-"<<i<<" : ";
		cin>> a.data[i];
	}
	cout<<"Data setelah diurutkan : ";
	a.selection_sort();
	return in;
}

ostream& operator<<(ostream& out, Sorting& a){
	out<<"Data berada pada index ke-"<<a.pencarianBiner();
	return out;
}

int main(){
	Sorting run;
	cin>>run;
	cout<<run;
}
