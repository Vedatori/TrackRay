// Lekce 3 - rozhýbeme TrackRay, roztočíme motory, ukážeme číselnou proměnnou 
// a budeme regulovat rychlost motorů
#include "TrackRay/TrackRay.h"

int rychlost = 0;

void setup() {
    TrackRay.begin();
}

void loop() {
    bool tlacitko = trrReadButton();

    // Roztočení levého motoru pomocí konstrukce 'if'
    if(tlacitko) {
        trrMotorsSetSpeedLeft(50);
    }
    else {
        trrMotorsSetSpeedLeft(0);
    }

    //____________________________________________________
    // Postupné roztočení pravého motoru mačkáním tlačítka
    if(tlacitko) {
        rychlost = rychlost + 5;
    }
    else {
        rychlost = 0;
    }
    if(rychlost > 100) {
        rychlost = 100;
    }
    trrMotorsSetSpeedRight(rychlost);

    delay(100);
}