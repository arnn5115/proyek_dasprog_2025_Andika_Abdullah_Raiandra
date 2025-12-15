# Proyek Dasar Pemrograman 2025

**Oleh: Andika Abdullah Raiandra**

## Deskripsi

Proyek ini adalah program kalkulator multifungsi yang ditulis dalam bahasa C. Program ini menyediakan berbagai fungsi perhitungan untuk kelistrikan dan konversi bilangan.

## Fitur

Program ini menyediakan 4 fungsi utama:

### 1. Kalkulator VIR (Hukum Ohm)
Menghitung nilai Tegangan (V), Arus (I), atau Hambatan (R) berdasarkan Hukum Ohm:
- **Mode 1**: Menghitung Tegangan (V = I × R)
- **Mode 2**: Menghitung Arus (I = V / R)
- **Mode 3**: Menghitung Hambatan (R = V / I)

### 2. Kalkulator Daya
Menghitung nilai Daya (P), Tegangan (V), atau Arus (I):
- **Mode 1**: Menghitung Daya (P = V × I)
- **Mode 2**: Menghitung Tegangan (V = P / I)
- **Mode 3**: Menghitung Arus (I = P / V)

### 3. Kalkulator Resistor
Menghitung hambatan total dari rangkaian resistor:
- **Mode 1**: Rangkaian Seri (R_total = R₁ + R₂ + ... + Rₙ)
- **Mode 2**: Rangkaian Paralel (1/R_total = 1/R₁ + 1/R₂ + ... + 1/Rₙ)

### 4. Konverter Basis Bilangan
Mengkonversi bilangan dari berbagai basis ke desimal:
- **Mode 1**: Biner ke Desimal (maksimal 8-bit)
- **Mode 2**: Oktal ke Desimal (maksimal 8 digit)
- **Mode 3**: Heksadesimal ke Desimal (maksimal 6 digit)

## Cara Kompilasi

### Menggunakan GCC (Linux/Mac/Windows dengan MinGW)
```bash
gcc main.c -o main
```

### Menggunakan Compiler C lainnya
```bash
cc main.c -o main
```

## Cara Menjalankan

### Linux/Mac
```bash
./main
```

### Windows
```bash
main.exe
```

## Contoh Penggunaan

Saat program dijalankan, Anda akan diminta untuk memilih mode perhitungan. Ikuti instruksi yang muncul di layar dan masukkan nilai-nilai yang diminta.

Contoh:
```
Pilih mode perhitungan:
1 - Biner ke Desimal
2 - Octal ke Desimal
3 - Heksadesimal ke Desimal
Pilih mode: 1
Masukkan nilai Biner (max 8-bit): 1101
Hasil: 13.00
```

## Struktur Proyek

```
.
├── main.c          # File sumber utama
├── main            # Executable (Linux/Mac)
├── main.exe        # Executable (Windows)
└── README.md       # Dokumentasi proyek
```

## Persyaratan Sistem

- Compiler C (GCC, Clang, atau MSVC)
- Sistem Operasi: Windows, Linux, atau macOS

## Lisensi

Proyek ini dibuat untuk keperluan akademis dalam mata kuliah Dasar Pemrograman 2025.

## Kontak

**Andika Abdullah Raiandra**
- GitHub: [arnn5115](https://github.com/arnn5115)
