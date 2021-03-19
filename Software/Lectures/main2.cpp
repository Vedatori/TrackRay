// Lekce 2 - přečteme stav tlačítka, ukážeme si proměnnou 
// a větvící konstrukci 'if'
#include "TrackRay/TrackRay.h"

void setup() {
    TrackRay.begin();
}

void loop() {
    bool tlacitko = trrReadButton();

    // Rozsvícení LED1 pomocí konstrukce 'if'
    if(tlacitko) {
        trrSetLedDigital(D1, true);
    }
    else {
        trrSetLedDigital(D1, false);
    }

    //______________________________________________
    // Rozsvícení LED5 úsporněji bez konstrukce 'if'
    trrSetLedDigital(D5, tlacitko);

    delay(100);
}