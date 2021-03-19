// Lekce 4 - náš TrackRay začne komunikovat s počítačem
#include "TrackRay/TrackRay.h"

void setup() {
    TrackRay.begin();
    printf("Hello World!\n");

    int cele_cislo = 3;
    printf("%d\n", cele_cislo);

    float desetinne_cislo = 3.14;
    printf("%f\n", desetinne_cislo);

    char slovo[] = "ahoj";
    printf("%s\n", slovo);
}

void loop() {
    printf("%d %d\n", millis(), trrReadButton());

    delay(100);
}