        mov     r0,#0

compare 
        cmp     r0,#10
        bge     fuori
dentro  
        ;corpo  del for

        add     r0,r0,#1
        b       compare

fuori   