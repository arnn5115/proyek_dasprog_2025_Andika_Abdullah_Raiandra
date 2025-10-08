#include <stdio.h>

double VIR_Calc(int mode);
double powerCalc(int mode);

int main(){
    /* code */
    printf("Hello, World!\n");
    return 0;
}

double VIR_Calc(int mode){
    double v, i, r;
    if (mode = 0) {
        scanf("%f", &i);
        scanf("%f", &r);
        v = i * r;
        return v;
    } else if (mode = 1) {
        scanf("%f", &v);
        scanf("%f", &r);
        i = v / r;
        return i;
    } else if (mode = 2) {
        scanf("%f", &v);
        scanf("%f", &i);
        r = v / i;
        return r;
    } else {
        printf("Error: Mode tidak ditemukan\n");
        return -1;
    }
}

double powerCalc(int mode){
    double p, v, i;
    if (mode = 0) {
        scanf("%f", &v);
        scanf("%f", &i);
        p = v * i;
        return p;
    } else if (mode = 1) {
        scanf("%f", &p);
        scanf("%f", &i);
        v = p / i;
        return v;
    } else if (mode = 2) {
        scanf("%f", &p);
        scanf("%f", &v);
        i = p / v;
        return i;
    } else {
        printf("Error: Mode tidak ditemukan\n");
        return -1;
    }
}