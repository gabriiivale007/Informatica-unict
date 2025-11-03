        ;=================================================================
        ; Lezione 2.2 - Somma degli elementi fino al primo valore negativo
        ;
        ; data : array di interi, terminato da un valore negativo
        ; R1   : puntatore all'array (indirizzo corrente)
        ; R0   : elemento corrente
        ; R2   : somma parziale / somma finale
        ;
        ; Esempio:
        ;   10,20,30,50,50,60,70,20,-4
        ;   Sommo tutti i valori >= 0 e mi fermo quando trovo -4.
        ;=================================================================

data    dcd     10,20,30,50,50,60,70,20,-4   ; ultimo elemento negativo = sentinella

        mov     r1, #data           ; R1 = indirizzo di inizio dell'array
        mov     r2, #0              ; somma iniziale = 0

loop
        ldr     r0, [r1]            ; R0 = elemento corrente *(*R1)

        cmp     r0, #0              ; controllo se è negativo
        blt     end_loop            ; se R0 < 0 esco dal ciclo

        add     r2, r2, r0          ; aggiungo l'elemento alla somma
        add     r1, r1, #4          ; passo all'elemento successivo (prossima word)
        b       loop                ; ripeto il ciclo

end_loop
        ; Qui:
        ;   - R2 contiene la somma di tutti gli elementi >= 0
        ;     letti prima del primo valore negativo