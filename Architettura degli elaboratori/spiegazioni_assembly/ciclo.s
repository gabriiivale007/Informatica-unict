        ;=================================================================
        ; Lezione 1.3 - Simulare un ciclo for / while in Assembly
        ;
        ; Esempio equivalente a:
        ;
        ;   r0 = 0;
        ;   while (r0 < 10) {
        ;       // corpo del ciclo
        ;       r0 = r0 + 1;
        ;   }
        ;
        ; Il registro R0 viene usato come contatore da 0 a 9.
        ;=================================================================

        ; Inizializzo il contatore
        mov     r0, #0          ; r0 = 0

compare
        ; Controllo la condizione del ciclo: r0 < 10 ?
        cmp     r0, #10
        bge     fuori           ; se r0 >= 10 esco dal ciclo

dentro
        ;-------------------------------------------------
        ; Corpo del ciclo
        ; Qui potresti mettere il codice che vuoi ripetere
        ;-------------------------------------------------
        ; Per ora non fa niente, è solo un esempio

        ; Incremento del contatore: r0 = r0 + 1
        add     r0, r0, #1

        ; Torno a controllare la condizione
        b       compare

fuori
        ; Qui arriva il flusso quando il ciclo è terminato
        ; (r0 vale 10 quando esco dal while)
        ; Puoi aggiungere eventuale codice di "fine programma"