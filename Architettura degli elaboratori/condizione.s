       ;condizione in assebmbly
       ;       ============================================================
       ;       Tabella condizioni di salto ARM (B{cond})
       ;       ============================================================

       ;       EQ -> Z = 1 ; Uguale
       ;       NE -> Z = 0 ; Diverso
       ;       CS -> C = 1 ; Carry impostato / Maggiore o uguale (non firmato >=)
       ;       HS -> C = 1 ; Sinonimo di CS
       ;       CC -> C = 0 ; Carry non impostato / Minore (non firmato <)
       ;       LO -> C = 0 ; Sinonimo di CC
       ;       MI -> N = 1 ; Negativo
       ;       PL -> N = 0 ; Positivo o zero
       ;       VS -> V = 1 ; Overflow
       ;       VC -> V = 0 ; Nessun overflow
       ;       HI -> C = 1 e Z = 0 ; Maggiore (non firmato >)
       ;       LS -> C = 0 oppure Z = 1 ; Minore o uguale (non firmato <=)
       ;       GE -> N = V ; Maggiore o uguale (firmato >=)
       ;       LT -> N diverso da V ; Minore (firmato <)
       ;       GT -> Z = 0 e N = V ; Maggiore (firmato >)
       ;       LE -> Z = 1 oppure N ≠ V ; Minore o uguale (firmato <=)


       ;       3 + 4 - 10 + 60
       ;
       ;       R0 = 3

inizio 
       mov     r0, #3
       add     r0, r0, #4
       mov     r1, #-10
       add     r0, r0, r1

       add     r0, r0, #60

       ;       if r0 == 57, vai a "target"
       cmp     r0, #56
       beq     target

       mov     r0, #50

target 
       add     r0, r0, #1
       b       inizio