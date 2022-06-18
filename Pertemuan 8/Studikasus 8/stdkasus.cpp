#include <iostream>
using namespace std;

class data{
	private : 
		int matriks[100][3];
		int jum_baris, i, j, k, total;
		string jurusan[3];	
	
	public :
		void inputan(){
			cout << "= = = = = PROGRAM MENCETAK BANYAK LULUSAN = = = = =" << endl << endl;
			cout << "MASUKKAN 3 JURUSAN : "<<endl<<endl;
			for(k = 0; k < 3; k++){
    			cout <<"Masukkan jurusan ke-"<<k+1<<" : ";
    			cin >> jurusan[k];
			}
 
			cout << "\nMasukkan banyak angkatan lulusan : ";
			cin >> jum_baris;
			for(i = 0; i < jum_baris ; i++)
			{
  				cout<<"Angkatan ke-"<<i+1<<endl;
    			for(j = 0; j < 3; j++)
				{
    				cout <<jurusan[j]<<" : ";
    				cin >> matriks[i][j];
				}
    			cout << endl;
			}
		}
		void outputan(){
			cout << "Tampil Data Lulus " << endl <<endl;
			cout<<"          ";
			for(k = 0; k < 3 ; k++){
				cout<<jurusan[k]<<" ";
			}
			cout<<endl;
			for(i = 0; i < jum_baris ; i++){
				cout<<"Th ke-"<<i+1<<"   ";
    			for(j = 0; j < 3; j++){
    				cout <<matriks[i][j] << " ";
    			}
    			cout << endl;
			}
		}
		void rata(){
			for(i=0; i<jum_baris; i++) {
            	total = 0;
            	for(j=0; j<3; j++) {
                	total = total+matriks[i][j];
            	}
        	}
        	cout << "Rata-rata : " << (double) total / 3  << endl;
		}
};

int main(){
	data cetak;
	cetak.inputan();
	cetak.outputan();
	cetak.rata();
	return 0;
}
