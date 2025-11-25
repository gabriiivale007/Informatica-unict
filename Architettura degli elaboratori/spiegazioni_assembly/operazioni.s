        ;=================================================================
        ; Operazioni aritmetiche di base in ARM
        ;
        ; Obiettivo:
        ;   Calcolare l'espressione: 3 + 4 - 10 + 60
        ;   Il risultato finale (57) viene memorizzato nel registro R4.
        ;
        ; Nota:
        ;   Questo è un semplice esempio per capire come usare:
        ;   - registri come variabili
        ;   - istruzioni ADD e SUB
        ;=================================================================

        ; Carico i valori nei registri (come fossero variabili)
        mov     r0, #3          ; R0 = 3
        mov     r1, #4          ; R1 = 4
        mov     r2, #10         ; R2 = 10
        mov     r3, #60         ; R3 = 60

        ; Uso R4 come registro "risultato"
        ; Passo 1: 3 + 4
        add     r4, r0, r1      ; R4 = R0 + R1  -> 3 + 4 = 7

        ; Passo 2: (3 + 4) - 10
        sub     r4, r4, r2      ; R4 = R4 - R2  -> 7 - 10 = -3

        ; Passo 3: (3 + 4 - 10) + 60
        add     r4, r4, r3      ; R4 = R4 + R3  -> -3 + 60 = 57

fine:
        ; Mantengo il programma "vivo" in un loop infinito
        b       fine            ; salta sempre a se stesso