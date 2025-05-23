# Petch
*Een slim systeem dat verlatingsangst bij honden en baasjes tegengaat.* 

*Projectteam: Jade van den Abbeele, Hailey Ledain*

08/01/2025

## Samenvatting
Veel hondeneigenaars vinden het moeilijk om hun hond alleen thuis te laten. Of ze nu naar het werk gaan, naar een feestje, of simpelweg iets gaan drinken, ze blijven zich zorgen maken om hun hondje. Veel honden hebben ook last van verlatingsangst. Uit een enquête onder ongeveer 200 respondenten blijkt dat ruim 75% zich hierin herkent.
Onze oplossing is een wearable voor honden die op een halsband of harnas aangebracht wordt. Deze meet het stresslevel van de hond wanneer het baasje van huis gaat. Bij verhoogde stress, krijgt het baasje via een app een melding dat zijn of haar viervoeter zich ongemakkelijk voelt. Op de interface heeft het baasje dan onder andere de mogelijkheid om het hondje te controleren via een camera, met hen te praten vanop afstand, zijn stressniveau te bekijken, een speeltje te doen bewegen of een snoepje te geven.

Dit snoepje wordt gegeven met een dispenser die in de huiskamer bij de hond staat en met de app bediend kan worden (of automatisch werkt indien de gebruiker dit wenst). Ook de camera is op de dispenser aangebracht zodat het baasje meteen ziet hoe het met zijn viervoeter gaat.

Doordat baasjes met hun hond kunnen interageren op afstand en hen beloningen kunnen geven, hebben ze minder het gevoel dat ze hun hond “in de steek” laten. De live stressmeter 
en de camera geven een gevoel van controle. Deze combinatie gaat schuldgevoel en verlatingsangst bij baasjes tegen. Daarnaast heeft het een kalmerend en positief effect op honden en helpt het ook bij hun verlatingsangst.

![Hero Shot](https://github.com/user-attachments/assets/c8ea3e88-eb43-47ac-8855-15e59746ab20)


## Introductie
Veel hondeneigenaars vinden het moeilijk om hun hond alleen thuis te laten. Vooral wanneer de hond last heeft van verlatingsangst of destructief gedrag vertoont, wordt dit een uitdaging. Dit kan bij het baasje leiden tot een constante bezorgdheid en een gevoel van machteloosheid. Ze vermijden bepaalde activiteiten of haasten zich naar huis om hun hond gerust te stellen.
Het doel van het project is om een slim product te ontwerpen dat hondeneigenaars een gerust gevoel geeft wanneer hun hond alleen thuis is. De hoofdfunctie is om de hond te kalmeren en een aangenamere tijd te bieden, wanneer hun baasjes van huis zijn. De baasjes hebben de optie om vanop afstand te kunnen interageren met hun hond. Uit onderzoek, zoals beschreven in Stressed Out Dog: 10 Ways to Ease Their Stress - Diggs, 2021, blijkt dat fysieke en mentale stimulatie stress vermindert bij honden. Dit wordt toegepast in het uiteindelijke product dat uit 4 onderdelen bestaat:

1. Een halsband die de stressniveaus van de hond meet.
2. Een dispenser met een camera, die het baasje op afstand via een app kan besturen. Ze kunnen snoepjes geven en kijken hoe het met hun hond gaat.
3. Een interactief speeltje dat beweging en prikkels biedt en op afstand geactiveerd kan worden.
4. Een app waarmee alles van op afstand bestuurd kan worden. Hier kan de gebruiker zijn voorkeuren instellen wat betreft de notificaties en automatisering.


## Methodologie
De productontwikkeling startte met de **discovery fase**, waarin werd gezocht naar een probleem dat aansloot bij de design challenge. Aanvankelijk ging het project over hondenagressie en hondenfobie in het algemeen. Na de eerste conceptpitch bleek echter dat dit product veel vertrouwen van de gebruiker vereiste. Hondenangst en hondenagressie is namelijk een zeer grote uitdaging om op te lossen. Daarnaast is hondenagressie ook moeilijk om correct te meten. Zo bleek dat een andere problematiek binnen dezelfde doelgroep meer potentieel heeft: **hondenbaasjes die moeite hebben met het alleen thuislaten van hun hond**. Het zal in dit dossier dus ook enkel over deze specifieke doelgroep gaan.

Er werd **gebrainstormd** over mogelijke oplossingen voor dit probleem, wat leidde tot het idee van een halsband die via hartslag en beweging de stressniveaus van de hond monitort. De verzamelde gegevens worden gebruikt om het gedrag van de hond beter te begrijpen en gerichter in te spelen op zijn behoeften.
Na onderzoek, een enquête, benchmarking en brainstormsessies werd een eerste concept ontwikkeld. Dit omvatte een **interactieve oplossing om honden thuis te vermaken**.

In de **definitiefase** werd onderzocht hoe het product vorm kon krijgen. Het concept bestond uit een app waarmee baasjes op afstand hun hond kunnen observeren, snoepjes kunnen geven, speelgoed kunnen activeren, enzovoort. De interface werd uitgewerkt in Figma en ProtoPie om testpersonen een zo realistisch mogelijk beeld te geven van de werking. Tegelijkertijd werden quick-and-dirty **prototypes** van een dispenser gemaakt om verschillende ideeën te testen.

Deze prototypes en interfaces werden getest via de eerder aan bod gekomen techniek: Concept Testing in een gecontroleerde omgeving. Hiermee werd een optimaal concept van de dispenser gerealiseerd, werd inzicht verworven in het soort wearable en een goed beeld verkregen van de functies die de app moet kunnen besturen.

Het **speeltje werd enkel conceptueel uitgewerkt** in deze fase, aangezien de technieken om dit te prototypen nog niet gekend waren.

In de **tweede wave** werden de **meldingen die de app zal geven** geoptimaliseerd. Het belangrijkste doel was dat baasjes zich gerustgesteld voelen terwijl ze van huis zijn. Dit werd getest met een variant op ESM-testing, waarbij de baasjes op hun werk meldingen kregen over hun hond (zoals het uiteindelijke product dit ook zal doen) en deze meldingen samen met hen geëvalueerd werden.

Er volgde een **eerste Develop fase**. De focus lag hier op het concretiseren van de stijl en lay-out van de interface, het mechanisme van de dispenser uitwerken en de methoden bepalen om de hartslag van honden te meten. Dankzij de lessen in Arduino werd het mogelijk een effectief werkend prototype te maken van de dispenser met behulp van een Protopie programma dat met de Arduino geconnecteerd is en een motortje doet draaien. Met dit prototype en de nieuwe dispenser werd aan Usability Testing (n=4) gedaan om nieuwe inzichten te krijgen. Hiernaast werden ook de methode om de hartslag van honden te meten onderzocht.

In de **tweede Develop fase** werd eerder op vormgeving gefocust. Zowel van de dispenser als het logo. Ook werd het inlaad- en uitlaadmechanisme van het bakje met de snoepjes in de dispenser geoptimaliseerd. Dit alles werd opnieuw gestest met Usability Testing (n=4).

In de **laatste Develop fase** werd Usability testing (n=6) gebruikt om de User Experience te optimaliseren. Er werden high-fidelity prototypes gemaakt van vrijwel alle componenten om zo nieuwe pijnpunten te kunnen identificeren. In deze prototypes werd alle eerder opgedane kennnis gecombineerd om tot een zo goed mogelijk resultaat te komen.

In deze fase werd ook getracht speeltje te doen werken om de respondenten een zo goed mogelijk beeld van het systeem te kunnen geven.

Tot slot wordt met behulp van de feedback van de respondenten in de laatste wave het finaal prototype gerealiseerd voor dit project.

![image](https://github.com/user-attachments/assets/91ec4d0c-99f9-41ee-86b4-430e1830f22e)

## Discovery
### Doestellingen
- Meer diepgang en begrip krijgen in de hondenbaasjes en honden zelf om zo de noden beter te kunnen inschatten.
- Begrijpen hoe stress in honden kan gemeten worden met een halsband.
- Onderzoeken welke middelen helpen tegen stress bij honden.
- Bestaande producten en diensten, die deze problematiek al (deels) oplossen, exploreren en hiervan leren.
- Verworven informatie gaan combineren tot een nieuw concept.

### Materiaal & methoden
#### Enquête
Er is een enquête opgesteld en verspreid in diverse Facebookgroepen om meer inzicht te krijgen in de problematiek en marktpotentieel. Deze enquête werd door 221 mensen ingevuld. De vragen waren gericht op hoe vaak mensen moeite hadden met het alleen thuis laten van hun hond en wat de belangrijkste redenen hiervoor waren.

#### Desk Research
Aan de hand van een google search werd gezocht naar manieren om stress te meten en verminderen bij honden. Het onderzoek richt zich tot wetenschappelijke bronnen, ervaringsdeskundigen en artikels

#### Benchmarking
Daarnaast werd benchmarking toegepast om bestaande oplossingen voor dit probleem in kaart te brengen. Er zijn een aantal producten onderzocht die ontworpen zijn om stress bij honden te verminderen.

#### Problem-solution matrix
Er wordt gebruik gemaakt van een problem-solution matrix om te brainstormen tot een nieuw concept. 

### Resultaten
#### Enquête
![image](https://github.com/user-attachments/assets/9fca5ecf-fc36-4433-96a0-d8953199ffab)

De enquête toonde aan dat 83% van de respondenten een vorm van ongemakkelijkheid voelt wanneer hun hond alleen thuis is. Ruim 30% heeft hier zelfs vaak last van.
Een deel van de respondenten heeft ook meer dan één hond, wat de kans verkleint dat ze moeite hebben met deze situatie.

De respondenten konden hier een oorzaak voor geven. Zie hier enkele opgelijst:
- “Als ik een afspraak heb in de avond vind ik het moeilijk mijn hond alleen te laten na een hele dag gewerkt te hebben”
- “Ik voel mij soms schuldig omdat ik moet gaan werken.”
- “Ik heb schrik dat ze vanalles zouden kapotbijten. En ik vind het zielig dat ze soms 9u in de bench zitten”
- “Ik ben altijd thuis dus ze is niet gewend om alleen te zijn en heeft verlatingsangst”
- “Omdat ik denk dat hij zich verveelt”

De enquête is te raadplegen als bron (“Je Hond Alleen Laten, een Do Or Don’t?”, 2024).

#### Desk Research
We zijn op zoek gegaan naar meetbare tekenen van stress bij honden, zodat deze door de halsband gemeten kunnen worden.
We ondervonden dat blaffen en hijgen zonder fysieke inspanning een teken kan zijn van stress (Weir & Buzhardt, 2021).

Uit een onderzoek waarbij de hartslag van honden werd gemeten tijdens een bezoek aan de dierenarts, kunnen we enkele belangrijke conclusies trekken (Edwards et al., 2022). Een verhoogde hartslag is een belangrijke indicator van stress, maar er zijn ook andere gedragsmatige tekenen en de geschiedenis van de hond die op verhoogde spanning kunnen wijzen. Tekenen zoals een tussen de achterpoten geklemde staart, naar achteren geplaatste oren, hijgen en trillen zijn allemaal indicatoren van stress. 

Ook hebben we enkele dingen gevonden die stress bij honden kunnen verminderen. (Stressed Out Dog: 10 Ways To Ease Their Stress - Diggs, 2021) (Weir & Buzhardt, 2021):
- Fysieke stimulatie
- Mentale stimulatie
- Een open bench als een safe space in het huis waar de hond zich op zijn gemak voelt
- Calming coats, die druk uitoefenen op hun lichaam om hen zo een geruster gevoel te geven 
- Kalmerende achtergrondmuziek
- Routine

DAP-feromonen
Dog Appeasing Pheromones (DAP) bootsen de geruststellende feromonen van moederhonden na en kunnen honden kalmeren in stressvolle situaties (Bond Vet, 2023). Verkrijgbaar als diffuser, spray of halsband, werkt DAP per hond verschillend en is het effectiever in combinatie met training en andere methoden (Kim et al., 2010).

Laser
Het gebruik van een laser om het jaaginstinct van een hond te activeren lijkt leuk, maar kan frustratie en neurotisch gedrag veroorzaken doordat de hond nooit iets kan vangen (Top Dog Professional Training, 2019). Dit kan leiden tot verwondingen of pijnklachten, vooral bij honden die alleen thuis zijn. Kies daarom voor spelactiviteiten die zowel het fysieke als mentale welzijn van de hond bevorderen.

#### Benchmarking
We zijn op zoek gegaan naar andere producten op de markt, die deze problematiek (deels) oplossen. 
We zijn gaan kijken naar producten die een camera en/of dispenser hebben, interactieve speeltjes en producten die werken met het DAP-Feromoon.

![image](https://github.com/user-attachments/assets/718de693-476e-4513-8a39-1532b2fa71b7)


#### Problem-solution matrix
![image](https://github.com/user-attachments/assets/0f1ab4bc-0e01-4031-b35a-8f72b25a4e22)

### Conclusies & implicaties
#### Enquête
Uit de enquête hebben kan besloten worden dat de problematiek zeer reëel is en dat een groot deel van de baasjes zich erin herkent.

=> Het product moet verlatingsangst, destructief gedrag en langdurig in de bench zitten voorkomen.
=> Daarnaast moet het er ook voor zorgen dat de hond meer plezier heeft door de dag.

#### Desk Research
Allereerst kan worden besloten dat de halsband de hartslag en beweging zal meten. Door inspanning gaat de hartslag omhoog, wat een vertekend beeld van stress kan geven. Door ook de beweging te meten, kan dit uitgesloten worden.
Daarnaast kan blaffen ook op stress wijzen. Dit zou ook gemeten kunnen worden. 

Fysieke en mentale stimulatie is een belangrijke factor wanneer stress verminderd moet worden bij honden. Interactieve speeltjes zijn een goede manier om dit te bekomen.

Het DAP-feromoon is een goede manier om een rustigere omgeving te creëren. Dit is zeker een aspect dat goed is om toe te voegen aan het product. 

Het gebruik van laserspelletjes is een functie die niet wordt opgenomen om de veiligheid van het product te waarborgen en ongewenste effecten te vermijden. De laser activeert een jachtinstinct, maar geeft nooit de voldoening van de laser te pakken, wat voor meer stress zorgt


#### Benchmarking
Er wordt een oplijsting gemaakt van alle aspecten die worden meegenomen in de verdere ontwikkeling van het product. Dit zijn dingen die positief waren aan bepaalde producten of negatieve dingen, die net beter moeten.
- 360° camera
- Auto-tracking
- Night vision
- Blaf detectie
- Een dispenser die met zuignappen of schroeven kan vastgemaakt worden aan de muur
- Camera die langs boven en onder kan bevestigd worden zodat hij kan staan en hangen.
- Een geautomatiseerd systeem om indien gewenst de snoepjes te laten geven zodat het niet afleidt van het werk.
- Interactieve speeltjes die de honden fysiek en mentaal gaan uitdagen om verveling tegen te gaan.
- Speeltje dat via de app te besturen is. 
- Speeltje dat werkt met snoepjes

> [!IMPORTANT]
> Design Requirements:
> - D1.4 Het stresslevel van de hond moet gemeten kunnen worden
> - D2.1 De wearable moet de hartslag van de hond meten
> - D2.2 De wearable moet de beweging van de hond meten
> - D2.3 De wearable moet de gemeten variabele(n) doorgeven naar de interface

## Definition

### Doestellingen
- Inzicht krijgen in de noden van de gebruiker om deze te implementeren in het eerder bedachte concept
- Verschillende functies uittesten en prioriteren
- De belangrijkste design requirements bepalen

### Materiaal & methoden
#### Wave 1: Concept testing in een gecontroleerde omgeving
Er wordt gestart vanuit een storyboard. 
![Storyboard 1](https://github.com/user-attachments/assets/8b4af1e6-e5db-412a-9604-64dd7dd02e06)
Hieruit worden de belangrijkste onderzoeksvragen afgeleid die in de eerste wave worden beantwoord.
- Welke functies moeten met de interface kunnen worden bediend?
- Welke wearable zal de hond krijgen?
- Wat zal de werking zijn van de dispenser?
	
Om deze te onderzoeken worden prototypes gecreëerd voor de dispenser uit voornamelijk karton, maar ook met 3D-geprinte componenten, nagels en een lamp. Ook worden 2 interfaces gecreëerd, één met Figma en één met Protopie. 
![image](https://github.com/user-attachments/assets/3715c4c3-e484-4840-ba2d-09da68a7b09c)
![image](https://github.com/user-attachments/assets/d7be8d36-070e-453d-8158-0e0e85a35249)


Dit alles wordt getest (n=5) met de aangeleerde techniek ‘concept testing in een gecontroleerde omgeving’. Om de resultaten beter te kunnen analyseren werd de respondent na de test gevraagd om een vragenlijst in te vullen. 
Hieruit worden de onderzoeksvragen beantwoord en wordt een PvE opgesteld.

#### Wave 2: ESM-Testing 
Er wordt vertrokken vanuit een nieuw storyboard. 
![storyboard 2](https://github.com/user-attachments/assets/99aee5f2-d8cb-4ad0-a6a0-8732e199d0a5)

Hieruit konden opnieuw een reeks onderzoeksvragen gevonden worden:
- Welk effect hebben de meldingen op de gebruiker?
- Wat voor meldingen zullen er verstuurd worden?
- Hoe moeten deze geformuleerd zijn?
- Hoe zal de gebruiker voorkeuren kunnen aangeven op de interface?
- Moet de gebruiker kunnen instellen wanneer hij van huis gaat?

Om dit te testen, werden enkele elementen uit de Figma interface in de Protopie interface geïntegreerd en er werd met deze verder gewerkt. Hierin werd een instellingenmenu ontworpen waarin de gebruiker zijn voorkeuren kan geven, welke meldingen hij wilt en of er automatisch beloningen gegeven mogen worden. 

![image](https://github.com/user-attachments/assets/e92e5613-8d80-4f0e-bbe1-51e59e27cb32)

De respondenten van de 2de wave (n=5) kunnen hierin hun voorkeuren aangeven. Met een variant op ESM Testing worden de meldingen getest. Hierbij krijgen ze gepersonaliseerde, zo realistisch mogelijke, meldingen over hun hond. Hierover wordt op verschillende momenten samen met hen gereflecteerd. 

Met de resultaten van deze test worden opnieuw de onderzoeksvragen beantwoord en het PvE aangevuld. 

### Resultaten
#### Wave 1:


Al de respondenten kregen de kans om met de twee interfaces te werken. Bijna alle respondenten hadden een voorkeur voor de Protopie interface. Dit omdat deze de meeste functies heeft en er het indrukwekkendst uitziet. Wel viel op dat het voor de gebruiker minder intuïtief te besturen was. De Figma interface daarentegen werd simplistisch genoemd en was minder indrukwekkend. Toch gaven enkele respondenten hieraan de voorkeur vanwege het gebruiksgemak. Ook viel de live-stressmeter van deze interface meer in de smaak.


*“Ik vind die eerste de schoonste, maar die tweede is wel gemakkelijkst om te gebruiken want ik kan niet goed weg met die technologie enal.”*


Bijna alle respondenten namen hun hond mee naar de testen. Dit werd niet gevraagd, maar ze wilden hun hond natuurlijk niet alleen thuislaten. De honden reageerden allemaal positief op de testen en de mensen genoten ervan om hun hond vanop afstand snoepjes te geven of ermee te praten.


*“Hij kan mij horen nu? Dag Charlie!!”*


De meningen over de prototypes waren verdeeld. Velen vonden het idee om verschillende beloningen in de dispenser te kunnen steken heel goed. Zo konden ze hun hond ook iets gezond geven. Toch ging vaak de voorkeur naar de dispenser met het draaisysteem. Dit omdat hij esthetisch erg goed scoorde, het makkelijkst bij te vullen was en het meest volledig (de camera en de diffuser hingen hier ook aan). De derde diffuser was het minst favoriet, hoewel de meeste wel fan waren van het lampje en het geluidje dat hiermee gepaard ging.


*“Met die eerste kan ik hem af en toe worteltjes geven ofzo. Hij staat al een beetje dik.”*

![image](https://github.com/user-attachments/assets/5f8ed971-fe28-46b0-9858-756d9c3827c1)


Welke functies (die de interface moet bedienen) die de respondenten belangrijk vinden, werd vooral afgetoetst met de vragenlijst. De respondenten gaven elke functie een score van 1 tot 5. Hiervan werd per functie de gemiddelde score bepaald. Hieronder de kwantitatieve analyse:

![image](https://github.com/user-attachments/assets/d0d70879-cff0-4472-adc7-651b86a631bd)

Op het einde werd er aan de respondenten gevraagd of ze de voorkeur hebben voor een halsband, een harnas of een soort t-shirt voor hun hond. De meningen waren ongeveer gelijk verdeeld tussen een halsband en een harnas. Opvallend was dat het sommigen heel erg zou tegenhouden als het niet de wearable van hun keuze is. 


*“Met een halsband ben ik bang dat hij zichzelf ophangt aan zijn bench. Dat is al eens gebeurd."*


#### Wave 2:


Al de respondenten konden op de nieuwe interface hun voorkeuren aangeven over wat voor meldingen ze willen ontvangen en tot in hoeverre het product automatisch mag werken.


Toen de respondenten van huis gingen kregen ze, naargelang hun voorkeuren, meldingen over hun hond. Hoewel deze niet echt waren (er kon nog niets gemeten worden), werden ze zo realistisch mogelijk gebracht. 


Bijna al de respondenten rapporteerden terug dat ze het fijn vonden om de meldingen te ontvangen. Eén van de respondenten was hier minder enthousiast over, ze ervaarde het als een beetje “vervelend”. De oplossing hiervoor was dat ze de meldingen volledig uitzette en het product altijd automatisch beloningen liet geven.


Iets waar het merendeel van de respondenten zich zorgen over maakten is negatief aangeleerd gedrag. Dit is de reden dat bijna iedereen verkoos om zelf snoepjes te geven. Zo kunnen ze in het uiteindelijke product eerst met de camera kijken of hun hondje wel braaf is, of dat er echt iets aan de hand is om te vermijden dat ze een beloning geven als dit niet nodig is of als de hond iets stout aan het doen is.


### Conclusies & implicaties
Het belangrijkste is dat de gebruikers meldingen krijgen op hun gsm wanneer hun hond gestrest is. Dit zal gemeten worden met een add-on die op een harnas of halsband aangebracht kan worden. De eerste reactie van de gebruiker is sowieso om op de camera te kijken hoe het met hun hond gesteld is. Daarna moeten ze de mogelijkheid hebben om een beloning te geven, een speeltje te doen bewegen of eventueel met hun hond te praten. 


De meldingen die het baasje zal ontvangen moeten personaliseerbaar zijn en tactisch gebracht worden om geen negatieve gevoelens op te wekken bij het baasje. Ook moet het baasje de optie hebben om (deels) automatische beloningen of speeltjes in te schakelen indien ze geen tijd hebben om dit manueel te doen.

> [!IMPORTANT]
> Design Requirements:
> - D1.1 Het systeem moet een camerafunctie hebben
> - D1.2 Er moeten beloningen kunnen worden gegeven
> - D1.3 Er moet een speeltje geactiveerd kunnen worden, d.w.z dat het automatisch begint te bewegen
> - D1.5 Het stresslevel van de hond moet live te raadplegen zijn
> - D2.4 De wearable moet een harnas en/of halsband zijn
> - D3.2 De interface moet meldingen kunnen sturen naar de gebruiker
> - D3.3 De interface moet de optie geven om meerdere honden toe te voegen
> - D4.1 De dispenser moet beloningen kunnen geven
> - D4.2 De dispenser moet met verschillende beloningen gevuld kunnen worden, waaronder iets gezond
> - D4.3 De dispenser moet esthetisch zijn
> - D4.4 De dispenser moet snel bij te vullen zijn
> - D4.5 De dispenser moet een geluidje kunnen maken wanneer het een beloning geeft
> - D4.6 De dispenser moet uitgerust zijn met een camera
> - D4.7 De dispenser moet uitwasbaar zijn
> - D5.1 Het speeltje moet taai genoeg zijn

## Develop 1

### Doestellingen
- Inzicht krijgen in methoden om de hartslag van een hond te meten
- De stijl en lay-out van de interface bepalen
- Het mechanisme van de dispenser uitwerken met aandacht voor ergonomie bij het bijvullen van de snoepjes
- De bediening van de dispenser via de interface realiseren

### Materiaal & methoden
#### Vooronderzoek
De manieren om de hartslag te meten bij honden worden onderzocht. De nadruk ligt hier vooral op methoden met Arduino om dit tijdens het project met de al vergaarde kennis te kunnen realiseren.


Er wordt veel met Arduino geëxperimenteerd tijdens en buiten lessen. Er wordt telkens getracht deze kennis toe te passen op het project.


#### Prototyping
Er worden twee verschillende interfaces uitgewerkt. Eén interface heeft een vrolijkere feel-good stijl, gelijkaardig aan - maar rustiger dan - de bekomen interface na de Definition fase. De andere interface heeft een meer moderne en luxueuze uitstraling, zoals eerder werd aangeraden. 

![Schermafbeelding 2025-03-14 184750](https://github.com/user-attachments/assets/e59b8fd8-e04e-46a6-b74a-ab941049c913)

![Schermafbeelding 2025-03-14 184908](https://github.com/user-attachments/assets/12aa5d2f-9e9a-4533-863b-2310593091d5)

Ook wordt het mechanisme van de dispenser verder uitgewerkt. Dit bestaat uit een rad dat over een stappenmotor bevestigd wordt met een zeskantig verbindingselement. Het rad bevat 9 bruikbare ruimtes waarin gebruikers verschillende snoepjes van verschillende groottes kunnen insteken, alsook eventueel een klein worteltje of een ander gezond snackje (zoals aangehaald in wave 1 van de Definition fase). 


In de 2de wave kregen respondenten de kans om een maximaal aantal snoepjes in te geven indien ze voor automatische bediening kozen. Maxima varieerden, maar gingen niet boven de 10, vandaar de keuze voor het aantal vakjes die met snoepjes gevuld worden. 


Wanneer de gebruiker in de interface beslist een snoepje te geven, draait de stappenmotor over 36°. Wanneer er een snoepje onderaan terechtkomt, valt het uit de dispenser.

![Schermafbeelding 2025-03-14 185256](https://github.com/user-attachments/assets/352c3064-2778-44a4-a547-69a5ee7d525d)


De code om de dispenser te bedienen en de interacties van de interface worden met Arduino en Protopie gerealiseerd. 


#### Usability Testing + BERT Testing (n=4)


De interfaces en de dispenser worden getest met 4 respondenten. Twee nieuwe mensen, en twee respondenten die al eerder deelnamen. De respondenten krijgen de dispenser te zien. Er wordt hen gevraagd om deze in te laden met snoepjes en later om het deel waar de snoepjes in zitten te verwijderen om het te wassen.


Er worden hen ook één voor één de interfaces getoond. Ze krijgen eerst de kans om deze zelf te exploreren, daarna worden er hen enkele opdrachten gegeven zodat ze zeker alle functies te zien krijgen. 


Na elke interface vullen ze een BERT-testing formulier in, wat op het einde van de test verder met hen wordt besproken. Hiermee kunnen we duidelijk hun mening over de interfaces onderling vergelijken alsook hun mening t.o.v. hun ideale interface. Dit is ook een manier om hen grondiger te ondervragen en verder te laten nadenken over meerdere eigenschappen van de interfaces.




### Resultaten
De dispenser heeft in deze fase grotendeels vorm gekregen en is getest bij de gebruikers.

Wanneer de gebruikers initieel de dispenser in handen kregen, hadden ze soms moeite met deze te openen. Enkelen vonden het intuïtiever om de dispenser langs boven te openen wanneer gevraagd werd om snoepjes bij te vullen. Vervolgens kregen ze de binnenkant van de dispenser te zien. Deze was wellicht niet nauwkeurig genoeg gemaakt, waardoor vaak nog duiding moest worden gegeven over hoe het precies werkt. Wanneer deze dispenser in het volgende prototype opnieuw wordt gemaakt, zullen kwalitatieve materialen gebruikt worden, waardoor de werking duidelijker zal zijn. Ondanks dit alles konden ze het reservoir succesvol in- en uitladen. Er werd hen gevraagd om deze zelf op te vullen met snoepjes alsof ze gingen vertrekken naar hun werk. Ze hadden genoeg vakjes en nagenoeg alle snoepjes pasten erin. Er was nog een suggestie om het niet-bruikbare vak door middel van een constraint onbruikbaar te laten lijken, waardoor er minder verwarring is bij het inladen. Dit vak is onbruikbaar door de opening waar de snoepjes uitvallen. Ze reageerden ook positief op de globale werking van de dispenser.

Vervolgens kregen ze de app-interfaces te zien waarmee ze moesten interageren. Velen vonden het fijner om meteen de camera te zien bij het openen van de app. Dit is een van de belangrijkste functies, dus dan is het inderdaad handig om dit meteen groot te tonen. Hetzelfde geldt voor de snoep-en speelgoedknoppen. Deze stonden in de tweede interface ook groot en centraal, wat ook in de smaak viel.
Er was bij de tweede interface een activiteitenpagina, waarbij informatie over de dag te vinden is, zoals de hartslag, slaap, aantal gegeven snoepjes tot nu toe, etc.
Dit vonden vele respondenten zeker een meerwaarde. Een ander positief aspect in de eerste interface was er een soort hartslagschaal wat duidelijk aantoont hoe de hond zich voelt op het moment. Deze varieert van slapend tot onrustig. 

De resultaten van de BERT-testing formulieren zijn als volgt:
<p align="center">
	<img width="40%" src="https://github.com/user-attachments/assets/91b6b1b5-5470-4aa7-98c8-02a81150cecb">
	<img width="40%" src="https://github.com/user-attachments/assets/ad0cca02-4550-4d12-8c11-874cdefe5c5b">
	<img width="40%" src="https://github.com/user-attachments/assets/bf897453-a86a-4a55-9df6-2f270f54823a">
	<img width="40%" src="https://github.com/user-attachments/assets/ed7032e1-ba6d-40a7-b669-a62fff7e494b">
</p>



De meningen over de twee interfaces waren soms verdeeld in het formulier. Toch liggen de beoordelingen dicht bij de ideale verwachtingen van de gebruiker. 
De tweede interface werd eerder als persoonlijk gezien omdat de camera meteen op het beginscherm stond. Deze interface sloot ook het meest aan bij de verwachting van rust door het gebruik van één centrale kleur.
Beide interfaces scoren goed op gebied van efficiëntie, één van de belangrijkste eigenschappen.
Globaal viel de tweede interface meer in de smaak qua stijl. 


### Conclusies & implicaties
Uit de gebruikerstesten zijn enkele designbeslissingen gemaakt wat betreft de dispenser en de interface.
Er zijn aspecten die goed waren, die gebruikers zeker hebben bevestigd, maar ook enkele minpunten die worden verbeterd in de verdere studie van dit project.

Elementen die behouden worden aan de dispenser in de toekomst:
- Globale concept van het draaiende reservoir
- Aantal vakjes voor snoepjes
- De grootte van de vakjes 
- De correcte werking van de Arduino

Elementen die moeten worden aangepast aan de dispenser in de toekomst:
- Constraint plaatsen bij het onbruikbare vakje in het draaimechanisme
- Meer ergonomische manier van uithalen van het reservoir
- Intuïtiever aantonen hoe de dispenser wordt geopend
- Vormelijk duidelijker aantonen hoe het reservoir in- en uitgeladen wordt
- Het deksel beter bevestigen op het reservoir
- Nieuwe, nauwkeurige, propere versie van de dispenser maken.

Wat de interface betreft, vielen beide wel in de smaak. Iedere interface had zijn plus- en minpunten. 
Beide waren duidelijk in gebruik. 

Elementen die behouden moeten worden voor de verbeterde interface:
- De activiteitpagina van de tweede interface
- De thermometer schaal van de eerste interface
- De camera op het beginscherm
- De snoep- en speelgoedknoppen op het beginscherm
- De globale simpliciteit en overzichtelijkheid

Elementen die moeten verbeterd worden:
- Beter nadenken over het verwoorden van alle tekst (bv. Ik vertrek/Ik ga vertrekken)
- Duidelijker maken hoe je de microfoon en geluid aanzet
- Groter vormelijk verschil maken wanneer je op de vertrekknop drukt
- De slimme overgangen tussen de pagina’s
- Een kleurencode koppelen aan de gevoelens van de hond

> [!IMPORTANT]
> Design Requirements:
> - D3.7 Op de interface moeten enkele eenvoudige statistieken te zien zijn
> - D3.8 Op de interface moeten belangrijkste functies moeten meteen vanop het beginscherm te bedienen zijn wanneer het baasje van huis is
> - D3.9 Er moet een duidelijk vormelijk verschil zijn op de interface nadat het baasje op de vertrekknop drukt
> - D4.9 Het bijvullen van de dispenser moet op een intuïtieve, ergonomische manier kunnen gebeuren
> - D4.10 Er moeten genoeg constraints op de dispenser aanwezig zijn om foutief gebruik te vermijden
> - D4.11 De vormgeving van de dispenser moet zijn werking duidelijk maken

## Develop 2

### Doestellingen
- Welke dispenser sluit vormelijk aan bij de verwachtingen van de gebruiker?
- Welke materialen en finishes zijn ideaal?
- Welke manieren van in- en uitladen zijn het meest intuïtief en gebruiksvriendelijk?
- Welke naam en logo sluit het best aan bij het product?
- Met welke combinatie van hardware en software kunnen we het geheel prototypen?


### Materiaal & methoden

#### Usability testing (n=4)

Bij de gebruikerstesten zullen we focussen op 3 grote onderdelen om onze onderzoeksvragen te beantwoorden:

*Mechanisme*

Hiernaast worden er twee mechanismen uitgewerkt om de doos met de snoepjes in- en uit de dispenser te laden. Deze worden gemodelleerd, maar ook fysiek gerealiseerd zodat de respondenten ze effectief kunnen gebruiken. 

Het **eerste systeem** rust op het bekende principe van de keukenkastjes. Het bakje met de snoepjes zit volledig in de dispenser. Wanneer het bakje ingedrukt wordt komt her er gedeeltelijk uit, zodat de gebruiker het gemakkelijk kan verwijderen. Dit kan door het met twee handen te nemen of door het met één hand via de gleuf vast te nemen. Wanneer het terug gevuld is, steekt de gebruiker het bakje terug en drukt hij het een beetje in. Het blijft dan mooi zitten.

![Schermafbeelding 2025-04-24 150725](https://github.com/user-attachments/assets/067a2b8f-8fb1-4b0b-b453-b5bdd88851a4)

Het **tweede systeem** werkt met een simpel handvat om het bakje weg te nemen. Pas wanneer het bakje uit de dispenser is, kan het deksel losgedraaid worden. Bij dit systeem werd er getracht het rad dat in het bakje zit meteen juist te centreren. Dit wordt gedaan met behulp van een grote gleuven in de bodem van het bakje die de vorm hebben van het rad. Het rad kan hierdoor mooi gepositioneerd worden, maar nog niet draaien. Onder deze gleuven zijn er nog kleine gleufjes aanwezig. In de dispenser - waar het bakje moet komen - zijn er kleine uitstulpingen die perfect in deze kleine gleufjes passen. Wanneer het gevulde bakje met rad en deksel terug in de dispenser wordt geplaatst, wordt het rad een beetje omhoog geduwd zodat het vrij is om te draaien.

![Schermafbeelding 2025-04-24 150606](https://github.com/user-attachments/assets/a8fdfac9-d3f8-4069-a3a6-c2951ea4f5e2)

*Design*

Er worden verschillende dispensers ontworpen, beginnende vanuit moodboards of eerdere ideeën. Hiervan worden renders en CAD-modellen gemaakt. Aangezien de dispenser bij mensen in de woonkamer moet komen, kan een slechte vormgeving een dealbreaker zijn.

De **eerste** dispenser is simpel, met houten accenten.

![image](https://github.com/user-attachments/assets/148aad7a-86c3-4c5a-a31c-a3509f3f1953)

De **tweede** is eerder rechthoekig. Hier werd inspiratie gehaald bij **Daikin airconditioners**.
Dit zijn ook zeer praktische producten die moeten opgaan in de stijl van het huis.
Dit is te zien in het bijhorend moodboard:

![Schermafbeelding 2025-04-24 151356](https://github.com/user-attachments/assets/b998f611-19a9-4ac3-ba0e-3c1be3c7b63c)


![image](https://github.com/user-attachments/assets/be2a21e1-aa92-4423-ade0-e32583a537ce)

De **derde** is stilistisch meer gedurfd. Hier is er gespeeld geweest met matte texturen. Ook hier hoort een moodboard bij:

![Schermafbeelding 2025-04-24 151413](https://github.com/user-attachments/assets/a7630604-9f81-4777-9d16-741096e92605)


![image](https://github.com/user-attachments/assets/a486ba17-68de-410c-ba94-20c7e1492c64)

*Logo en naam*

Er worden twee nieuwe namen bedacht met elk een uniek logo met een zeer verschillende stijl. Deze worden aan de respondenten voorgelegd. Er wordt hun mening en voorkeur gevraagd op zowel naam, stijl, lay-out en kleur. 

![image](https://github.com/user-attachments/assets/42b31f51-3a79-49ce-a984-ffb039e74288)


*Extra*

Los hiervan werd ook aan de respondenten gevraagd of ze liever zouden werken met een draad in het stopcontact of een uitneembare batterij die kan worden opgeladen. 

#### Exploratie prototyping strategieën

Er wordt nagedacht over welke mogelijkheden de software en hardware moeten hebben. Er wordt gekeken naar Arduino, Protopie, Figma, Raspberry Pi etc. Wanneer de beste keuze voor dit project bepaald is, wordt met deze keuze(s) geëxperimenteerd om vooraf de mogelijkheden en limieten al goed te kennen.

### Resultaten

#### Usability Testing (n=4)

*Mechanisme*

Voor het uit- en inladen verkoos iedere respondent het druksysteem. Voor sommigen omdat dit het gemakkelijkst was, voor anderen omdat het simpelweg 'leuker' is. Het woord PUSH moet wel nog voorzien worden zodat er geen verwarring is. De manier van uithalen wanneer het in verhoogde positie is, is nog niet helemaal optimaal. Nu kan het op twee manieren: langs onder pakken via de gleuf, wat intuïtief is of met twee handen langs de zijkant vastnemen, wat soms onhandig kan zijn. 
De volgende dispenser zou een insnijding hebben onder het rad, zodat er genoeg ruimte is om het met één hand te verwijderen. (zie foto) Voorheen zat er nog materiaal in de weg waardoor het onhandig was om het op deze manier eruit te halen.
Er zouden ook lipjes zijn aan de zijkanten waardoor het makkelijker is om met twee handen te verwijderen.
![image](https://github.com/user-attachments/assets/bae7182c-ba47-45d6-83de-17b0bc963643)
Ook leek het hen handig om nummertjes van 1 tot 9 aan te brengen op de doos zodat het duidelijk is welk snoepje eerst gegeven wordt. 
In het volgende prototype zullen nummertjes worden aangebracht op de bodem van de doos die deze info geeft over de snoepjes en tegelijkertijd ook voor een correcte positionering zorgt van het rad.
Als laatste bleek opnieuw dat het inbrengen van het reservoir moeizaam ging voor de zeskant die juist gealinieerd moet worden. Daarom is het beter om voor het volgende prototype de zeskant en het rad te voorzien van een draft.

Niemand van de respondenten zegt de groeven om het rad juist te positioneren in het andere systeem noodzakelijk te vinden. 

*Design*

De meningen over het uiterlijk van de dispenser waren verdeeld. Enkelen waren voorstander van het simpelere ontwerp, namelijk de rechthoekige dispenser. Deze probeert eerder de dispenser te camoufleren zoals airconditioners. Anderen kozen voor de meer stilistisch gedurfde dispenser met de ribben. Dit omdat het meer op een lamp lijkt en daarom mooi in de woonkamer past. Deze gaat de dispenser dus niet verbergen, maar zal eerder dienen als een soort decoratie in het huis
 
Het is belangrijk dat de dispenser universeel genoeg is zodat de gebruiker het in hun huis wil zetten. Er moet dus een goed evenwicht gevonden worden zodat de dispenser mooi en stijlvol is, zonder dat het zo uniek is dat het niet in de meeste huizen past.
Het is ook een goed idee om als bedrijf meerdere designs van dispensers of voorkanten te verkopen zodat de gebruiker zelf zijn ideale dispenser kan uitkiezen. Voor dit prototype zal er gekozen worden om verder te gaan met de stijlvolle derde dispenser met eventueel subtielere bogen om het universeel te houden.

Wat de kleur betreft was iedereen enthousiast over het wit. De eerste dispenser maakt gebruik van houten accenten. Dit kan esthetisch zijn, maar dit maakt het ook moeilijker om te passen in elk huis. Er zijn heel veel verschillende kleuren en afwerkingen van hout. De kans is klein dat het hout van de dispenser zou overeenkomen met het reeds aanwezige houd bij mensen thuis. Daarom is het beter om hout helemaal te vermijden in dit prototype.

Wat ze handig vonden aan de derde dispenser is dat het gat waar de snoepjes uitvallen onderaan zit en niet vooraan zoals bij de andere twee. Zo wordt het gat beter verborgen en oogt het netter.

*Logo en naam*

De voorkeur voor de naam ging naar Petch. Doggy Secrets vonden ze net te lang. 

Wat het logo betreft, mocht het eerder aan de luxueuze klassevolle kant, zeker omdat het een high-end product zal worden. Er mag ook zeker wat kleur in zitten. Het kleurgebruik van groen, bruin en geel gaf een warm gevoel.

De respondenten vonden het logo van Petch iets te puntig en niet helemaal representatief voor het product. Het dikkere lettertype vonden ze wel goed.
Bij het logo van Doggy Secrets vonden ze het hondenpootje niet origineel en herkenbaar genoeg.
Er zal hieraan worden gewerkt door een nieuw verbeterd logo te ontwerpen en opnieuw te evalueren.

*Extra*

De consensus is dat de dispenser op batterijen moet werken. Dit zodat men de dispenser kan ophangen waar men wil en niet gebonden is aan een stopcontact. Ook wordt er voorkomen dat de hond op de draad zou bijten of eraan zou trekken.

#### Exploratie prototyping strategieën

Er wordt gekozen voor een combinatie tussen Raspberry Pi en Arduino voor de volgende wave. Er wordt afgestapt van ProtoPie omwille van de limiet van 3 minuten. Ook moeten er live camerabeelden in de app worden opgenomen. Hiervoor is Raspberry Pi een betere keuze. De Raspberry Pi zal in de dispenser zitten. Hierop wordt de app gemaakt. Dit met een webserver op de Raspberry Pi, die ingericht is als een app. Hiervoor wordt er gebruikgemaakt van Flask en Jinja2 voor html templates. Alsook CSS bestanden om de lay-out te perfectioneren. 

Deze 'app' zal dan de hardware aansturen. De app krijgt de hartslag en de beweging door van de hartslagmeter. Omdat de gewone (Arduino) hartslagcomponenten niet werken op honden vanwege hun haren, wordt deze hartslag via 'Wizard Of Oz'-testing of een algoritme nagebootst. 

De Raspberry Pi bediend rechtsreeks de dispenser. Het speelgoedje zal werken via een Arduino die een signaal doorkrijgt van de Pi wanneer de gebruiker op deze bepaalde knop drukt. 

### Conclusies & implicaties
Uit de gebruikerstesten zijn enkele goede design implicaties gekomen die worden meegenomen naar de laatste fase van dit project.

Design implicaties voor het mechanisme:
- Drukmechanisme
- Lipjes voorzien voor positionering en betere grip
- Uitsnijding tot onderaan voor ergonomisch uitladen
- Nummering onderaan de doos voor info over de volgorde en positionering van het rad.
- Tienhoek met draft voor makkelijkere en correcte inschuiving.

Design implicaties voor de dispenser:
- Derde dispenser met iets zachtere groeven
- Wit, geen hout

Design implicaties voor het logo:
- Petch
- Kleurgebruik (groen, geel, rood bv)
- Origineel genoeg

Extra:
- Er wordt gewerkt met uitneembare batterij

Conclusie prototyping strategie:
- Combinatie Rasberry Pie en Arduino
- Rasberry Pie in de dispenser en Arduino in het speelgoedje en het rad
- Webserver op Rasberry Pie, ingericht als app
- Templates: Flask en Jinja2 + CSS bestanden
- Hartslag via "Wizard of Oz"-testing

> [!IMPORTANT]
> Design Requirements:
> - D1.6 Het logo moet zowel klasse als warmte uistralen
> - D4.12 De dispenser moet neutraal genoeg zijn om in vrijwel elk woonkamerinterieur op te gaan
> - D4.13 De dispenser moet op batterijen werken

## Develop 3

### Doelstellingen
- De verschillen tussen de hartslagen van kleine en grote honden onderzoeken
- De vormgeving van de hartslagcomponent uitwerken
- De interface zo intuïtief mogelijk maken
- De User Experience optimaliseren
- Nagaan of er nog extra features aan het systeem toegevoegd moeten worden
- De vormgeving van de dispenser optimaliseren


### Materiaal & methoden

#### Onderzoek hartslag

Door middel van een desk research werd een beter beeld gecreëerd over hoe stress kan gemeten worden bij honden. Een uitgebreid protocol is te vinden in bijlage. 

Hier de onderzoeksvragen die als kapstok werden gebruikt:
- Hoe kan de hartslag van een hond gemeten worden?
- Hoe wordt stress gedetecteerd door hartslagmeting?
- Welke rol speelt beweging om tot een accuraat resultaat te komen?
- Hoe verandert de hartslag tussen honden onderling?
- Hoe kan gedetecteerd worden wanneer de hond slaapt?

#### Usability testing (n=6)

Er wordt deur aan deur gegaan bij mensen thuis. Er wordt hen gevraagd of ze een hond hebben en zo ja, of ze deel willen nemen aan de test. 

![image](https://github.com/user-attachments/assets/1088fa75-01a6-4e06-aeec-d192398f39bc)

Er werd gekozen om zo high fidelity mogelijk te prototypen. Dit om een zo realistisch mogelijk beeld van het concept te kunnen geven aan de respondenten en nieuwe pijnpunten te kunnen identificeren. Er werden verschillende componenten getest:

![image](https://github.com/user-attachments/assets/b6e88f04-1909-49d3-aec3-41f8d6098848)


1. **De dispenser**

De dispenser wordt gematerialiseerd met een combinatie van witgeschilderde houten platen en 3D-prints. Er werd uit de vorige test gekozen voor een drukmechanisme om het vulbakje eruit te halen. Het systeem om het rad juist te positioneren bleek eerder overbodig, waardoor dit niet in het nieuwe prototype werd opgenomen. In de dispenser bevindt zich de camera en een stappenmotor die het rad doet draaien om de snoepjes te geven. Dit alles is rechtstreeks aangesloten en bediend met een Raspberry Pi, waarop ook de interface gebouwd wordt. 

2. **Het speelgoedje**

Het botje bestaat uit drie 3D-geprinte componenten. In het midden een behuizing waar alle elektronica in zou moeten komen, aan de uiteinden twee ronde componenten die met behulp van twee DC motoren draaien en het botje doen bewegen. 

Een Arduino stuurt de motoren aan met behulp van een L298N motor driver. Op de Arduino is een HC-05 bluetooth module aangesloten die signaal opvangt van de Raspberry Pi wanneer de gebruiker op de juiste knop duwt en het botje doet bewegen. 

3. **De interface**

De interface bediend alle componenten. Deze wordt opnieuw herontworpen met alle eerdere opgedane kennis in het achterhoofd. De bedoeling hierbij is vooral om de User Experience te verbeteren en de hondeneigenaren een zo goed mogelijk gevoel te geven. Er werd gekozen om met een Flask webserver te werken. Dit omwille van de vele mogelijkheden om verschillende hardwarecomponenten te bedienen en vrijwel geen limieten op vlak van software en lay-out. 

In de interface werd ook de optie voorzien om de naam van de hond in te stellen en om te kiezen tussen (deels) automatische of manuele bediening.

4. **De hartslagcomponent**

De hartslagcomponent wordt puur vormelijk uitgewerkt, aangezien we binnen onze mogelijkheden niet de technologie hebben om de hartslag van dieren te kunnen meten. Uit eerdere testen bleek dat de meningen van gebruikers sterk verdeeld waren wanneer het ging over harnas vs halsband. Er werd toen de beslissing genomen om te werken met een hartslagcomponent die op de hondenwearable bevestigd kan worden in plaats van met een een volledige halsband of harnas. 

5. **De Rotary Encoder**

Om de hartslag toch na te kunnen bootsen werd er gewerkt met een Rotary Encoder Module waaraan de interviewer achter de schermen draait om de hartslag te veranderen op de interface. De encoder werkt met een Arduino en een HC-05 Bluetooth module om de hartslag naar de Raspberry Pi te sturen. Zo kan de hartslag live geüpdatet worden op de interface. Op basis hiervan bewegen er pijlen of verandert er tekst.

### Resultaten

#### Onderzoek Hartslag

In bijlage is een uitgebreid rapport te vinden. Hier de belangrijkste elementen:

- Hoe kan de hartslag van een hond gemeten worden?
Er zijn verschillende halsbanden op de markt die succesvol de hartslag van honden meten. Een allesomvattend voorbeeld is de PetPace. Deze meet de hartslag van de hond door middel van akoestische sensoren. 

- Hoe wordt stress gedetecteerd door hartslagmeting?
Stress in honden is niet enkel te bepalen door middel van hartslagmeting. Het is belangrijk om ook andere vitale gegevens en gedrag te meten zodat een nauwkeurig beeld kan gevormd worden. Andere tekenen van stress zijn hartslagvariabilieit (HRV), transpiratie en lichaamshouding. Ook leeftijd, grootte, gewicht, geslacht en medische aandoeningen hebben een impact op de stressniveaus van honden.

- Welke rol speelt beweging om tot een accuraat resultaat te komen?
Een verhoogde hartslag kan te wijten zijn aan aan lichamelijke activiteit, opwinding, ziekte en medicatie. Een verhoogde hartslag betekent dus niet meteen dat de hond gestresseerd is. Naast het meten van hartslag is het dus ook aangeraden om beweging te meten om fysieke activiteit uit te sluiten bij een verhoogde hartslag.

- Hoe verandert de hartslag tussen honden onderling?
De hartslag van een hond verschilt per ras en grootte van een hond. Kleine rassen: 100-140 BPM, Middelgrote tot grote rassen: 60-100.

- Hoe kan gedetecteerd worden wanneer de hond slaapt?
De hartslag van een hond kan bij het slapen dalen tot zelfs 30-40 BPM.

Het is dus belangrijk om alle honden niet over dezelfde kam te scheren en hond per hond te gaan bepalen welke factoren kunnen bijdragen tot verhoogde tekenen van stress.

#### Usability Testing (n=6)

**Dispenser**

![image](https://github.com/user-attachments/assets/0a4f91db-b643-4db1-94a5-c270dd1de5e1)

Alle testpersonen vonden de vormgeving van de dispenser neutraal en stijlvol. Het past in zowat elk huishouden. Een puntje van kritiek was wel dat hij te groot is voor het eerder kleine reservoir dat erin gaat. Volgens één van de respondenten ligt het probleem vooral in de diepte.
Er werden manieren uitgewerkt om de dispenser compacter te maken:
- De reden dat de dispenser iets dikker is, is omdat er aan de achterkant van het reservoir een stappenmotor zit die de tienhoekige cilinder aandrijft om zo het rad te doen draaien. Deze overbodige ruimte kan bespaard worden door met tandwielen te werken en de motor naast het reservoir te plaatsen. Zo wordt het vulbakje aangedreven door een motor die aan de zijkant zit, waardoor de ruimte in de dispenser optimaal benut wordt.

![image](https://github.com/user-attachments/assets/a7d45dca-03ec-409b-90ae-791442c7f847)

- Iemand had ook het interessante idee om verschillende groottes van dispensers te maken. Kleine honden hebben een kleiner reservoir nodig, zo kan de grootte zo beperkt mogelijk blijven.

Het drukmechanisme om de snoepjes bij te vullen bleek moeizaam te gaan. Enkele van de respondenten begrepen niet meteen dat ze moesten duwen, ondanks de "push" boodschap op het rad. Wanneer ze toch duwden kwam het bakje er moeizaam uit. Er zijn enkele verklaringen waarom dit zo is: 
1. Het reservoir is niet helemaal verzonken in de behuizing van de dispenser. De rand van de dispenser steekt net uit boven het vlak, waardoor mensen het hier vastnemen en zo verwijderen uit de behuizing. Als deze meer verscholen zou zijn, zou de gebruiker op zoek gaan naar een andere manier en zou het duwmechanisme intuïtiever gebruikt kunnen worden.
2. Het woord “PUSH” zou duidelijker aanwezig kunnen zijn op de dispenser. Momenteel staat het gegraveerd op het rad, maar het kan duidelijker gemaakt worden door het in een andere kleur te schrijven of groter en zichtbaarder te plaatsen.
3. Het is van nature intuïtiever om de doos eruit te halen zonder te drukken. Men gaat hier niet meteen aan denken. 

Een andere optie is om het gehele duwmechanisme overboord te gooien en een stap terug te zetten naar de vorige wave. Hier was het duwmechanisme gekozen boven het uithaalbare mechanisme omdat de gebruiker dit leuker en simpeler vond. Nu blijkt dat het duwmechanisme minder intuïtief is. Een combinatie van de huidige vormgeving en het uithaalmechanisme van de vorige wave zou een oplossing kunnen zijn voor het probleem.
Er zou dan gewerkt worden met een handvat dat centraal op het deksel zit. De doos zou gepositioneerd worden met zijwaartse groeven en door een pin-mechanisme zou ook het rad beter gealigneerd worden. 

**Speelgoed**

Op het speelgoed was vormelijk weinig op aan te merken. Voorlopig is het speeltje nog heel conceptueel. Het werkte genoeg om een demonstratie te doen, maar het is nog ver van werkend. 

Het is een feit dat dergelijke speeltjes niet alle honden zullen boeien, zoals bleek uit de interviews. Voor de optimale werking van het product is het wel een vereiste dat zowel snoepjes als speelgoed een effect hebben op de gemoedstoestand van een hond. Het is geen goed idee om enkel met snoepjes te werken, want dan wordt de hond steeds beloond wanneer die stress heeft. Het speeltje zorgt voor de nodige onafhankelijke afleiding, die minder als beloning wordt gezien door de hond.

Voorheen werd ook al aangetoond dat beweging stress vermindert bij honden. Dit maakt interesse in het speelgoed nog belangrijker

In de toekomst kan nagedacht worden over manieren om honden te entertainen, ook al zijn ze niet geïnteresseerd in bewegende speeltjes. Dit kan bijvoorbeeld door een ander soort add-on.

Er kunnen ook verschillende soorten speelgoedjes beschikbaar zijn mocht de hond het eerst al beu zijn of nood hebben aan verandering.

**Halsband**

Er werd unaniem gekozen om het bakje dat de hartslag en beweging meet afzonderlijk mee te verkopen. Alle honden en baasjes verschillen, ook hun smaak van halsband of harnas. Door het bakje apart te verkopen kan het baasje deze zelf vastmaken aan hun halsband en is de drempel ook minder groot om het product te gebruiken. 

Daar komt opnieuw een design challenge bij kijken, namelijk het ontwerpen van een bakje dat stevig vastzit op eender welke halsband. 
De hartslagcomponent werd door één van de respondenten ervaren als lastig te monteren. Dit werd nu gedaan door twee schroeven, maar kon op een betere en gebruiksvriendelijkere manier. Volgens de respondent zou een systeem met één schroef of zelfs zonder schroeven beter zijn.
Dit kan in een volgende fase beter uitgewerkt worden. 

**Interface**

De interface werd als zeer inuïtief en proper ervaren. Alleen met het wegklikken van het menu hadden veel van de respondenten moeite. 

De optie om automatische, deels automatische of manuele bediening te kiezen vonden alle respondenten een meerwaarde. Wel kwam hierbij opnieuw het probleem van negatief aangeleerd gedrag naar boven. Bij automatische beloningen zou de dispenser eigenlijk vooraleer de hond effectief stress heeft al een snoepje moeten geven. 

**Uitbreidingen** 

Er waren enkele suggesties om het product uit te breiden om bijkomende problemen te behandelen:

- Eén van de respondenten haalde het idee van aangeleerd gedrag aan: de hond met bepaalde seintjes naar de dispenser roepen en eerst leren zitten of ander goed gedrag te vertonen. Dit door het analyseren van lichaamstaal van de hond en de juiste timing van het geven van een snoepje. Zo zou het systeem bijna als een soort hondenoppas kunnen dienen die de hond leert zich goed te gedragen wanneer die alleen is. De respondent zag het systeem sowieso meer als een soort trainingsysteem voor puppy's om hen te leren alleen thuis te zijn.
- Ook kwamen de vragen of er bijgehouden kan worden hoeveel de hond geblaft om zeker te zijn dat het geen last is voor de buren. Er zit al een functie in het product waarbij je meldingen kan ontvangen wanneer de hond blaft. Een overzicht van de hoeveelheid blaffen is nog niet aanwezig.
- Over de praatfunctie van de interface waren de meningen sterkt verdeeld. Sommigen waren ervan overtuigd dat het hun hond volledig van de kaart zou brengen moest hij plots uit het niets de stem van zijn baasje horen. Anderen vonden dit juist één van de beste features. 
- Ook zouden ze willen weten hoe lang de hond stress heeft ervaren die dag. Door middel van een grafiek zou dit visueel de gebruiker kunnen informeren over de dag van hun hond

De laatste suggestie zal nu worden toegepast op de app. Het is inderdaad handig om een overzicht te hebben van de stress doorheen de dag.
De andere suggesties worden meegenomen en kunnen later nog toegevoegd worden als uitbreiding op het product.


### Conclusies & implicaties

Uit de gebruikerstesten zijn enkele goede design implicaties gekomen die worden meegenomen in de toekomst:

Design implicaties voor stressmeting:
- Aangezien stress meten lastig is en van veel factoren afhangt kan er een self learning periode zijn, waarin het systeem de hond beter leert inschatten. Het baasje kan dan zelf aangeven wat de redenen zijn van de verhoogde hartslag zodat het systeem deze oorzaken kan uitsluiten wanneer het baasje er niet is.

Design implicaties voor de dispenser:
- De dispenser minder diep maken door de motor naast het vulbakje te plaatsen en te werken met tandwielaandrijving om het rad te doen draaien.
- Verschillende groottes van dispensers maken voor kleinere honden die bijgevolg kleinere snoepjes krijgen. Zo wordt de dispenser niet onnodig groot.
- Afstappen van het drukmechanisme en kiezen voor het intuïtievere uithaalmechanisme van de vorige wave.
- Vormelijk wordt de dispenser behouden zoals hij is.
- Het belonen van gestresseerd gedrag moet vermeden worden, dus het is ook belangrijk om snoepjes te geven wanneer ze rustig zijn.

Design implicaties voor het speeltje:
- Doordat niet alle honden geïnteresserd zijn in bewegende speelgoedjes moet ofwel de doelgroep beperkt worden of een manier gevonden worden om honden te entertainen die niet reageren op speeltjes.
- Vooral het speelgoed moet zorgen voor het verminderen van stress.
- Als bedrijf verschillende soorten speelgoed verkopen voor varriatie.

Design implicaties voor de halsband:
- Het bakje wordt niet verkocht met bijhorende halsband, maar apart.
- Het bakje moet passen op verschillende soorten halsbanden.
- Er moet een simpelere en gebruiksvriendelijkere manier zijn om het bakje te bevestigen aan de halsband van de hond.

Design implicaties voor de interface:
- De interface wordt stilistisch behouden
- De praatfunctie blijft behouden voor de gebruikers die hierin geïnteresseerd zouden zijn
- Er wordt een extra functie toegevoegd, namelijk een grafiekje waarop de stressniveaus van de hele dag te zien zijn.

Mogelijke uitbreidingen die in de toekomst kunnen worden toegevoegd:
- Het aanleren van enkele kunstjes door het analyseren van lichaamstaal en de juiste timing van een snoepje
- Een overzicht van hoe vaak en hoe luid de hond blaft zodat de buren zich niet ergeren.

> [!IMPORTANT]
> Design Requirements:
> - D1.7 Er moeten ook snoepjes gegeven (kunnen) worden wanneer de hond rustig is
> - D2.5 De hartslagcomponent moet op elk soort halsband of harnas te bevestigen zijn
> - D2.6 De hartslagcomponent moet zo eenvoudig mogelijk op de halsband te bevestigen zijn
> - D3.10 Op de interface moet te zien zijn hoe lang de hond stress heeft gehad die dag
> - D4.14 De dispenser moet zo klein mogelijk zijn, vooral in de diepte
> - D5.2 Er moeten verschillende soorten speelgoed beschikbaar zijn naargelang de hond

## Conclusie

### Slotbevindingen
#### Interface

De gebruiker zal de interface krijgen in de vorm van een app op zijn smartphone. Deze wordt zo intuïtief mogelijk gemaakt met aandacht voor de User Experience. Belangrijk is dat de gebruiker snel te weten komt wat hij moet weten wanneer hij de app opent en dat hij er een goed gevoel bij krijgt. Op deze app kan de gebruiker een speeltje aanzetten, een snoepje geven, de home-camera bekijken en met zijn hond praten. Hiernaast moet de gebruiker enkele eenvoudige statistieken kunnen raadplegen en instellen of hij manuele of (deels) automatische bediending wilt. Alsook moet hij de grootte van de hond kunnen ingeven, aangezien dit een effect heeft op het stresslevel.

#### Dispenser

![image](https://github.com/user-attachments/assets/d6fafb4e-e460-4de0-b7db-2e4ee39494e6)

De dispenser zal de camera zelf bevatten. Alsook zal hij al dan niet automatisch snoepjes geven aan de hond. De dispenser zal de meer lamp-achtige vormgeving uit de tweede Develop fase krijgen zodat hij mooi opgaat in het interieur. Om de snoepjes in de dispenser te steken of om het vulbakje te wassen, zal er gewerkt worden met een in- en uitlaadsysteem waarbij het vulbakje met een handvat uit de dispenser gehaald kan worden en vervolgens worden opgedraaid om het rad eruit te halen of bij te vullen. Hoewel dit idee eerst achterwege gelaten werd, is er toch besloten het positioneermechanisme uit de tweede Develop Fase te gebruiken om het gebruiksgemak te optimaliseren.

#### Speelgoedje

Het interactief speeltje wordt bediend door de app en zal in verschillende maten aangeboden worden. Belangrijk is dat het taai genoeg is om door de hond gebruikt te worden zonder beschadiging.

#### Hartslagcomponent

De hartslagcomponent moet zowel de hartslag als de beweging van de hond meten en idealiter ook het blaffen. Deze wordt bevestigd op de halsband of het harnas van de hond en stuurt deze gegevens door naar de interface. Het bevestigen van de wearable moet zo eenvoudig mogelijk zijn, maar zonder dat de hond het los kan krijgen.

### Design Requirements

| ID | Design Requirement | Source | Date |
| :---: | :--- | :---: | :---: |
| **Groep 1** | **Algemeen** |          |         |
| 1.1 | Het systeem moet een camerafunctie hebben | Concept Testing | 14/12/2024 |
| 1.2 | Er moeten beloningen kunnen worden gegeven | Concept Testing | 14/12/2024 |
| 1.3 | Er moet een speeltje geactiveerd kunnen worden, d.w.z dat het automatisch begint te bewegen | Concept Testing | 14/12/2024 |
| 1.4 | Het stresslevel van de hond moet gemeten kunnen worden | Enquête | 15/11/2024 |
| 1.5 | Het stresslevel van de hond moet live te raadplegen zijn | Concept Testing | 14/12/2024 |
| 1.6 | Het logo moet zowel klasse als warmte uitstralen | Usability Testing | 24/04/2025 |
| 1.7 | Er moeten ook snoepjes gegeven (kunnen) worden wanneer de hond rustig is | Usability Testing | 21/05/2025 |
|   |   |   |   |
| **Groep 2** | **Hartslagcomponent** |          |         |
| 2.1 | De wearable moet de hartslag van de hond meten | Desk Research | 15/11/2024 |
| 2.2 | De wearable moet de beweging van de hond meten | Desk Research | 15/11/2024 |
| 2.3 | De wearable moet de gemeten variabele(n) doorgeven naar de interface | Enquête | 15/11/2024 |
| 2.4 | De wearable moet een harnas en/of halsband zijn | Concept Testing | 14/12/2024 |
| 2.5 | De hartslagcomponent moet op elk soort halsband of harnas te bevestigen zijn | Concept Testing | 21/05/2025 |
| 2.6 | De hartslagcomponent moet zo eenvoudig mogelijk op de halsband te bevestigen zijn | Concept Testing | 21/05/2025 |
|   |   |   |   |
| **Groep 3** | **Interface** |          |         |
| 3.1 | De interface moet de aanwezige componenten bedienen | Enquête | 15/11/2024 |
| 3.2 | De interface moet meldingen kunnen sturen naar de gebruiker | Concept Testing | 14/12/2024 |
| 3.3 | De interface moet de optie geven om meerdere honden toe te voegen | Concept Testing | 14/12/2024 |
| 3.4 | De gebruiker moet zelf kunnen kiezen welke meldingen hij wilt ontvangen | ESM-Testing | 08/01/2025 |
| 3.5 | De gebruiker moet zelf kunnen kiezen of de dispenser automatisch beloningen mag geven of niet | ESM-Testing | 08/01/2025 |
| 3.6 | De gebruiker moet een bepaalde tijdspanne tussen automatische beloningen kunnen instellen | ESM-Testing | 08/01/2025 |
| 3.6 | De gebruiker moet via een simpele knop op de interface het product kunnen activeren | ESM-Testing | 08/01/2025 |
| 3.7 | Op de interface moeten enkele eenvoudige statistieken te zien zijn | Usability Testing | 13/03/2025 |
| 3.8 | Op de interface moeten belangrijkste functies meteen vanop het beginscherm te bedienen zijn wanneer het baasje van huis is | Usability Testing | 13/03/2025 |
| 3.9 | Er moet een duidelijk vormelijk verschil zijn op de interface nadat het baasje op de vertrekknop drukt | Usability Testing | 13/03/2025 |
| 3.10 | Op de interface moet te zien zijn hoe lang de hond stress heeft gehad die dag | Usability Testing | 21/05/2025 |
|   |   |   |   |
| **Groep 4** | **Dispenser** |          |         |
| 4.1 | De dispenser moet beloningen kunnen geven | Concept Testing | 14/12/2024 |
| 4.2 | De dispenser moet met verschillende beloningen gevuld kunnen worden, waaronder iets gezond | Concept Testing | 14/12/2024 |
| 4.3 | De dispenser moet esthetisch zijn | Concept Testing | 14/12/2024 |
| 4.4 | De dispenser moet snel bij te vullen zijn | Concept Testing | 14/12/2024 |
| 4.5 | De dispenser moet een geluidje kunnen maken wanneer het een beloning geeft | Concept Testing | 14/12/2024 |
| 4.6 | De dispenser moet uitgerust zijn met een camera | Concept Testing | 14/12/2024 |
| 4.7 | De dispenser moet uitwasbaar zijn | Concept Testing | 14/12/2024 |
| 4.8 | De dispenser moet weersbestendig zijn voor buitengebruik | ESM-Testing | 08/01/2025 |
| 4.9 | Het bijvullen van de dispenser moet op een intuïtieve, ergonomische manier kunnen gebeuren | Usability Testing | 13/03/2025 |
| 4.10 | Er moeten genoeg constraints op de dispenser aanwezig zijn om foutief gebruik te vermijden | Usability Testing | 13/03/2025 |
| 4.11 | De vormgeving van de dispenser moet zijn werking duidelijk maken | Usability Testing | 13/03/2025 |
| 4.12 | De dispenser moet neutraal genoeg zijn om in vrijwel elk woonkamerinterieur op te gaan | Usability Testing | 24/04/2025 |
| 4.13 | De dispenser moet op batterijen werken | Usability Testing | 24/04/2025 |
| 4.14 | De dispenser moet zo klein mogelijk zijn, vooral in de diepte | Usability Testing | 21/05/2025 |
|   |   |   |   |
| **Groep 5** | **Speeltje** |          |         |
| 5.1 | Het speeltje moet taai genoeg zijn  | Concept Testing | 14/12/2024 |
| 5.2 | Er moeten verschillende soorten speelgoed beschikbaar zijn naargelang de hond | Usability Testing | 21/05/2025 |


## Kritische reflectie 

**Semester 1**

Hoewel het een spannend gegeven was, was het een goede keuze om de **pivot** te maken. De angst om een hond alleen te laten is een probleem waar veel mensen zich in kunnen vinden en met een grote impact op het leven. Het nieuwe concept kwam met vele nieuwe discussies en uitdagingen. Er moest namelijk een hele nieuwe probleemruimte onderzocht worden. 

Via benchmarking, desk research en een enquête werd onderzocht wat er al op de markt is en vooral wat nog niet. We zagen dat veel van de technologieën die we graag zouden opnemen in ons concept al bestonden. De combinatie ervan echter nog niet. Dit maakte de benchmarking cruciaal.

De enquête had vooral het doel om te onderzoeken of er vraag naar het concept zou zijn en om de noden van de potentiële gebruikers te identificeren. Daarnaast vroegen we op het einde of we hen mochten contacteren voor verdere testen. Hoewel we samen genoeg hondenbaasjes kenden via familie of vrienden kozen we ervoor om het op deze manier te doen om uit onze comfortzone te gaan en te werken met mensen die we niet kennen.

In de definition fase gingen we met deze mensen aan de slag. Hoewel 40% van de respondenten zei dat we hen mochten contacteren was het toch extreem moeilijk om effectief afspraken te maken. Eerst moesten de mensen gefilterd worden: mensen die geen problemen ervaren met hun hond alleen thuislaten of die heel erg ver wonen waren natuurlijk niet interessant. Uiteindelijk zijn er een 20-tal mensen gecontacteerd, waarvan slechts 2 wilden deelnemen. 

Bij de tweede test (vanop afstand) konden we de locatiefactor ook achterwege laten en een grotere groep mensen contacteren. Toch hebben uiteindelijk slechts 3 mensen deelgenomen. Dit was tijdens het eerste semester de grootste uitdaging voor ons: de combinatie van het managen van een designproces en het rekruteren van respondenten. Natuurlijk wel een zeer leerrijk gegeven. 

**Tweede semester**

In het tweede semester kozen we ervoor om de testen steeds met kennissen uit te voeren, dit om niet te veel tijd te verliezen met het rekruteren van mensen. Wel probeerden we steeds te variëren met respondenten. In de laatste Develop fase werd er nogmaals gewerkt met onbekenden om een goed gevarieerde en neutrale testing pool te hebben. 

De grootste uitdaging in het tweede semester lag bij het bepalen van de stijl en lay-out van de interface. Dit was een groot onderwerp in meerdere testfases en werd nooit eenduidig beantwoord. We merkten dat het grote probleem lag bij het vinden van een geschikt kleurenpalet. Toen we dit uiteindelijk vonden (aan de hand van een al bestaande app) slaagden we er wel in een app lay-out en stijl te bekomen waar we zelf trots op kunnen zijn en die de respondenten ook aansprak. 

Een andere grote uitdaging lag bij het effectief prototypen van het systeem. In de eerste Develop fase slaagden we erin om de dispenser met een arduino te besturen en met een interface of Protopie commando's te sturen. Maar wanneer in verdere fases het speeltje ook fysiek uitgewerkt werd, bleek dit niet meer voldoende. Er werd toen gekozen om met een interface op een Raspberry Pi te werken die enkele Arduino componenten aanstuurt, maar we hebben onderschat hoeveel werk dit met zich mee zou brengen. 

Toch besloten we hiermee verder te gaan. Dit om de respondenten een zo goed mogelijk beeld van het finaal concept te kunnen geven. Ook was het interesant voor ons om met deze technieken te leren werken.

**Volgende stappen** zouden zijn om de finale dispenser fysiek te prototypen. Daarna kan naar het werkelijke product gekeken beginnen worden en hoe het op de markt zou komen: de technologie achter de app, de elektronica in de dispenser en het speeltje. De effectieve materialen. Voor het halsbandje zou het een goed idee kunnen zijn om een al bestaande partner te vinden in de wereld van dierengeneeskunde die dit soort bandjes of componenten produceert. 
Op vlak van veiligheid moeten er ook nog enkele stappen ondernomen worden. Het is een product met een camera in huis en het houdt veel data bij. Daarom is het belangrijk om de gegevens goed te beveiligen.

Ook zou het algoritme om automatisch snoepjes en speeltjes te geven uitgewerkt moeten worden. Daarnaast moet er nagedacht worden over materiaalkeuzes en de verschillende vormgevingen/groottes van de speeltjes ofwel om bestaande, op de markt verkrijgbare speeltjes te kunnen aansturen vanuit de app. 

Tot slot is er nog veel mogelijkheid om later nieuwe functies aan het product toe te voegen zoals aangeleerd gedrag, de optie om snoepjes over te slaan, verschillende dispensergroottes, etc.

## Technische Beschrijving

### Dispenser + Interface
#### Bill of Materials
- 3D printer (+wit filament)
- Multiplex 8mm platen
- Witte verf
- 2 scharnieren
- Kleine schroeven
- Deksel van Multikom Cirqula vershouddoos €8,99
  -> https://www.bol.com/nl/nl/p/mepal-multikom-cirqula-vershouddoos-750-ml-rond-nordic-sage/9300000118607224/?bltgh=rZQon1BF6EJuQLlerehL6Q.6_24.54.ProductImage
- 5V 28BYJ-48 Stappenmotor
- ULN2003AN Stepper Motor Driver Board
- 9V batterij
- 9V batterij clip aansluiting
- SD kaart
- Raspberry Pi 5 4GB €71,95
  -> https://www.raspberrystore.nl/PrestaShop/nl/raspberry-pi-5/507-raspberry-pi-5-4gb-5056561803319.html
- Raspberry Pi Officiële behuizing €11,95
  -> https://www.raspberrystore.nl/PrestaShop/nl/raspberry-pi-5/509-officiele-behuizing-voor-de-raspberry-pi-5-wit-5056561803340.html
- Raspberry Pi Raspberry Pi 27W USB-C Power Supply €13,95
  -> https://www.raspberrystore.nl/PrestaShop/nl/raspberry-pi-5/511-raspberry-pi-27w-usb-c-power-supply-wit-eu-voor-raspberry-pi-5-5056561803401.html
- Raspberry Pi Camera Module V2 €16.93
  -> https://www.kiwi-electronics.com/en/raspberry-pi-camera-module-2-8mp-2359?src=raspberrypi
- Raspberry Pi Camera Cable Standard-Mini 200mm
  -> https://www.kiwi-electronics.com/en/raspberry-pi-camera-cable-standard-mini-200mm-11588?ff1=32&search=raspberry%20pi%20camera%20cable
- Male to female jumper wires

#### Build instructions + code

Onder cad/dispenserwave3 zijn de cad files terug te vinden van het laatst ontworpen prototype. Onder cad/dispenserfinaal zijn de cad files zijn de cad files van het finaal prototype, wat niet meer fysiek gerealiseerd is kunnen worden. 

De simpele platen van de behuizing werden gemaakt uit witgeschilderde multiplex. De meer complexe componenten werden geprint met een 3D printer. Hetzelfde zou gelden voor het finale protoype. Het deurtje van de dispenser wordt met scharnieren bevestigd.

De interface werd uitgewerkt op de Raspberry Pi 5, alle code en afbeeldingen zijn te bekijken onder code/Raspberry Pi. De Pi werd in de dispenser gepositioneerd om rechtstreeks de stappenmotor aan te kunnen sturen. De stappenmotor werd geconnecteerd aan de ULN2003AN Stepper Motor Driver. Deze werd gevoed door de 9V batterij en kreeg signalen van de Raspberry Pi.

### Bewegend botje
#### Bill of Materials
- 3D printer (+filament)
- Resthout minstens 10mm dik
- 2x 6VDC 250mA DC motor
  -> https://www.beslist.be/p/klussen/nl-nl-gold-5410329401238/?productId=rxegzqmugucX69N7EXoH5YLmHpn&utm_medium=paid-search&utm_source=google-shopping&utm_campaign=PLA%2FElektra_b%7C71700000121906529%7CPLA%2FElektra_b%7C58700008881582159&device=c&productid=BE-nl-nl-gold-5410329401238&gad_source=1&gad_campaignid=21117295171&gbraid=0AAAAADred45CxD9uD6DK45hXSt7cR0-z4&gclsrc=aw.ds
- L298N motor driver panel
- Arduino Mega 2560 + kabel
- HC-05 Bluetooth Module
- 3x 9V batterij
- 3x 9V batterij clip aansluiting
- Slide switch (Arduino)
- Male to female jumper wires
- Male to male jumper wires
- Breadboard
- 1700ohm weerstand
- 1000ohm weerstand
- 2000ohm weerstand

#### Build instructions + code

De cad file van het botje is te zien onder cad/speeltje. Dit bestaat volledig uit 3D prints. Om de motors vast te zetten in het midden van de behuizing werd resthout gebruikt waarin een gat gemaakt werd voor de motor. De elektronica bestaat uit een Arduino waarop een L298N motor driver is aangesloten. Deze wordt appart gevoed met twee 9V batterijen en stuurt twee 6V DC motoren aan. De Arduino zelf wordt gevoed met één 9V batterij die met de Arduino VIN en GND verbonden is. Tussen de batterij en de VIN van de Arduino wordt de switch geplaatst om het geheel uit te kunnen zetten.

Er wordt ook een HC-05 bluetooth module aangesloten op het geheel. Deze wordt via bluetooth geconnecteerd met de Pi en ontvangt signaal wanneer het speeltje geactiveerd moet worden. Omdat de RX pin van de bluetooth module op 3.3V logica werkt en de rest van de module op 5V, wordt er simpele spanningdeler met enkele weerstanden gemaakt. De 1k en 2k weerstand in serie verbinden de RX pin van de HC-05 met de GND. De 1700ohm weerstand verbind deze pin met de Arduino. Arduino code is te vinden onder code/Arduino/Botje/Speeltje. 

Op de Raspberry Pi moet connectie worden gemaakt met de bluetooth module door eerst volgende commando's te runnen:

*bluetoothctl*

*power on*

*agent on*

*scan on*

Na een tijdje verschijnt er een apparaat van de vorm: xx:xx:xx:xx:xx:xx HC-05

*pair xx:xx:xx:xx:xx:xx*

*trust xx:xx:xx:xx:xx:xx*

*exit* 

Volgend commando moet telkens ingegeven worden bij reboot van de Pi om te connecteren:

*sudo rfcomm bind /dev/rfcomm1 xx:xx:xx:xx:xx:xx*

### Hartslagcomponent + Rotary Encoder (om hartslag na te bootsen)
#### Bill of Materials
- 3D printer (+filament)
- 2 kleine schroeven
- Arduino nano + kabel
- KY-040 Rotary Encoder Module
- HC-05 Bluetooth Module
- Breadboard
- Male to female jumper wires
- Male to male jumper wires
- 1700ohm weerstand
- 1000ohm weerstand
- 2000ohm weerstand

#### Build instructions + code

De hartslagcomponent bestaat simpelweg uit een 3D print met twee schroeven, cad is te vinden onder cad/wearable. Dit wordt op een halsband of harnas bevestigd.

De Rotary encoder is aangesloten op een Arduino nano. Deze wordt gevoed met de computer via USB kabel. Ook hier is een HC-05 Bluetooth module aangsloten op de arduino. Opnieuw met de spanningsdeler zoals beschreven onder het botje. Hier wordt de component gebruikt om informatie naar de Pi te sturen. De code is te vinden onder code/Arduino/RotaryEncoder.

Om de HC-05 te connecteren met de Raspberry Pi moeten dezelfde commando's als onder het botje beschreven ingevoerd worden in de terminal. Alleen bij het connecteren moet ervoor gezorgd worden dat de component met een andere poort geconnecteerd wordt:

*sudo rfcomm bind /dev/rfcomm0 xx:xx:xx:xx:xx:xx*
  
## Bronnen
Edwards, P. T., Smith, B. P., McArthur, M. L., & Hazel, S. J. (2022). At the heart of a dog’s veterinary experience: Heart rate responses in dogs vary across a standard physical examination. Journal Of Veterinary Behavior, 51, 23–34. https://doi.org/10.1016/j.jveb.2022.03.003

Je hond alleen laten, een do or don’t? (2024). In Google Docs. Geraadpleegd op 31 december 2024, van https://docs.google.com/forms/d/1ZDiT8_8pnym8M0XBOA77kd1AUh20fJ3jgVTxuHNL57U/edit#responses

Kim, Y., Lee, J., El-Aty, A. A., Hwang, S., Lee, J., & Lee, S. (2010, 1 april). Efficacy of dog-appeasing pheromone (DAP) for ameliorating separation-related behavioral signs in hospitalized dogs. https://pmc.ncbi.nlm.nih.gov/articles/PMC2839826/

Pheromones for Dogs: What Are They & How Do You Use Them? | Bond Vet. (2023, 6 oktober). Bond Vet. Geraadpleegd op 20 november 2024, van https://bondvet.com/b/pheromones-for-dogs

Signs Your Dog is Stressed and How to Relieve It  | VCA Canada Animal Hospitals. (z.d.). VcaCanada. https://vcahospitals.com/know-your-pet/signs-your-dog-is-stressed-and-how-to-relieve-it

Stressed Out dog: 10 Ways to Ease Their Stress - Diggs. (2021, 2 december). Geraadpleegd op 30 december 2024, van https://www.diggs.pet/blog/pet-parenting/ease-your-stressed-out-dog/

Top Dog Professional Training. (2019, 6 september). Laser Pointers and Dogs. DON’T DO IT! [Video]. YouTube. Geraadpleegd op 20 november 2024, van https://www.youtube.com/watch?v=A-rKI10Zzqo

Weir, M. W., & Buzhardt, L. B. (2021). Signs Your Dog is Stressed and How to Relieve It  | VCA Animal Hospitals. Vca. Geraadpleegd op 30 december 2024, van https://vcahospitals.com/know-your-pet/signs-your-dog-is-stressed-and-how-to-relieve-it


## Bijlagen

#### Discovery
- [Protocol Desk Research](https://drive.google.com/open?id=12NoSPLVdtqdJvY9GGp3hxP2CgzPXKmhn7qTBTSI8jzo&usp=drive_copy)
- [Rapport Desk Research](https://drive.google.com/open?id=1nwAojQh_iuqRsD4tWcjPdfd3RWFngSalvPzl8VSPMy8&usp=drive_copy)
- [Protocol Enquête](https://drive.google.com/open?id=1HmJS_FUbtiWwMl9GDVSUkFMg1g5jXy9eZN2ppk55EnM&usp=drive_copy)
- [Rapport Enquête](https://drive.google.com/open?id=1KBX2Eb1pT8rqreE2QZYYUB29RSH8C9AHngRhWPiVAmU&usp=drive_copy)

Documenten vorige doelgroep:
- [Protocol Interview Hondenangst](https://drive.google.com/open?id=1zZneJo5kH-Q7wN455WCUAMYRw7pHSGI2z7Pq_jXhClo&usp=drive_copy)
- [Rapport Interview Hondenangst](https://drive.google.com/open?id=1QnPZ1St09KmCzzjZ3P4mOhKraC_8iDDg6yY-tCSVShM&usp=drive_copy)
- [Protocol Literatuuronderzoek Agressie in Honden](https://drive.google.com/open?id=1vmsakiGM8-fPnucMtHcgnxS1Q0aaKagbW9WcryPoZKI&usp=drive_copy)
- [Rapport Literatuuroderzoek Agressie in Honden](https://drive.google.com/open?id=1vKehdKbhXgFpB10Dc2ouAJcSDHj97Kox1RxfLqvWKpc&usp=drive_copy)

#### Definition 
- [Research Protocol 1](https://docs.google.com/document/d/1mzSSf0l2kdn71YcoD3Gg5qnMDdDey4W6/edit?usp=drive_link&ouid=100698554298463412541&rtpof=true&sd=true)
- [Research Rapport 1](https://docs.google.com/document/d/1yilQ9UefsVjzdvXC7VtW43EICEz5C_KJ/edit?usp=drive_link&ouid=100698554298463412541&rtpof=true&sd=true)
- [Research Protocol 2](https://docs.google.com/document/d/1mzSSf0l2kdn71YcoD3Gg5qnMDdDey4W6/edit?usp=drive_link&ouid=100698554298463412541&rtpof=true&sd=true)
- [Research Rapport 2](https://docs.google.com/document/d/1i0SzPUXlemCXr5KHv018eJ6AVTDwXglVgw03eN1zgNI/edit?usp=drive_link)

#### Develop 1
- [Protocol Develop 1](https://docs.google.com/document/d/1bwEKUesbhoMMZ5bdV68p_Ag0vcrsMxFo/edit)
- [Rapport Develop 1](https://docs.google.com/document/d/1RSnKgyL_N9MLBn6FppJX8NyqoXoEJKtM/edit)

#### Develop 2
- [Protocol Develop 2](https://docs.google.com/document/d/1zO6E0KBcmWP6ro3-CIrUER94Cl7l1OQ-/edit)
- [Rapport Develop 2](https://docs.google.com/document/d/1nyFvRlF0dW1UbK6vEDtkl61VtpNfXT7T/edit)

#### Develop 
- [Protocol Develop 3](https://docs.google.com/document/d/1P5Liy8avtQsTWkf5Yf6YUlx91ENZ5lRCxGXvamfdQZg/edit?usp=sharing)
- [Rapport Develop 3](https://docs.google.com/document/d/1AUfg_J9o5MB-qxZkwFRa3CUlJl83TYOQ/edit)
