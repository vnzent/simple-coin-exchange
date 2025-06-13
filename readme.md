AS# Program Penukaran Uang dengan Algoritma Greedy 

Program ini menyelesaikan masalah penukaran uang agar jumlah koin yang digunakan seminimal mungkin. Pengguna dapat memasukkan daftar pecahan koin dan jumlah uang yang ingin ditukar. Program ini akan menentukan koin yang akan ditukarkan dengan jumlah uang yang diinputkan dari koin yang paling besar ke kecil menggunakan algoritma greedy yang dimana algoritma ini mengambil keputusan yang terbaik pada setiap pengambilan keputusan dengan harapan mendapat hasil yang maksimal diakhri ( tapi belum tentu selalu optimal )

---

## Fitur

- Input jumlah jenis koin dari pengguna
- Input nilai tiap jenis koin (dalam Mata Uang apapun)
- Input jumlah uang yang akan ditukar ( sebaiknya koin yang digunakan sama dengan mata uang untuk setiap jenis koin )
- Menggunakan algoritma greedy untuk efisiensi
- Output daftar koin yang digunakan dan total jumlah koin

---

## 🛠️ Cara Compile dan Jalankan

### 1. Simpan kode sebagai `penukaran_koin.cpp` ( atau sebebasnya )

### 2. Compile melalui terminal:

```bash
g++ penukaran_koin.cpp -o penukaran_koin
```

### 3. Jalankan file hasil compile

```bash
./penukaran_koin
```

## Contoh Input

Masukkan jumlah jenis koin: 5
Masukkan nilai koin ke-1: 1000
Masukkan nilai koin ke-2: 500
Masukkan nilai koin ke-3: 200
Masukkan nilai koin ke-4: 100
Masukkan nilai koin ke-4: 50
Masukkan jumlah uang yang ingin ditukar: 7875

## Contoh Output
Hasil penukaran untuk uang 7875 adalah:
1. Koin 1000 x 7
2. Koin 500 x 1
3. Koin 200 x 1
4. Koin 100 x 1
5. Koin 50 x 1
Tidak dapat menukarkan sisa uang 25 dengan koin yang tersedia.


