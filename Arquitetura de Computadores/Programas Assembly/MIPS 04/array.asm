.data
 
 list:	.word 3, 0, 1, 2, 6, -2, 4, 7, 3, 7

.text

     la $t3, list         # armazena em $t3 o endereço do primeiro elemento de list
#    li $t2, 5            # coloca o índice em $t2
#    add $t2, $t2, $t2    # índice x2
#    add $t2, $t2, $t2    # índice x4
#    add $t1, $t2, $t3    # armazena em $t1 o endereço do índice 5 de $t3
       
    lw $t4, 36($t3)       # seleciona o índice do vetor
    
    move $a0, $t4
    li $v0 1
    syscall
