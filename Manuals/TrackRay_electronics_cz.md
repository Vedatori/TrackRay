V tomto dokumentu je uveden návod na osazení desky plošných spojů. Část je osazena již z výroby SMD součástkami. Zbytek osazení je předmětem tohoto návodu.
Pro tento návod si uvedeme následující pojmy: DPS = PCB = deska - Deska Plošných Spojů.
Deska pro TrackRay je již z výroby osazena SMD (bezvývodovými) součástkami. THT (vývodové) se pájí následujícím způsobem:
* Součástku vkládáme ze strany, kde je naznačena silkscreenem (kde je bílou barvou natištěn její obrys).
* Součástku přitlačíme až k desce nebo co nejblíž.
* Součástku pájíme ze strany, na kterou trčí vývody.
* Vývody po zapájení zastřihneme.

# Obsah
* [Pájení LED](#LED)
* [Pájení malých součástek](#male)
* [Pájení větších součástek](#vetsi)
* [Vložení desky do robota a propojení](#finalizace)

## <a name = LED>Pájení LED</a>
**Potřebujeme:**
* 28x červená LED
* 4x zelená LED
* 2x žlutá LED

**Postup:**
<span style="color: red;">**POZOR: LED mají definovanou polaritu!**</span> U každé LED zkontrolujte, že kratší nožku vsouváte do čtveraté díry! 
1. Do desky vložte LED tak, aby barvy odpovídaly LED na obrázku. 
![alt](SupportFiles/DSCN9063-min.jpg)
1. Na LED nasaďte pájecí přípravek. 
![alt](SupportFiles/DSCN9064-min.jpg)
1. <span style="color: red;">**Před dalším postupem si nechte zkontrolovat desku vedoucím!**</span>
1. Vývody vsazených LED zapájejte. 
![alt](SupportFiles/DSCN9070-min.jpg)
1. Do pole vložte další řadu LED. 
![alt](SupportFiles/DSCN9073-min.jpg)
1. Nasaďte přípravek.
![alt](SupportFiles/DSCN9074-min.jpg)
1. Zapájejte novou řadu LED.
![alt](SupportFiles/DSCN9075-min.jpg)
1. Tento postup opakujte, dokud nebudou zapájené všechny LED. 
![alt](SupportFiles/DSCN9078-min.jpg)
![alt](SupportFiles/DSCN9079-min.jpg)

## <a name = male>Pájení malých součástek</a>
**Potřebujeme:**
* 2x SMD rezistor 0,22 Ohm
* 1x USB konektor
* 1x krystal
* 2x tlačítko

**Postup:**
1. Zapájejte *jumper JP1* na spodní straně desky a spojte cínem obě jeho plošky.
![alt](SupportFiles/DSCN9082_small.jpg)
1. Zapájejte SMD rezistory. Na jednu pájecí plošku naneste pájku.
![alt](SupportFiles/DSCN8591-min.jpg)
1. Přiložte SMD rezistor. Roztavte předem nanesený cín a tím připájejte rezistor. Poté zapájejte druhý vývod rezistoru. Stejným způsobem zapájejte i druhý rezistor.
![alt](SupportFiles/DSCN8593-min.jpg)
1. Vložte USB konektor na místo H8. Skrz desku musí vyčnívat tenké vývody i tlusté fixovací vývody.
![alt](SupportFiles/DSCN8601-min.jpg)
1. Tlusté i tenké vývody připájejte klasicky zespodu, jak je popsáno v úvodní části návodu. Tlusté vývody je možné zapájet z obou stran. 
![alt](SupportFiles/DSCN8605-min.jpg)
1. Na místo Y1 zapájejte krystal.
![alt](SupportFiles/DSCN8606-min.jpg)
1. Na místa SW1 a SW2 zapájejte tlačítka. 
![alt](SupportFiles/DSCN8610-min.jpg)

## <a name = vetsi>Pájení větších součástek</a>
**Potřebujeme:**
* 0,5x dutinková lišta
* 3x terminal block
* 2x elektrolytický kondenzátor 1000 uF
* 1x páčkový přepínač
* 1x držák baterie
* 1x gyroskop

**Postup:**
1. Naměřte si dutinkovou lištu tak, abyste si vyrobili 2x 8pin dutinky. Dutinky oddělte kleštěmi vždy uprostřed dalšího pinu, ten se zničí.
![alt](SupportFiles/DSCN8612-min.jpg)
1. Nadělené dutinky začistěte nožem nebo kleštěmi tak, aby nebyly viditelné zbytky odstřihnutého pinu.
![alt](SupportFiles/DSCN8614-min.jpg)
1. Vložte dutinku do desky k umístění IC1, zapájejte jeden pin. Poté zkontrolujte, jestli není dutinka nakřivo. Dorovnejte a zapájejte ostatní piny.
![alt](SupportFiles/DSCN8616-min.jpg)
1. Zapájejte buzzer do místa s označením BZ1. Pozor na polaritu, delší vývod (u symbolu plus na etiketě buzzeru) musí být umístěn do otvoru označeným symbolem +. 
![alt](SupportFiles/DSCN8622-min.jpg)
1. Nasuňte do sebe dva terminal blocky. 
![alt](SupportFiles/DSCN8625-min.jpg)
1. Zapájejte je na místa označená M2 a M3 tak, aby otvory pro kabely směřovaly ven z desky. 
![alt](SupportFiles/DSCN8628-min.jpg)
1. Zapájejte jeden terminal block na místo M1 tak, aby otvory pro kabely směřovaly ven z desky. 
![alt](SupportFiles/DSCN8630-min.jpg)
1. Na místa označená C13 a C19 zapájejte elektolytické kondenzátory. Pozor na polaritu, delší vývod musí směřovat do otvoru, u kterého je smybol + a jeho okolí není zabarvené bílou barvou.
![alt](SupportFiles/DSCN8638-min.jpg)
1. Na místo označené SW3 vložte páčkový přepínač. Zapájejte. Při pájení dbejte na to, aby byl kolmo k desce, po připájení je obtížné ho narovnat. 
![alt](SupportFiles/DSCN8639-min.jpg)
1. Na místo označené BT1 připájejte držák baterie. Symbol + na desce musí odpovídat symbolu + na držáku baterie. 
![alt](SupportFiles/DSCN8638-min.jpg)
1. Napájejte kolíkovou lištu na gyroskop. Nejdříve zapájejte jeden pin a poté lištu srovnejte, aby s deskou gyroskopu svírala pravý úhel. Poté zapájejte ostatní piny kolíkové lišty.
![alt](SupportFiles/DSCN8657-min.jpg)
1. Zapájejte gyroskop do desky na místo označené MPU6050. 
![alt](SupportFiles/DSCN8667-min.jpg)

## <a name = Finalizace>VLožení desky do robota a propojení</a>
**Potřebujeme:**
* 2x šroub M3x8
* 2x velký upínací pásek
* 2x malý upínací pásek

**Postup:**
1. Baterii do robota vsazuje vedoucí!!! Po jejím vsazení ji přichyťte pomocí velkých upínacích pásků, jejich konce zastřihněte kleštěmi.
![alt](SupportFiles/DSC_O4O3.jpg)
![alt](SupportFiles/DSC_O4O7.jpg)
1. Desku vložte do robota. Pomocí dvou šroubů M3x8 desku zašroubujte do držáků na robotovi skrz díry H5 a H7 na desce. 
![alt](SupportFiles/DSCN8672-min.jpg)
1. Do terminal blocků M1 a M2 připojte kabely od motorů. Kabel s červeným proužkem bude vždy připojen do otvoru blíže baterii. Zašroubujte.
![alt](SupportFiles/DSCN8674-min.jpg)
1. Na horní straně desku připevněte skrz díry H1 a H6 pomocí upínacích pásků. Zcela je nedotahujte. Konce zastřihněte. 
![alt](SupportFiles/DSC_0408.jpg)
![alt](SupportFiles/DSC_0411.jpg)