#include <iostream>

using namespace std;
#define GREEN         "\x1b[92m"
#define CYAN          "\x1b[96m"
#define BLUE          "\033[34m"
#define RESET         "\033[0m"

int main (){
	string username = "3", usernameInput;
	string password = "artis", passwordInput;
	
	char ulang;
	char lagi;
	int pilihan;
	int pilihan_artis_penyanyi;
	int pilihan_artis_film;
	int pilihan_artis_seniman;
	int pilihan_artis_olahraga;
	int pilihan_artis_pelawak;
	
	do {
    system ("cls");
	cout << endl;
	cout << GREEN "|=============================|"<< endl;
	cout <<       "|          Form Login         |"<< endl;
	cout <<       "|=============================|"<< endl;
	cout << "Masukkan Username : ";
	cin >> usernameInput;
	if (usernameInput == username){
		cout << "Masukkan Password : ";
		cin >> passwordInput;
		if (passwordInput == password){
			cout << endl;
			cout << "Selamat Datang '" << username << "' di Data Artis Nasional!!";
			cout << endl;
			cout << endl;
			system ("pause");
			break;
		}else {
			cout << endl;
			cout << "Password Yang Anda Masukkan Salah!" << endl;
			cout << "Apakah anda ingin mengulang lagi? (Y/N) : ";
			cin >> ulang;
			
		}
	
	}else{
		cout << endl;
		cout << "Username Yang Anda Masukkan Salah!" << endl;
		cout << "Apakah anda ingin mengulang lagi? (Y/N) : ";
		cin >> ulang;
	}
	}while(ulang == 'Y' || ulang == 'y');
		cout << endl;
		cout << "Terima Kasih Sudah Berkunjung!" << endl;
		cout << endl;
	
	if (passwordInput == password){
	do {
	system ("cls");
	cout << endl;
	cout<<BLUE"|===================================================================================================================|"<<endl;
	cout<<    "|                                            DAFTAR MENU ARTIS NASIONAL                                             |"<<endl;
	cout<<    "|-------------------------------------------------------------------------------------------------------------------|"<<endl;
	cout<<    "|                                                      PILIHAN :                                                    |"<<endl;
	cout<<    "|                                                                                                                   |"<<endl;
	cout<<    "|                                            1. Artis Penyanyi Nasional                                             |"<<endl;
	cout<<    "|                                            2. Artis Film Nasional                                                 |"<<endl;
	cout<<    "|                                            3. Artis Seniman Nasional                                              |"<<endl;
	cout<<    "|                                            4. Artis Olahraga Nasional                                             |"<<endl;
	cout<<    "|                                            5. Artis Pelawak Nasional                                              |"<<endl;
	cout<<    "|===================================================================================================================|"<<endl;
	cout<<endl;
	cout<<"Masukkan Pilihan Anda (1-5) : ";
	cin>>pilihan;
	system ("cls");
	
	switch (pilihan) {
        case 1:
        	cout <<endl;
        	cout << "|===================================================================================================================|"<<endl;
        	cout << "|                                         Daftar Artis Penyanyi Nasional' :                                         |"<<endl;
        	cout << "|-------------------------------------------------------------------------------------------------------------------|"<<endl;
        	cout << "|                                                   PILIHAN :                                                       |"<<endl;
        	cout << "|                                                                                                                   |"<<endl;
        	cout << "|                                           1. Data Dewi Murya Agung                                                |"<<endl;
        	cout << "|                                           2. Data Rian Ekky Pradipta                                              |"<<endl;
        	cout << "|                                           3. Data Daniel Baskara Putra                                            |"<<endl;
        	cout << "|                                           4. Data Siti Badriah                                                    |"<<endl;
        	cout << "|                                           5. Data Bobby Kool                                                      |"<<endl;
        	cout << "|===================================================================================================================|"<<endl;
        	cout <<endl;
        	cout << "Masukkan Pilihan Anda (1-5) : ";
        	cin >>pilihan_artis_penyanyi;
			system ("cls");
        	
        	switch (pilihan_artis_penyanyi) {
        	    case 1:
        	    cout <<endl;
        	    cout << CYAN <<"Biodata Dewi Murya Agung :"<<endl;
        	    cout << "Nama Lengkap       : Dewi Murya Agung"<<endl;
        	    cout << "Nama Panggung      : Dewi Perssik"<<endl;
        	    cout << "Jenis Kelamin      : Perempuan"<<endl;
        	    cout << "Tempat Lahir       : Jember"<<endl;
        	    cout << "Tanggal Lahir      : 16 Desember 1985"<<endl;
        	    cout << "Usia               : 37 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Penyanyi Dangdut, Pemeran, Pebisnis, Dan Presenter"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
					
				}
        	    break;
        	    
				case 2:
        	    cout <<endl;
        	    cout << "Biodata Rian Ekky Pradipta :"<<endl;
        	    cout << "Nama Lengkap       : Rian Ekky Pradipta"<<endl;
        	    cout << "Nama Panggung      : Rian D'MASIV"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Yogyakarta"<<endl;
        	    cout << "Tanggal Lahir      : 17 November 1986"<<endl;
        	    cout << "Usia               : 36 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Penyanyi Dan Youtuber"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 3:
        	    cout <<endl;
        	    cout << "Biodata Daniel Baskara Putra :"<<endl;
        	    cout << "Nama Lengkap       : Daniel Baskara Putra"<<endl;
        	    cout << "Nama Panggung      : Hindia"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Jakarta"<<endl;
        	    cout << "Tanggal Lahir      : 22 February 1994"<<endl;
        	    cout << "Usia               : 29 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : kristen"<<endl;
        	    cout << "Profesi            : Penyanyi, Penulis Lagu, Produser Rekaman, Vokalis Grup Msik"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 4:
        	    cout <<endl;
        	    cout << "Biodata Siti Badriah :"<<endl;
        	    cout << "Nama Lengkap       : Siti Badriah"<<endl;
        	    cout << "Nama Panggung      : Sibad"<<endl;
        	    cout << "Jenis Kelamin      : Perempuan"<<endl;
        	    cout << "Tempat Lahir       : "<<endl;
        	    cout << "Tanggal Lahir      : 11 November 1991"<<endl;
        	    cout << "Usia               : 31 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Penyanyi Dan Pemeran"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 5:
        	    cout <<endl;
        	    cout << "Biodata Bobby Kool :"<<endl;
        	    cout << "Nama Lengkap       : I Made Putra Budi Sartika"<<endl;
        	    cout << "Nama Panggung      : Bobby Bikul"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Denpasar"<<endl;
        	    cout << "Tanggal Lahir      : 8 September 1977"<<endl;
        	    cout << "Usia               : 46 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Hindu"<<endl;
        	    cout << "Profesi            : Pemain Gitar Dan Penyanyi"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    default:
        	    cout<<endl;
        	    cout<<"Pilihan Tidak Valid"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	}
            break;
            
        case 2:
        	cout <<endl;
        	cout << BLUE <<"|===================================================================================================================|"<<endl;
        	cout <<        "|                                           Daftar Artis Film Nasional' :                                           |"<<endl;
        	cout <<        "|-------------------------------------------------------------------------------------------------------------------|"<<endl;
        	cout <<        "|                                                   PILIHAN :                                                       |"<<endl;
            cout <<        "|                                                                                                                   |"<<endl;
        	cout <<        "|                                             1. Data Reza Rahadian                                                 |"<<endl;
        	cout <<        "|                                             2. Data Rukman Rosadi                                                 |"<<endl;
        	cout <<        "|                                             3. Data Jefri Nichol                                                  |"<<endl;
        	cout <<        "|                                             4. Data Iqbal Ramadhan                                                |"<<endl;
        	cout <<        "|                                             5. Data Boy William                                                   |"<<endl;
         	cout <<        "|                                             6. Data Joe Taslim                                                    |"<<endl;
        	cout <<        "|===================================================================================================================|"<<endl;
        	cout <<endl;
        	cout << "Masukkan Pilihan Anda (1-6) : ";
        	cin >>pilihan_artis_film;
        	system ("cls");
            
            switch (pilihan_artis_film) {
                case 1:
        	    cout <<endl;
        	    cout << CYAN << "Biodata Reza Rahadian :"<<endl;
        	    cout << "Nama Lengkap       : Reza Rahadian Matulessy"<<endl;
        	    cout << "Nama Panggung      : Reza Rahadian"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Bogor"<<endl;
        	    cout << "Tanggal Lahir      : 5 maret 1987"<<endl;
        	    cout << "Usia               : 36 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Aktor, Model Dan Sutradara"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 2:
        	    cout <<endl;
        	    cout << "Biodata Rukman Rosadi :"<<endl;
        	    cout << "Nama Lengkap       : Rukman Rosadi"<<endl;
        	    cout << "Nama Panggung      : Pak Teguh"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Lampung"<<endl;
        	    cout << "Tanggal Lahir      : 15 Maret 1972"<<endl;
        	    cout << "Usia               : 51 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Pemeran, Pelatih Akting Dan Sutradara"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 3:
        	    cout <<endl;
        	    cout << "Biodata Jefri Nichol :"<<endl;
        	    cout << "Nama Lengkap       : Jefri Nichol"<<endl;
        	    cout << "Nama Panggung      : Jefri Nichol"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Jakarta"<<endl;
        	    cout << "Tanggal Lahir      : 15 January 1999"<<endl;
        	    cout << "Usia               : 24 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Aktor Dan Model"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 4:
        	    cout <<endl;
        	    cout << "Biodata Iqbal Ramadhan :"<<endl;
        	    cout << "Nama Lengkap       : Iqbal Dhiafakhri Ramadhan"<<endl;
        	    cout << "Nama Panggung      : Iqbal CJR"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Surabaya"<<endl;
        	    cout << "Tanggal Lahir      : 28 Desember 1999"<<endl;
        	    cout << "Usia               : 24 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Aktor, Singer, Youtuber Dan Bassist"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 5:
        	    cout <<endl;
        	    cout << "Biodata Boy William :"<<endl;
        	    cout << "Nama Lengkap       : William Hartanto"<<endl;
        	    cout << "Nama Panggung      : Boy William"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Jakarta"<<endl;
        	    cout << "Tanggal Lahir      : 17 Oktober 1991"<<endl;
        	    cout << "Usia               : 31 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Kristen"<<endl;
        	    cout << "Profesi            : Aktor, Presenter Dan Youtuber"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 6:
        	    cout <<endl;
        	    cout << "Biodata Johannes Taslim :"<<endl;
        	    cout << "Nama Lengkap       : Johannes Taslim"<<endl;
        	    cout << "Nama Panggung      : Joe Taslim"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Palembang"<<endl;
        	    cout << "Tanggal Lahir      : 23 Juni 1981"<<endl;
        	    cout << "Usia               : 42 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Kristen"<<endl;
        	    cout << "Profesi            : Aktor dan Model"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;

        	    
        	    default:
        	    cout<<endl;
        	    cout<<"Pilihan Tidak Valid"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
            }
            break;
            
        case 3:
            cout <<endl;
        	cout << BLUE << "|===================================================================================================================|"<<endl;
        	cout <<         "|                                           Daftar Artis Seniman Nasional' :                                        |"<<endl;
        	cout <<         "|-------------------------------------------------------------------------------------------------------------------|"<<endl;
        	cout <<         "|                                                   PILIHAN :                                                       |"<<endl;
            cout <<         "|                                                                                                                   |"<<endl;
        	cout <<         "|                                             1. Data Raden Saleh Syarif Bustawan                                   |"<<endl;
        	cout <<         "|                                             2. Data Abdullah                                                      |"<<endl;
        	cout <<         "|                                             3. Data Sudjono Abdullah                                              |"<<endl;
        	cout <<         "|                                             4. Data Basuki Abdullah                                               |"<<endl;
        	cout <<         "|                                             5. Data Affandi                                                       |"<<endl;
        	cout <<         "|===================================================================================================================|"<<endl;
        	cout <<endl;
        	cout << "Masukkan Pilihan Anda (1-5) : ";
        	cin >>pilihan_artis_seniman;
        	system ("cls");
        	
        	switch (pilihan_artis_seniman) {
        	    case 1:
        	    cout <<endl;
        	    cout << CYAN << "Biodata Raden Saleh Syarif Bustawan :"<<endl;
        	    cout << "Nama Lengkap       : Raden Syarif Bustawan"<<endl;
        	    cout << "Nama Panggung      : Raden Saleh"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Semarang"<<endl;
        	    cout << "Tanggal Lahir      : 23 February 1880"<<endl;
        	    cout << "Usia               : Wafat"<<endl;
        	    cout << "Agama Yang Di Anut : Kristen"<<endl;
        	    cout << "Profesi            : Pelukis"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 2:
        	    cout <<endl;
        	    cout << "Biodata Abdullah :"<<endl;
        	    cout << "Nama Lengkap       : Abdullah Suriosubroto"<<endl;
        	    cout << "Nama Panggung      : Abdullah"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Surakarta"<<endl;
        	    cout << "Tanggal Lahir      : 25 January 1915"<<endl;
        	    cout << "Usia               : Wafat"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Pelukis"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 3:
        	    cout <<endl;
        	    cout << "Biodata Sutjono Abdullah :"<<endl;
        	    cout << "Nama Lengkap       : Sutjono Abdullah"<<endl;
        	    cout << "Nama Panggung      : Sutjono Abdullah"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Surakarta"<<endl;
        	    cout << "Tanggal Lahir      : -"<<endl;
        	    cout << "Usia               : Wafat"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Pelukis Dan Seniman"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 4:
        	    cout <<endl;
        	    cout << "Biodata Basuki Abdullah :"<<endl;
        	    cout << "Nama Lengkap       : Frasiskus Xaverius Basuki Abdullah"<<endl;
        	    cout << "Nama Panggung      : Basuki Abdullah"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Surakarta"<<endl;
        	    cout << "Tanggal Lahir      : 27 January 1915"<<endl;
        	    cout << "Usia               : Wafat"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Pelukis"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 5:
        	    cout <<endl;
        	    cout << "Biodata Affandi :"<<endl;
        	    cout << "Nama Lengkap       : Affandi Koesoema"<<endl;
        	    cout << "Nama Panggung      : Affandi"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Cirebon"<<endl;
        	    cout << "Tanggal Lahir      : 18 Mei 1907"<<endl;
        	    cout << "Usia               : Wafat"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Pelukis Dan Maestro"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    default:
        	    cout<<endl;
        	    cout<<"Pilihan Tidak Valid"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	}
        	break;
        
        case 4:
        	cout <<endl;
        	cout << BLUE << "|===================================================================================================================|"<<endl;
        	cout <<         "|                                          Daftar Artis Olahraga Nasional' :                                        |"<<endl;
        	cout <<         "|-------------------------------------------------------------------------------------------------------------------|"<<endl;
        	cout <<         "|                                                   PILIHAN :                                                       |"<<endl;
            cout <<         "|                                                                                                                   |"<<endl;
        	cout <<         "|                                             1. Data Valentino Jebret                                              |"<<endl;
        	cout <<         "|                                             2. Data Cinta Brian                                                   |"<<endl;
        	cout <<         "|                                             3. Data Callista Arum                                                 |"<<endl;
        	cout <<         "|                                             4. Data Dinda Hauw                                                    |"<<endl;
        	cout <<         "|                                             5. Data Ibnu Jamil                                                    |"<<endl;
        	cout <<         "|                                             6. Data Anthony Sinisuka Ginting                                      |"<<endl;
        	cout <<         "|===================================================================================================================|"<<endl;
        	cout <<endl;
        	cout << "Masukkan Pilihan Anda (1-6) : ";
        	cin >>pilihan_artis_olahraga;
        	system ("cls");
        	
        	switch (pilihan_artis_olahraga) {
        	    case 1:
        	    cout <<endl;
        	    cout << CYAN <<"Biodata Valentino Jebret :"<<endl;
        	    cout << "Nama Lengkap       : Valentino Simanjuntak"<<endl;
        	    cout << "Nama Panggung      : Bung Jebret"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Jakarta"<<endl;
        	    cout << "Tanggal Lahir      : 11 Juli 1982"<<endl;
        	    cout << "Usia               : 41 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Kristen"<<endl;
        	    cout << "Profesi            : Presenter Dan Komentator Sepak Bola"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 2:
        	    cout <<endl;
        	    cout << "Biodata Cinta Brian :"<<endl;
        	    cout << "Nama Lengkap       : Cinta Brian Glenn Roberts"<<endl;
        	    cout << "Nama Panggung      : Cinta Brian"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Denpasar"<<endl;
        	    cout << "Tanggal Lahir      : 27 Juli 1998"<<endl;
        	    cout << "Usia               : 25 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Kristen"<<endl;
        	    cout << "Profesi            : Aktor Dan Model Dalam Bidang Olahraga"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 3:
        	    cout <<endl;
        	    cout << "Biodata Callista Arum :"<<endl;
        	    cout << "Nama Lengkap       : Callista Arum Dewi Rumengan"<<endl;
        	    cout << "Nama Panggung      : Callista Arum"<<endl;
        	    cout << "Jenis Kelamin      : Perempuan"<<endl;
        	    cout << "Tempat Lahir       : Jakarta"<<endl;
        	    cout << "Tanggal Lahir      : 2 April 2004"<<endl;
        	    cout << "Usia               : 19 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Kristen"<<endl;
        	    cout << "Profesi            : Model Dalam Bidang Olahraga"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 4:
        	    cout <<endl;
        	    cout << "Biodata Dinda Hauw :"<<endl;
        	    cout << "Nama Lengkap       : Nyimas Khodijah Nasthiti Adinda"<<endl;
        	    cout << "Nama Panggung      : Dinda Hauw"<<endl;
        	    cout << "Jenis Kelamin      : Perempuan"<<endl;
        	    cout << "Tempat Lahir       : Palembang"<<endl;
        	    cout << "Tanggal Lahir      : 14 November 1996"<<endl;
        	    cout << "Usia               : 27 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Penyanyi Dalam Bidang Olahraga"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 5:
        	    cout <<endl;
        	    cout << "Biodata Ibnu Jamil :"<<endl;
        	    cout << "Nama Lengkap       : Ibnu Jamil"<<endl;
        	    cout << "Nama Panggung      : Ibnu Jamil"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Jakarta"<<endl;
        	    cout << "Tanggal Lahir      : 30 April 1981"<<endl;
        	    cout << "Usia               : 42 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Presenter Dalam Bidang Olahraga"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;

        	    case 6:
        	    cout <<endl;
        	    cout << "Biodata Anthony Sinisuka Ginting :"<<endl;
        	    cout << "Nama Lengkap       : Anthony Sinisuka Ginting"<<endl;
        	    cout << "Nama Panggung      : Anthony Ginting"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Cimahi"<<endl;
        	    cout << "Tanggal Lahir      : 20 October 1996"<<endl;
        	    cout << "Usia               : 27 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Kristen"<<endl;
        	    cout << "Profesi            : Atlet Badminthon Putra"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    default:
        	    cout<<endl;
        	    cout<<"Pilihan Tidak Valid"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	}
        	break;
        	
        case 5:
        	cout <<endl;
        	cout << BLUE << "|===================================================================================================================|"<<endl;
        	cout <<         "|                                          Daftar Artis Pelawak Nasional :                                          |"<<endl;
        	cout <<         "|-------------------------------------------------------------------------------------------------------------------|"<<endl;
        	cout <<         "|                                                   PILIHAN :                                                       |"<<endl;
            cout <<         "|                                                                                                                   |"<<endl;
        	cout <<         "|                                             1. Data Sule                                                          |"<<endl;
        	cout <<         "|                                             2. Data Andre Taulany                                                 |"<<endl;
        	cout <<         "|                                             3. Data Dani Aditya                                                   |"<<endl;
        	cout <<         "|                                             4. Data Praz Teguh                                                    |"<<endl;
        	cout <<         "|                                             5. Data Raditya Dika                                                  |"<<endl;
        	cout <<         "|===================================================================================================================|"<<endl;
        	cout <<endl;
        	cout << "Masukkan Pilihan Anda (1-5) : ";
        	cin >>pilihan_artis_pelawak;
        	system ("cls");
        	
        	switch (pilihan_artis_pelawak) {
        	    case 1:
        	    cout <<endl;
        	    cout << CYAN << "Biodata Sule :"<<endl;
        	    cout << "Nama Lengkap       : Entis Sutisme"<<endl;
        	    cout << "Nama Panggung      : Sule"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Cimahi"<<endl;
        	    cout << "Tanggal Lahir      : 15 November 1976"<<endl;
        	    cout << "Usia               : 47 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Kristen"<<endl;
        	    cout << "Profesi            : Pelawak, Pembawa Acara, Aktor, Seniman Dan Youtuber"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 2:
        	    cout <<endl;
        	    cout << "Biodata Andre Taulany :"<<endl;
        	    cout << "Nama Lengkap       : Andreas Taulany Haumahu"<<endl;
        	    cout << "Nama Panggung      : Andre Taulany"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Jakarta"<<endl;
        	    cout << "Tanggal Lahir      : 17 September 1974"<<endl;
        	    cout << "Usia               : 49 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Seorang Komedian, Penyanyi, Penulis Lagu, Presenter Dan Aktor"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 3:
        	    cout <<endl;
        	    cout << "Biodata Dani Aditya :"<<endl;
        	    cout << "Nama Lengkap       : Aditya Dani Darmawan"<<endl;
        	    cout << "Nama Panggung      : Dani Aditya"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Malang"<<endl;
        	    cout << "Tanggal Lahir      : 17 November 1991"<<endl;
        	    cout << "Usia               : 31 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Pelawak Tunggal, Rapper Dan Aktor"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    
        	    case 4:
        	    cout <<endl;
        	    cout << "Biodata Praz Teguh :"<<endl;
        	    cout << "Nama Lengkap       : Teguh Prasetyo"<<endl;
        	    cout << "Nama Panggung      : Praz Teguh"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Padang"<<endl;
        	    cout << "Tanggal Lahir      : 10 Juni 1991"<<endl;
        	    cout << "Usia               : 32 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Pelawak Tunggal Dan Aktor"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	    

        	    case 5:
          	    cout <<endl;
        	    cout << "Biodata Raditya Dika :"<<endl;
        	    cout << "Nama Lengkap       : Raditya Dika Angga Putra Moerwani"<<endl;
        	    cout << "Nama Panggung      : Raditya Dika"<<endl;
        	    cout << "Jenis Kelamin      : Laki-laki"<<endl;
        	    cout << "Tempat Lahir       : Jakarta"<<endl;
        	    cout << "Tanggal Lahir      : 28 Desember 1984"<<endl;
        	    cout << "Usia               : 38 Tahun"<<endl;
        	    cout << "Agama Yang Di Anut : Islam"<<endl;
        	    cout << "Profesi            : Seorang Komedian, Penulis, Sutradara, Produser, Pebisnis, Youtuber Dan Aktor"<<endl;
        	    cout << endl;
        	    cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	    cin >> lagi;
        	    if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
        	    break;
        	}
        	break;
        	
        default:
        	cout<<endl;
            cout<<"Pilihan Tidak Valid"<<endl;
            cout << endl;
        	cout << "Apakah Anda Ingin Mengulang Lagi (Y/N) : ";
        	cin >> lagi;
        	if (lagi != 'y' || lagi != 'Y'){
        	    	cout << endl;
        	    	cout << "Terima Kasih Sudah Berkunjung!" <<endl;
        	    	cout << endl;
				}
    }
    
    		}	while (lagi == 'y' || lagi == 'Y');
    
}	
	return 0;
}