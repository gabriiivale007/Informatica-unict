        ;       3 + 4 - 10 + 60

        ;       R0 = 3
        ;       R1 = 4
        ;       R2 = 10
        ;       R3 = 60

        mov     r0, #3
        mov     r1, #4
        mov     r2, #10
        mov     r3, #60
        ; il primo elemento in questo caso R4 è il registro che conterrà il risultato 
        ;       R4 risultato temporaneo
        add     r4, r0, r1 ; R4 = R0 + R1
        sub     r4, r4, r2 ; R4 = R4 - R2
        add     r4, r4, r3 ; R4 = R4 + R3