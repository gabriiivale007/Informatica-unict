        ;=================================================================
        ; Lezione 1.x - Raddoppio degli elementi di un array (con array di output)
        ;
        ; Obiettivo:
        ;   Dato un array di input "data_in", creare un array di output
        ;   "data_out" in cui ogni elemento è il doppio del corrispondente
        ;   elemento di input.
        ;
        ; Registri usati:
        ;   R0 = numero di elementi / contatore del loop
        ;   R1 = puntatore all'i-esimo elemento di "data_in"
        ;   R2 = i-esimo elemento di "data_in" (valore letto)
        ;   R3 = puntatore all'i-esimo elemento di "data_out"
        ;=================================================================

        ;-------------------------------------------------------------
        ; Dati di ingresso e uscita
        ;-------------------------------------------------------------
data_in     dcd     4,10,8,9,60,20,3,1,0,50,9,14
data_out    dcd     0,0,0,0,0,0,0,0,0,0,0,0   ; array di output inizializzato a 0
        ; 12 elementi

        ;-------------------------------------------------------------
        ; Inizializzazione dei registri
        ;-------------------------------------------------------------
        mov     r0, #12         ; R0 = numero di elementi
        mov     r1, #data_in    ; R1 = puntatore all'array di input
        mov     r3, #data_out   ; R3 = puntatore all'array di output

;-------------------------------------------------------------
; Loop principale: leggi elemento, raddoppialo, scrivilo in data_out
;-------------------------------------------------------------
loop
        cmp     r0, #0          ; Ho finito tutti gli elementi?
        beq     end_loop        ; Se sì, esco

        ldr     r2, [r1]        ; R2 = elemento corrente di data_in

        add     r2, r2, r2      ; R2 = R2 * 2 (raddoppio)
        str     r2, [r3]        ; Salvo il risultato in data_out

        add     r1, r1, #4      ; R1 → prossimo elemento di data_in
        add     r3, r3, #4      ; R3 → prossimo elemento di data_out
        sub     r0, r0, #1      ; Un elemento in meno da elaborare
        b       loop            ; Ripeti

;-------------------------------------------------------------
; Fine programma: data_out contiene i valori raddoppiati
;-------------------------------------------------------------
end_loop