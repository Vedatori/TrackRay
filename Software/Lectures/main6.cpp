// Lekce 6 - Naučíme se zjišťovat prostorovou orientaci TrackRay 
// z gyroskopu a akcelerometru. Podle naklonění TrackRay budeme 
// ovládat motory tak, aby se nepřevrátil.
#include "TrackRay/TrackRay.h"

void setup() {
    TrackRay.begin();
}

void loop() {
    printf("%f %f %f\n", trrGyroYaw(), trrGyroPitch(), trrGyroRoll());
    
    if(trrGyroPitch() > 20) {
        trrMotorsSetSpeed(-50, -50);
    }
    else if(trrGyroPitch() < -20) {
        trrMotorsSetSpeed(50, 50);
    }
    else {
        trrMotorsSetSpeed(0, 0);
    }

    delay(100);
}