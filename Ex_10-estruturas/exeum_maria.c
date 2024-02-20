#include <stdio.h>

struct Hor {
    int h;
    int m;
    int s;
};
struct Data {
    int dia;
    int mes;
    int ano;
};
struct Compr {
    struct Data DataCompr;
    struct Hor HorCompr;
    char textoCompr[100]; 
};
int main() {
    struct Hor horEx = {12, 30, 10};
    struct Data dataEx = {26, 11, 2023};
    struct Compr comprEx = {{27, 11, 2023}, {18, 30, 20}, "Reuniao de trabalho"};
printf("Horario: %d:%d:%d\n", horEx.h, horEx.m, horEx.s);
printf("Data: %d/%d/%d\n", dataEx.dia, dataEx.mes, dataEx.ano);
printf("\n---Compromisso---\n");
printf("Data: %d/%d/%d\n", comprEx.DataCompr.dia, comprEx.DataCompr.mes, comprEx.DataCompr.ano);
printf("Horario: %d:%d:%d\n", comprEx.HorCompr.h, comprEx.HorCompr.m, comprEx.HorCompr.s);
printf("Texto: %s\n", comprEx.textoCompr);
    return 0;
}