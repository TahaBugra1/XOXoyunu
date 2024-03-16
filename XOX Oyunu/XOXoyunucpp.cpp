#include <iostream>
using namespace std;


char kare[10] = { 'T','1','2','3','4','5','6','7','8','9' };


void tahta() {
	system("cls");
	cout << "--------------XOX Oyunu---------------" << endl;
	cout << "  Oyuncu 1 (X)  -  Oyuncu 2(O)  " << endl << endl << endl;
	cout << "       |       |       " << endl;
	cout << "    " << kare[1] << "  |  " << kare[2] << "    |  " << kare[3] << endl;

	cout << "       |       |       " << endl;
	cout << "------- ------- -------" << endl;
	cout << "       |       |       " << endl;

	cout << "    " << kare[4] << "  |  " << kare[5] << "    |  " << kare[6] << endl;

	cout << "       |       |       " << endl;
	cout << "------- ------- -------" << endl;
	cout << "       |       |       " << endl;

	cout << "    " << kare[7] << "  |  " << kare[8] << "    |  " << kare[9] << endl;
	cout << "       |       |       " << endl;



}

int kontrol() {
	if (kare[1] == kare[2] && kare[2] == kare[3])
		return 1;
	else if (kare[4] == kare[5] && kare[5] == kare[6])
		return 1;
	else if (kare[7] == kare[8] && kare[8] == kare[9])
		return 1;
	else if (kare[1] == kare[4] && kare[4] == kare[7])
		return 1;
	else if (kare[2] == kare[5] && kare[5] == kare[8])
		return 1;
	else if (kare[3] == kare[6] && kare[6] == kare[9])
		return 1;
	else if (kare[1] == kare[5] && kare[5] == kare[9])
		return 1;
	else if (kare[3] == kare[5] && kare[5] == kare[7])
		return 1;
	else if (kare[1] != '1' && kare[2] != '2' && kare[3] != '3' && kare[4] != '4' && kare[5] != '5' && kare[6] != '6' && kare[7] != '7' && kare[8] != '8' && kare[9] != '9')
		return 0;
	else
		return -1;

}




int main() {
	setlocale(LC_ALL, "Turkish");
	int secim, i, oyuncu = 1;
	char harf;
	do {
		tahta();
		oyuncu = (oyuncu % 2) ? 1 : 2;
		cout << "Oyuncu " << oyuncu << ", bir numara seç: ";
		cin >> secim;
		
		if (oyuncu == 1) {
			harf = 'X';
		}
		
		else {
			harf = 'O';
		}

		if (secim == 1 && kare[1] == '1')
			kare[1] = harf;

		else if(secim == 2 && kare[2] == '2')
			kare[2] = harf;

		else if (secim == 3 && kare[3] == '3')
			kare[3] = harf;

		else if (secim == 4 && kare[4] == '4')
			kare[4] = harf;

		else if (secim == 5 && kare[5] == '5')
			kare[5] = harf;

		else if (secim == 6 && kare[6] == '6')
			kare[6] = harf;

		else if (secim == 7 && kare[7] == '7')
			kare[7] = harf;

		else if (secim == 8 && kare[8] == '8')
			kare[8] = harf;

		else if (secim == 9 && kare[9] == '9')
			kare[9] = harf;
		
		else {
			cout << "Hatalı giris";
			oyuncu--;
			cin.ignore(); //Kullanıcı hatalı giris yaparsa tekrardan giris yapmasını saglıyor
			cin.get();//Kullanıcı hatalı giris yaparsa tekrardan giris yapmasını saglıyor
		}
		i = kontrol();
		oyuncu++;
	}while (i == -1);
	tahta();

	if (i == 1)
		cout << " ==> \aOyuncu" << --oyuncu << " kazandı";
	else
		cout << " ==> \aOyun Berabere Bitti";
	cin.ignore();//Kullanıcı hatalı giris yaparsa tekrardan giris yapmasını saglıyor
	cin.get();//Kullanıcı hatalı giris yaparsa tekrardan giris yapmasını saglıyor
	return 0;
}







