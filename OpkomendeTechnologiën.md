# Project Opkomende technologiën 
Het doel van dit project is de ontwikkeling van een systeem binnen het kader van het vak gebruiksgericht ontwerpen, onder de projectnaam Petch.
Het richt zich op hondenbezitters die moeite hebben om hun hond alleen thuis te laten en daardoor zelf angst ervaren om hun woning te verlaten — ze voelen zich als het ware gevangenen in hun eigen huis.
Petch omvat een slimme halsband die de hartslag en beweging van de hond registreert. Op basis van deze gegevens kan het systeem stress bij de hond detecteren. Zodra stress wordt vastgesteld, zorgt het systeem automatisch voor prikkels in de omgeving om de hond af te leiden en gerust te stellen.
Het centrale onderdeel is een snoepjesdispenser die beloningssnoepjes uitdeelt. Daarnaast is er een interactief speeltje dat begint te bewegen wanneer het wordt geactiveerd, wat voor extra afleiding zorgt.
Tot slot is er een bijhorende app waarmee het baasje via een camera het gedrag van de hond op afstand kan volgen. De app biedt ook de mogelijkheid om op afstand snoepjes te geven of het speeltje te activeren.


## Prototype 

De elektronica van de halsband werd in dit prototype niet uitgewerkt. Er werd onderzoek gedaan naar de mogelijkheden om de hartslag te meten van honden, maar vanwege het haar van de hond waren de gebruikelijke hartslagmeters geen optie. Er zou hiervoor een hartslagmeter zoals deze die dierenartsen gebruiken nodig zijn, wat voor dit project met de beschikbare middelen en tijd niet haalbaar is.

In het prototype worden drie onderdelen uitgewerkt: de dispenser, het interactieve hondenspeeltje en de bijhorende app. Hiernaast wordt er ook een rotary encoder gebruikt die de hartslag voorstelt, dit om aan ‘Wizard-of-Oz’-style testing te kunnen doen met het systeem.

De **dispenser** fungeert als centrale hub van het systeem. 

![Schermafbeelding 2025-05-16 181104](https://github.com/user-attachments/assets/0bcbd42b-0193-48d7-96a1-9a0eafaa70ac)


Deze bevat drie belangrijke componenten:

- **Raspberry Pi 5**
Op de Raspberry Pi wordt de app ontwikkeld. Hiervoor wordt een webserver opgezet met behulp van Flask, waarbij Jinja2 wordt gebruikt voor de HTML-templates en Javascript om de app interactief te maken. De vormgeving van de app wordt verder verfijnd met behulp van CSS-bestanden.

![Schermafbeelding 2025-05-16 183446](https://github.com/user-attachments/assets/12ed538f-b97b-4afe-89d3-9a3ad544142c)
![Schermafbeelding 2025-05-16 183504](https://github.com/user-attachments/assets/76948fd0-8bd6-4d96-9772-7a4968868602)


- **Camera**
Als camera wordt het Raspberry Pi 8MP Camera Board gebruikt. Deze wordt rechtstreeks op de Raspberry Pi aangesloten en stelt het baasje in staat om de hond op afstand te observeren via de app.


- **Stappenmotor**
Om het rad te doen bewegen werd de 5V 4-Phase Stappenmotor 28BYJ-48 gebruikt. Deze stappenmotor zorgt voor het aandrijven van het snoepjesrad. Deze motor is aan de achterkant van het rad bevestigd en is via een tienhoekige cilinder verbonden, waardoor het rad telkens in stappen van 36 graden kan draaien om een snoepje vrij te geven. Deze component wordt alsook rechtstreeks met de Raspberry Pi aangestuurd.

![Schermafbeelding 2025-05-16 180658](https://github.com/user-attachments/assets/260771c8-a9f4-48b2-b1aa-73e3050c0007)


Het **interactieve speeltje** is vormgegeven als een hondenbot en bestaat uit twee ronde uiteinden die ten opzichte van elkaar kunnen draaien. Deze uiteinden worden aangedreven door DC-motoren, meer specifiek de DC-motor 6VDC 1,2A 8000rpm 4,2W. Deze worden aangesloten op het L298N Motor Driver Board. Door de motoren correct op elkaar af te stemmen, kan het speeltje verschillende bewegingen uitvoeren, zoals roteren, voortbewegen en andere dynamische acties. Een Arduino Nano 33 IoT ontvangt een signaal van de Raspberry Pi via wifi wanneer de gebruiker het speeltje activeert in de app. Het speeltje zal dan voor één minuut aangaan. De gebruiker heeft dan de optie het speeltje meteen te stoppen of een tijd in te stellen waarna het speeltje zal stoppen.

![Schermafbeelding 2025-05-16 175359](https://github.com/user-attachments/assets/32c1141b-0442-4bcd-9e6f-319da834d7b9)

In bovenstaand schema werd er een gewone Arduino nano gebruikt. Aangezien voor dit project een Arduino Nano IoT 33 werd gebruikt (waarvan ondervonden werd dat deze geen 5V kan leveren), werd de logica van de L298N motor driver met de 3.3V pin verbonden. Op het laatste moment (de avond voor de deadline) werd echter ondervonden dat de L298N 5V nodig heeft en dat de NINA-W10 wifi chip zeer warm werd. Door de laattijdige ontdekking werd dit probleem niet meer opgelost. Mogelijke oplossingen hadden kunnen zijn: gebruik van een Relay of gebruik van Bluetooth modules voor communicatie met de Raspberry Pi.  

![Schermafbeelding 2025-05-16 181150](https://github.com/user-attachments/assets/59217d14-20c8-4b6a-9ae0-b7c98eaf587b)


De **Rotary encoder** om de hartslag mee na te bootsen wordt aangesloten op een Arduino Nano en met een HC-05 Bluetooth Module naar de Raspberry Pi gecommuniceerd. Op de Raspberry Pi wordt deze hartslag op verschillende pagina’s live weergegeven met behulp van Javascript en kunnen er verschillende elementen met de hartslag meebewegen.

![Schermafbeelding 2025-05-16 171203](https://github.com/user-attachments/assets/012cf143-b4de-48d5-8cfd-da95c04d90d2)

![Afbeelding van WhatsApp op 2025-05-16 om 18 38 17_6d7d5580](https://github.com/user-attachments/assets/c67d7f96-06c9-478a-8efd-c597e9d1ebf5)


