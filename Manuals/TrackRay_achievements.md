Toto je seznam úkolů, které tě v kombinaci s programovacím návodem naučí programovat TrackrRay.

# Obsah
* [Úkol 1 - Blikáme](#ukol1)
* [Úkol 2 - Záblesky LED](#ukol2)
* [Úkol 3 - Železniční přejezd](#ukol3)
* [Úkol 4 - Manuální blikání LED](#ukol4)
* [Úkol 5 - Stabilní stav LED](#ukol5)
* [Úkol 6 - Jízda vpřed/vzad](#ukol6)
* [Úkol 7 - Rychlost jízdy](#ukol7)
* [Úkol 8 - LED vlna](#ukol8)
* [Úkol 9 - KITT](#ukol9)
* [Úkol 10 - Ochrana náklonu](#ukol10)
* [Úkol 11 - Otočení o 90°](#ukol11)
* [Úkol 12 - Ukazatel náklonu](#ukol12)
___
## <a name = ukol1>Úkol 1 - Blikání LED</a>

### Zadání
Napiš program, který bude bude rychle blikat LED číslo 5 (v pravo nahoře na panelu).

### Parametry
Délka svícení je 200 ms. Doba zhasnutí je 200 ms. 

### Potřebné znalosti
Lekce 1

___
## <a name = ukol2>Úkol 2 - Záblesky LED</a>

### Zadání
Napiš program, který každou vteřinu krátce zableskne LED číslo 1.

### Parametry
Délka svícení je 50 ms. LED se zableskne každou vteřinu.

### Potřebné znalosti
Lekce 1

___
## <a name = ukol3>Úkol 3 - Železniční přejezd</a>

### Zadání
Napiš program, který bude blikat jako železniční přejezd.

### Parametry
Při blikání se střídají alespoň 2 různé LED. Délka svícení je volitelná.

### Potřebné znalosti
Lekce 1

___
## <a name = ukol4>Úkol 4 - Manuální blikání LED</a>

### Zadání
Napiš program, který bliká LED číslo 1 pouze při stisknutém tlačítku *SW1*.

### Parametry
Délka svícení je 200 ms. Doba zhasnutí je 200 ms. 

### Potřebné znalosti
Lekce 2

___
## <a name = ukol5>Úkol 5 - Stabilní stav LED</a>

### Zadání
Napiš program, který bude tlačítkem zapínat a vypínat LED číslo 1.

### Parametry
Po stisku tlačítka *SW1* zůstane LED 1 zapnutá. Po opětovném zmáčknutí tačítka se LED vypne.

### Potřebné znalosti
Lekce 2

___
## <a name = ukol6>Úkol 6 - Jízda vpřed/vzad</a>

### Zadání
Napiš program, který bude jezdit s TrackRay dopředu a dozadu.

### Parametry
Doba jízdy dopředu je 1 s, dozadu taky 1 s. Rychlost je libovolná nenulová.

### Potřebné znalosti
Lekce 3

___
## <a name = ukol7>Úkol 7 - Rychlost jízdy</a>

### Zadání
Napiš program, který bude tlačítkem ovládat rychlost TrackRay.

### Parametry
Při držení tlačítka *SW1* budou motory postupně zrychlovat. Po dosažení maxima začnou znovu zpomalovat.

### Potřebné znalosti
Lekce 3

___
## <a name = ukol8>Úkol 8 - LED vlna</a>

### Zadání
Napiš program, který postupně rozsvítí LEDky tak, aby vypadaly jako vlna.

### Parametry
Postupně budou rozsvíceny LED 1 až 5 v horní řadě panelu. Program běží v nekonečné smyčce.

### Potřebné znalosti
Lekce 5

___
## <a name = ukol9>Úkol 9 - KITT</a>

### Zadání
Napiš program, který bude blikat s LEDkami na motivy [Knight Rider](https://www.youtube.com/watch?v=DQkc_toDcp0).

### Parametry
Postupně budou rozsvěcovány a zhasínány LED 1 až 5 v horní řadě panelu. Program běží v nekonečné smyčce.

### Bonusové parametry
Program bude neblokující, tj. bez příkazu `delay();`.

### Potřebné znalosti
Lekce 5

___
## <a name = ukol10>Úkol 10 - Ochrana náklonu</a>

### Zadání
Napiš program, který bude hlídat náklon TrackRay.

### Parametry
Pokud velikost náklonu v alespoň jedné z os *pitch*, *roll* překoná hodnotu 20°, rozblikají se všechny LED na panelu. 

### Potřebné znalosti
Lekce 6

___
## <a name = ukol11>Úkol 11 - Otočení o 90°</a>

### Zadání
Napiš program, otočí s TrackRay o 90° v ose *yaw*.

### Parametry
Robot se bude otáčet o 90° periodicky s periodou 5 vteřin.

### Potřebné znalosti
Lekce 6

___
## <a name = ukol12>Úkol 12 - Ukazatel náklonu</a>

### Zadání
Napiš program, který bude na LED panelu TrackRay indikovat jeho orientaci v prostoru.

### Parametry
Bude svítit vždy 1 LED z panelu. Při stání na rovné podložce bude svítit prostřední LED. Při naklonění TrackRay dopředu se přesune svítící LED dopředu a obdobně do zbývajících směrů.

### Potřebné znalosti
Lekce 6