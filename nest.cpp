#include <iostream>

using namespace std;

int main () {
  int N, i, k, j;

  
  struct data{
      string nama;
      int menggambar;
      int mewarnai;
  };

  cout << "=====================================================" << endl;
  cout << "                   PEMILIHAN LOMBA" << endl;
  cout << "=====================================================" << endl;
  cout << endl;
  cout << "Masukkan jumlah siswa: ";
  cin >> N;
  cout << endl;
  int nilaiMenggambar[N];
  data siswa[N];
  
  
    for (i = 0; i < N; i++) {
      cout << "Nama siswa ke-" << i + 1 << " : ";
      cin >> siswa[i].nama;
      cout << "Nilai menggambar: ";
      cin >> siswa[i].menggambar;
      cout << "Nilai mewarnai: ";
      cin >> siswa[i].mewarnai;
      cout << endl;
  }

    for(i = 0;i < sizeof(nilaiMenggambar);i++){
      j = i + 2;
      if(j < sizeof(nilaiMenggambar)){
       for(k = i;k < j;k++){
          nilaiMenggambar[i] += siswa[k].menggambar;
        }
        j = 0;
      }else{
         
      }
      cout << "Nilai menggambar ke-" << i << " : " << nilaiMenggambar[i] << " [ " << siswa[k].menggambar << siswa[k+1].menggambar << siswa[k+2].menggambar << " ] " << endl;
    }

return 0; 
}