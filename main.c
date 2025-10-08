#include <stdio.h>

double VIR_Calc();
double powerCalc();
double resistorCalc();
double baseConverter();

int main(){
    
    double hasil = resistorCalc();
    printf("Hasil: %.2lf\n", hasil);
    
    return 0;
}

double VIR_Calc(){
    int mode;
    printf("Pilih mode perhitungan:\n");
    printf("1 - Menghitung Tegangan\n");
    printf("2 - Menghitung Arus\n");
    printf("3 - Menghitung Hambatan\n");
    printf("Pilih mode: ");
    scanf("%d", &mode);
    double v, i, r;
    if (mode == 1) {
        printf("Masukkan nilai Arus (I): ");
        scanf("%lf", &i);
        printf("Masukkan nilai Hambatan (R): ");
        scanf("%lf", &r);
        v = i * r;
        return v;
    } else if (mode == 2) {
        printf("Masukkan nilai Tegangan (V): ");
        scanf("%lf", &v);
        printf("Masukkan nilai Hambatan (R): ");
        scanf("%lf", &r);
        i = v / r;
        return i;
    } else if (mode == 3) {
        printf("Masukkan nilai Tegangan (V): ");
        scanf("%lf", &v);
        printf("Masukkan nilai Arus (I): ");
        scanf("%lf", &i);
        r = v / i;
        return r;
    } else {
        printf("Error: Mode tidak ditemukan\n");
        return -1;
    }
}

double powerCalc(){
    int mode;
    printf("Pilih mode perhitungan:\n");
    printf("1 - Menghitung Daya\n");
    printf("2 - Menghitung Tegangan\n");
    printf("3 - Menghitung Arus\n");
    printf("Pilih mode: ");
    scanf("%d", &mode);
    double p, v, i;
    if (mode == 1) {
        printf("Masukkan nilai Tegangan (V): ");
        scanf("%lf", &v);
        printf("Masukkan nilai Arus (I): ");
        scanf("%lf", &i);
        p = v * i;
        return p;
    } else if (mode == 2) {
        printf("Masukkan nilai Daya (P): ");
        scanf("%lf", &p);
        printf("Masukkan nilai Arus (I): ");
        scanf("%lf", &i);
        v = p / i;
        return v;
    } else if (mode == 3) {
        printf("Masukkan nilai Daya (P): ");
        scanf("%lf", &p);
        printf("Masukkan nilai Tegangan (V): ");
        scanf("%lf", &v);
        i = p / v;
        return i;
    } else {
        printf("Error: Mode tidak ditemukan\n");
        return -1;
    }
}

double resistorCalc(){
    int mode;
    printf("Pilih mode perhitungan:\n");
    printf("1 - Rangkaian Seri\n");
    printf("2 - Rangkaian Parallel\n");
    printf("Pilih mode: ");
    scanf("%d", &mode);
    int n;
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);
    double res[n];
    double hasil = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Masukkan nilai resistor ke-%d :", i+1);
        scanf("%lf", &res[i]);
    }
    if (mode == 1) {
        for (int i = 0; i < n; i++)
        {
            hasil += res[i];
        } 
    } else if (mode == 2) {
        double hasil_kebalikan = 0;
        for (int i = 0; i < n; i++)
        {
            hasil_kebalikan += 1/res[i];
        } 
        hasil = 1/hasil_kebalikan;
    } else {
        printf("Error: Mode tidak ditemukan\n");
        return -1;
    }
    
    return hasil;
}