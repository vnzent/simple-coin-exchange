#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cout << "Masukkan jumlah jenis koin: ";
  cin >> n;

  vector<int> coins(n);
  for (int i = 0; i < n; i++) {
    cout << "Masukkan nilai koin ke-" << i + 1 << ": ";
    cin >> coins[i];
  }

  sort(coins.begin(), coins.end(), greater<int>());

  int amount;
  cout << "Masukkan jumlah uang yang ingin ditukarkan kedalam bentu koin : ";
  cin >> amount;

  vector<int> count(n, 0); // Jumlah koin dari setiap jenis koin
  int sisa = amount;

  for (int i = 0; i < n; i++) {
    while (sisa >= coins[i]) {
      sisa -= coins[i];
      count[i]++;
    }
  } 

  // Output
  cout << "\nHasil penukaran untuk uang " << amount << " adalah:\n";
  for (int i = 0; i < n; i++) {
    if (count[i] > 0) {
      cout << i + 1 << ". Koin " << coins[i] << " x " << count[i] << "\n";
    }
  }

  if (amount > 0) {
    cout << "Tidak dapat menukarkan sisa uang " << sisa << " dengan koin yang tersedia.\n";
  }

  return 0;
}