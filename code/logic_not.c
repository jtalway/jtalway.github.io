#include <stdio.h>
int main(void) {
int height = 0;
int nbLeaflets = 0;
scanf("%d %d", &height, &nbLeaflets);
int tinuviel = height <= 5 && nbLeaflets >= 8;
int calaelen = height >= 10 && nbLeaflets >= 10;
int falarion = height <= 8 && nbLeaflets <= 5;
int dorthonion = height >= 12 && nbLeaflets <= 7;
if (tinuviel) {
	printf("Tinuviel");
}
else if (calaelen) {
	printf("Calaelen");
}
else if (falarion) {
	printf("Falarion");
}
else if (dorthonion) {
	printf("Dorthonion");
}
else {
	printf("Uncertain");
}
return 0;
}
