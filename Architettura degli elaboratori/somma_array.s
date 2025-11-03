        ;=================================================================
        ; Lezione 2.1 - Somma di tutti gli elementi di un array
        ;
        ; Obiettivo:
        ;   Sommare tutti gli elementi di un array di 6 interi.
        ;
        ; Convenzioni:
        ;   - data: contiene la lista dei valori da sommare
        ;   - R1: puntatore all'array (indirizzo corrente)
        ;   - R0: contatore del numero di elementi rimanenti
        ;   - R2: somma parziale / somma finale
        ;   - R3: registro temporaneo per l'elemento corrente
        ;
        ; Al termine:
        ;   - R2 contiene la somma di tutti gli elementi
        ;=================================================================

data    dcd     10,20,30,50,50,60    ; array di 6 elementi (word)

        mov     r1, #data            ; R1 = indirizzo di inizio dell'array
        mov     r0, #6               ; R0 = numero di elementi da sommare
        mov     r2, #0               ; R2 = somma parziale iniziale = 0

sum_loop
        cmp     r0, #0               ; ho ancora elementi da sommare?
        beq     end_sum_loop         ; se R0 == 0 -> ho finito, esco dal loop

        ldr     r3, [r1]             ; R3 = elemento corrente *(*R1)
        add     r2, r2, r3           ; R2 = R2 + R3 (aggiorno la somma)

        add     r1, r1, #4           ; R1 = R1 + 4 (passo all'elemento successivo)
        sub     r0, r0, #1           ; R0 = R0 - 1 (un elemento in meno da sommare)

        b       sum_loop             ; torna all'inizio del ciclo

end_sum_loop
        ; Qui:
        ;   - R2 contiene la somma finale di tutti gli elementi dell'array.
        ; Puoi aggiungere eventuale codice di fine programma o un loop infinito.