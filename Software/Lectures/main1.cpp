#include "TrackRay/TrackRay.h"

void setup() {
    TrackRay.begin();
}

void loop() {
    // Zapnutí LED na pozici 1
    trrSetLedDigital(1, true);
    // Zamrznutí na 1 s
    delay(1000);
     // Vypnutí LED na pozici 1
    trrSetLedDigital(1, false);
    // Zamrznutí na 1 s
    delay(1000);
}