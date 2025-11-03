        ;=================================================================
        ; Lezione 1.2 - Loop infinito
        ;
        ; Obiettivo:
        ;   Mostrare come creare un ciclo infinito con una label e B.
        ;   Nel ciclo sommiamo 60 al registro R0 a ogni iterazione.
        ;=================================================================

        ; Inizializzo il registro R0
        mov     r0, #0          ; R0 parte da 0

loop
        ; Corpo del ciclo:
        ; a ogni giro sommo 60 a R0
        add     r0, r0, #60     ; R0 = R0 + 60

        ; Torno all'inizio del ciclo (loop infinito)
        b       loop