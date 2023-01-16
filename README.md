[Română :romania:](#campionat-de-fotbal)

[English :eu:](#football-league)

# Campionat de fotbal

##### Proiectat în C++, utilizând concepte de „Programare orientată pe obiecte”.
Proiectul prezentat reprezinta un campionat de fotbal in care se regasesc
cateva echipe si meciuri programate. Urmeaza ca noi sa introducem de la tastatura
o noua echipa si sa aflam anumite detalii despre ea, sau sa programam un meci
pentru a verifica daca el este sau nu in calendarul meciurilor.

Echipele din care vom alege vor fi: FC_Arges (4), Farul_Constanta (5), FC_Voluntari (6), FC_Botosani (7),
UTA_Arad (9), Sepsi_Sf_Gheorghe (10) , Chindia_Targoviste (11), FCU_Craiova (12), CS_Mioveni (13), Academica_Clinceni (15),
Gaz_Metan_Medias (16).

Urmatoarele date care vor fi introduse vor reprezenta:

- Numele echipei (string);
- cod echipa; (diferit de 1, 2, 3, 8, 14 < 16)
- numar jucatori; (> 15)
- staff_tehnic; (> 5)
- numar victorii; 
- numar egaluri;
- numar infrangeri;


Pentru ca input-ul sa fie valid, trebuie sa introducem datele dupa instructiunile din paranteze.
Se va verifica daca echipa introdusa de la tastatura nu este deja inscrisa in campionat.


~ verifcod (Clasa Echipa) : verifica daca codul echipei introduse de la tastatura este valid;

~ verifjucatori (Clasa Echipa): verifica daca numarul de jucatori care sunt legitimati la echipa este suficient;

~ verifstaff (Clasa Echipa): verifica daca staff-ul tehnic are suficienti membrii in componenta;

~ calculpuncte (Clasa Echipa): calculeaza cate puncte a acumulat echipa in urma rezultatelor (victorie, egal, infrangere);

- se va compara echipa introdusa de la tastatura cu restul echipelor din punct de vedere al performantei
- se va face diferenta de puncte dintre echipa introdusa si restul
- se vor injumatati rezultatele (inainte de play-off / play-out)

Pentru meciuri vom alege stadioane din urmatoarea lista: National_arena, Ion_Oblemenco, Constantin_Radulescu,
Stefan_cel_Mare, Giulesti.

Urmatoarele date care vor fi introduse vor reprezenta:
- ziua;
- luna;
- anul;
- ora;
- numele stadionului (string);

Pentru ca meciul sa fie programat, vom introduce datele unuia dintre meciurile scrise in main.

Se va verifica daca meciul introdus de la tastatura este sau nu programat in calendar.


# Football league

Designed in C++, using concepts of "Object-Oriented Programming".

The project presented represents a football championship in which some teams and scheduled matches can be found. Next, we will enter a new team from the keyboard and find out certain details about it, or schedule a match to check if it is or is not in the schedule of matches.

The teams from which we will choose will be: FC_Arges (4), Farul_Constanta (5), FC_Voluntari (6), FC_Botosani (7),
UTA_Arad (9), Sepsi_Sf_Gheorghe (10) , Chindia_Targoviste (11), FCU_Craiova (12), CS_Mioveni (13), Academica_Clinceni (15),
Gaz_Metan_Medias (16).

The following data to be entered will represent:

- Team name (string);
- team code; (different from 1, 2, 3, 8, 14 < 16)
- number of players; (> 15)
- technical_staff; (> 5)
- number of wins;
- number of ties;
- number of losses;

For the input to be valid, we must enter the data according to the instructions in parentheses.
It will check if the team entered from the keyboard is not already registered in the championship.

~ verifcod (Team Class) : checks if the code of the team entered from the keyboard is valid;

~ verifjucatori (Team Class): checks if the number of players who are legitimized in the team is sufficient;

~ verifstaff (Team Class): checks if the technical staff has enough members in the composition;

~ calculpuncte (Team Class): calculates how many points the team has accumulated as a result of the results (victory, draw, loss);

- the team entered from the keyboard will be compared to the other teams in terms of performance
- the difference of points between the team entered and the rest will be made
- the results will be halved (before play-off / play-out)

For matches we will choose stadiums from the following list: National_arena, Ion_Oblemenco, Constantin_Radulescu,
Stefan_cel_Mare, Giulesti.

The following data to be entered will represent:
- day;
- month;
- year;
- hour;
- stadium name (string);

For the match to be scheduled, we will enter the data of one of the matches written in main.

It will check if the match entered from the keyboard is or is not scheduled in the calendar.
