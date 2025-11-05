        ;=================================================================
        ; Lezione 1.x - Conta quanti elementi di un array sono > 10
        ;
        ; Obiettivo:
        ;   Dato un insieme di numeri (array "data"), determinare
        ;   quanti elementi sono strettamente maggiori di 10.
        ;
        ; Registri usati:
        ;   R0 = numero di elementi / contatore del loop
        ;   R1 = puntatore all'i-esimo elemento di "data"
        ;   R2 = valore dell'i-esimo elemento
        ;   R3 = contatore degli elementi > 10
        ;=================================================================

        ;-------------------------------------------------------------
        ; Dati di ingresso
        ;-------------------------------------------------------------
data    dcd     4,10,8,9,60,20,3,1,0,50,9,14
        ; 12 elementi

        ;-------------------------------------------------------------
        ; Inizializzazione dei registri
        ;-------------------------------------------------------------
        mov     r0, #12         ; R0 = numero di elementi (loop counter)
        mov     r1, #data       ; R1 = indirizzo base dell'array "data"
        mov     r3, #0          ; R3 = contatore elementi > 10

;-------------------------------------------------------------
; Loop principale: scorri l'array e conta gli elementi > 10
;-------------------------------------------------------------
loop
        cmp     r0, #0          ; Ho finito tutti gli elementi?
        beq     end_loop        ; Se sì, esci dal loop

        ldr     r2, [r1]        ; R2 = elemento corrente *[R1]

        cmp     r2, #10         ; Confronto con 10
        ble     skip            ; Se R2 <= 10, non lo conto

        add     r3, r3, #1      ; Se R2 > 10, incremento il contatore

skip
        sub     r0, r0, #1      ; Decremento numero di elementi rimanenti
        add     r1, r1, #4      ; Avanzo al prossimo elemento dell'array
        b       loop            ; Torno all'inizio del loop

;-------------------------------------------------------------
; Fine programma: R3 contiene il numero di elementi > 10
;-------------------------------------------------------------
end_loop