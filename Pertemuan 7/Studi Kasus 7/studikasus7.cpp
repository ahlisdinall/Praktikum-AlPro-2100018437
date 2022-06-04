#include <iostream>
using namespace std;

class data{
	public:
		void input();
		void urut();
		void cari();
	private:
		int n,pil;
		string nama[100];
		string tmpNama;
		double nim[100],tmp,c;
};

void data::input(){
	cout<<"---------------------------------------------"<<endl;
	cout<<"|                                           |"<<endl;
	cout<<"|            INPUT DATA MAHASISWA           |"<<endl;
	cout<<"|                                           |"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Banyaknya data : "; 
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"Data Mahasiswa ke-"<<i+1<<endl;
		cout<<"NIM    : "; cin>>nim[i];
		cout<<"Nama   : "; cin>>nama[i];
		cout<<endl;
	}
}

void data::urut(){
	cout<<"---------------------------------------------"<<endl;
	cout<<"|              PILIHAN SORTING              |"<<endl;
	cout<<"|                                           |"<<endl;
	cout<<"|1. Naik  (Ascending)                       |"<<endl;
	cout<<"|2. Turun (Descending)                      |"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Pilihan anda : "; cin>>pil;
	cout<<endl;
	switch (pil){
		case 1:
			cout<<"HASIL : "<<endl;
			cout<<"Data diurut (Naik) : ";
	     	for(int a=0; a<n; a++)
	      	{
	            for(int b=n-1; b>=a; b--)
	            {
	             if(nim[b]<nim[b-1])
	             {
	             tmp = nim[b];
	             tmpNama=nama[b];
	             nim[b] = nim[b-1];
	             nama[b]=nama[b-1];
	             nim[b-1] = tmp;
	             nama[b-1]=tmpNama;
	             }
	            }
	            cout<<nim[a]<<" ";
	        }
	        break;
	    case 2:
	    	cout<<"HASIL : "<<endl;
	    	cout<<"Data diurut (Turun) : ";
	       for(int i=1;i<n;i++)
    		{
		        for(int d=0;d<n-i;d++)
		        {
		            if(nim[d]<nim[d+1])
		            {
		                tmp=nim[d];
		                tmpNama=nama[d];
		                nim[d]=nim[d+1];
		                nama[d]=nama[d+1];
		                nim[d+1]=tmp;
		                nama[d+1]=tmpNama;
		            }
		        }
		    }
		    for(int i=0;i<n;i++)
		    {
		        cout << " " << nim[i];
		    }
		break;
	}
}

void data::cari(){
	cout<<"\n---------------------------------------------"<<endl;
	cout<<"|                                           |"<<endl;
	cout<<"|             PROGRAM SEARCHING             |"<<endl;
	cout<<"|                                           |"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout << "Input NIM yang akan dicari: ";
	cin >> c;

	// proses pencarian array
	for(int i = 0; i <= n; i++){
	    if(nim[i] == c){
	    	cout<<"\n---------------------------------------------"<<endl;
	    	cout<<"NIM ditemukan pada data ke-" << i+1<<endl;
	    	cout<<"Data Mahasiswa ke-"<<i+1<<endl;
			cout<<"NIM    : "<<nim[i]<<endl;
			cout<<"Nama   : "<<nama[i]<<endl;
	    }
	}
}


int main(){
	data mhs;
	mhs.input();
	mhs.urut();
	mhs.cari();
	return 0;
}
