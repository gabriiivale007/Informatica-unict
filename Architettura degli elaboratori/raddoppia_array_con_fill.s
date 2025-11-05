        ;=================================================================
        ; Lezione 1.x - Raddoppio degli elementi di un array (output con FILL)
        ;
        ; Obiettivo:
        ;   Come l'esempio precedente, ma l'array di output "data_out"
        ;   viene semplicemente riservato in memoria tramite FILL.
        ;
        ; Registri usati:
        ;   R0 = numero di elementi / contatore del loop
        ;   R1 = puntatore all'i-esimo elemento di "data_in"
        ;   R2 = i-esimo elemento di "data_in"
        ;   R3 = puntatore all'i-esimo elemento di "data_out"
        ;=================================================================

        ;-------------------------------------------------------------
        ; Dati di ingresso e uscita
        ;-------------------------------------------------------------
data_in     dcd     4,10,8,9,60,20,3,1,0,50,9,14
; data_out  dcd     0,0,0,0,0,0,0,0,0,0,0,0
data_out    fill    12*4        ; riserva spazio per 12 word (4 byte ciascuna)

        ;-------------------------------------------------------------
        ; Inizializzazione dei registri
        ;-------------------------------------------------------------
        mov     r0, #12         ; R0 = numero di elementi
        mov     r1, #data_in    ; R1 = puntatore a data_in
        mov     r3, #data_out   ; R3 = puntatore a data_out (area riservata)

;-------------------------------------------------------------
; Loop principale: leggi elemento, raddoppialo, scrivilo in data_out
;-------------------------------------------------------------
loop
        cmp     r0, #0          ; Ho finito tutti gli elementi?
        beq     end_loop        ; Se sì, esco

        ldr     r2, [r1]        ; R2 = elemento corrente di data_in

        add     r2, r2, r2      ; R2 = R2 * 2
        str     r2, [r3]        ; salvo in data_out

        add     r1, r1, #4      ; prossimo elemento in data_in
        add     r3, r3, #4      ; prossimo elemento in data_out
        sub     r0, r0, #1      ; decremento contatore
        b       loop            ; ripeti

;-------------------------------------------------------------
; Fine programma: data_out contiene i valori raddoppiati
;-------------------------------------------------------------
end_loop