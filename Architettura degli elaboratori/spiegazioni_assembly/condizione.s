        ;=================================================================
        ; Lezione 1.1 - Condizioni e salti condizionati (B{cond})
        ;
        ; Esempio:
        ;   Calcolo l'espressione 3 + 4 - 10 + 60 in R0.
        ;   Se il risultato è 57, vado all'etichetta "target".
        ;   Altrimenti imposto R0 a 50.
        ;
        ; Questo mostra come usare CMP + B{cond}.
        ;=================================================================

        ;------------------------------
        ; Tabella (ridotta) condizioni B{cond} in ARM
        ;------------------------------
        ;   EQ -> Z = 1    ; Uguale
        ;   NE -> Z = 0    ; Diverso
        ;   CS/HS -> C = 1 ; >= (non firmato)
        ;   CC/LO -> C = 0 ; <  (non firmato)
        ;   MI -> N = 1    ; Negativo
        ;   PL -> N = 0    ; Positivo o zero
        ;   VS -> V = 1    ; Overflow
        ;   VC -> V = 0    ; Nessun overflow
        ;   HI -> C = 1, Z = 0 ; > (non firmato)
        ;   LS -> C = 0 o Z = 1 ; <= (non firmato)
        ;   GE -> N = V    ; >= (firmato)
        ;   LT -> N ≠ V    ; <  (firmato)
        ;   GT -> Z = 0, N = V ; > (firmato)
        ;   LE -> Z = 1 o N ≠ V ; <= (firmato)
        ;------------------------------

        ;-------------------------------------------------------------
        ; Inizio programma: calcolo 3 + 4 - 10 + 60 in R0
        ;-------------------------------------------------------------

inizio
        ; R0 = 3
        mov     r0, #3

        ; R0 = R0 + 4  -> 3 + 4
        add     r0, r0, #4

        ; R1 = -10 (valore negativo)
        mov     r1, #-10

        ; R0 = (3 + 4) + (-10) -> 3 + 4 - 10
        add     r0, r0, r1

        ; R0 = (3 + 4 - 10) + 60
        add     r0, r0, #60     ; risultato atteso: 57

        ;-------------------------------------------------
        ; if (R0 == 57)  -> vai a target
        ; else           -> R0 = 50
        ;-------------------------------------------------
        cmp     r0, #57         ; confronto R0 con 57
        beq     target          ; se R0 == 57 salta a target

        ; ramo "else"
        mov     r0, #50         ; se non è 57, metto 50 in R0

target
        ; Esempio di codice eseguito quando la condizione è vera:
        ; R0 è già 57 (oppure 50 se siamo passati dall'else),
        ; qui lo incremento solo per vedere qualcosa succedere.
        add     r0, r0, #1      ; R0 = R0 + 1

        ; Torno all'inizio, così la condizione viene rivalutata
        b       inizio