        ;=================================================================
        ; Lezione 1.x - Conteggio dei bit a 1 in un registro (R0)
        ;
        ; Obiettivo:
        ;   Dato un valore in R0, contare quanti bit a 1 contiene.
        ;   Il risultato viene salvato in R3.
        ;
        ; Registri usati:
        ;   R0 = valore di lavoro (viene shiftato a destra ad ogni ciclo)
        ;   R1 = contatore di loop (32 iterazioni, uno per ogni bit)
        ;   R2 = valore del bit meno significativo (0 oppure 1)
        ;   R3 = contatore dei bit a 1 trovati
        ;
        ; Esempio:
        ;   R0 = 230 = 0b11100110
        ;   Numero di bit a 1 = 5 → alla fine R3 = 5
        ;=================================================================

        ;-------------------------------------------------------------
        ; Inizializzazione
        ;-------------------------------------------------------------

        mov     r0, #230        ; Valore di esempio da analizzare in binario
        mov     r1, #32         ; 32 bit da controllare (loop counter)
        mov     r3, #0          ; R3 = contatore di bit a 1 (parte da 0)

;-------------------------------------------------------------
; Loop principale: controlla il bit meno significativo di R0
; e poi shifta a destra.
;-------------------------------------------------------------
shift_loop
        cmp     r1, #0          ; Ho finito le 32 iterazioni?
        beq     end_shift_loop  ; Se sì, esci dal loop

        and     r2, r0, #1      ; Isolo il bit meno significativo di R0
                                ; R2 = 1 se LSB è 1, altrimenti 0
        cmp     r2, #0          ; Il bit è 0?
        beq     skip            ; Se è 0, salta l'incremento del contatore

        add     r3, r3, #1      ; Se il bit è 1, incremento il contatore

skip
        lsr     r0, r0, #1      ; Shift logico a destra di 1 (nuovo bit da testare)
        sub     r1, r1, #1      ; Una iterazione in meno da fare
        b       shift_loop      ; Torna all'inizio del loop

;-------------------------------------------------------------
; Fine programma: R3 contiene il numero di bit a 1 in R0
;-------------------------------------------------------------
end_shift_loop