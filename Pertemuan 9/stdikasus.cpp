#include <iostream>
using namespace std;

class start{
public:
	void header();
	void inputan();
	void sorting();
	void convert2d();

private:
	int array1d[24];
	int array2d[4][6];
	int y = 0;
};

void start::header(){
	cout << "--------------------------------------" << endl;
	cout << "|                                    |" << endl;
	cout << "|           STUDI KASUS 9            |" << endl;
	cout << "|                                    |" << endl;
	cout << "--------------------------------------" << endl;
}

void start::inputan(){
	cout << "Masukkan nomor buku : " << endl;
	for (int i = 0; i < 24; i++) {
    	cout << "Nomor buku : ";
    	cin >> array1d[i];
	}
	cout << "Nomor buku yang telah diinput : \n" << endl;
	for (int i = 0; i < 24; i++) {
    	cout << array1d[i] << endl;
	}
}

void start::sorting(){
	for (int i = 0; i < 24; i++) {
    	for (int j = 0; j < 24; j++) {
    		if (array1d[i] < array1d[j]) {
				int x = array1d[i];
        		array1d[i] = array1d[j];
        		array1d[j] = x;
    		}
    	}
	}
	cout << "\n\nNomor buku yang telah disorting : \n" << endl;
	for (int i = 0; i < 24; i++) {
		cout << array1d[i] << "  ";
	}
}

void start::convert2d(){
	cout << "\n\nRAK BUKU :" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "\nRak ke-" << i + 1 << " : "<< endl;
		cout << "--------------------------------------------";
		cout << "\n";
		if (y == 24) {
			break;
    	}
    	for (int j = 0; j < 6; j++) {
    		array2d[i][j] = array1d[y];
    		cout << array2d[i][j] << "\t";
			y++;
    	}
    	cout << "\n--------------------------------------------";
	}
}

int main(){
	start strt;
	strt.header();
	strt.inputan();
	strt.sorting();
	strt.convert2d();
	return 0;
}
