#include "TrackRay/TrackRay.h"

unsigned long predchoziHodnotaMillis = 0;
const unsigned long interval = 1000;
bool stavLed = false;


void ledRutina() {
    unsigned long aktualniHodnotaMillis = millis();

    if (aktualniHodnotaMillis - predchoziHodnotaMillis >= interval) {
        // uložit hodnotu přepnutí z false na true
        predchoziHodnotaMillis = aktualniHodnotaMillis;

        // prohodit stav LED
        stavLed = !stavLed;
        // alternativní prohození stavu LED
        // if (stavLed == false) {
        //     stavLed = true;
        // } else {
        //     stavLed = false;
        // }
        
        // nastavit stav LEDek hodnotou proměnné stav LED
        trrSetLedAllDigital(stavLed);
        
        // for (int i = 1; i < 26; i++)
        //     trrSetLedDigital(i, stavLed);        
    }
}

void setup() {
    TrackRay.begin();
    trrSetLedDigital(D1, true);
}

void loop() {
    unsigned long aktualniHodnotaMillis = millis();

    if (aktualniHodnotaMillis - predchoziHodnotaMillis >= interval) {
        // uložit hodnotu přepnutí z false na true
        predchoziHodnotaMillis = aktualniHodnotaMillis;

        // prohodit stav LED
        stavLed = !stavLed;
        // if (stavLed == false) {
        //     stavLed = true;
        // } else {
        //     stavLed = false;
        // }

        // nastavit stav LEDky hodnotou proměnné stav LED
        trrSetLedDigital(D1, stavLed);
    }

    // Alternativní realizace funkcí
    // ledRutina();
}
