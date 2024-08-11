
.text

# tmp = $v0
# j = $t0

main:
    li $t0,0
    li $t1,0
    li $t3,0
loop:
    # branch on greater than (desvie se for maior que)	
    bgt $t0,5,exit # if $t0 > 5 goto exit 
    addi $t0,$t0,1
    j loop
    mul $t1,$t1,2
    add $t3,$t1,3  
exit:

move $a0, $t0
li $v0, 1
syscall


li $v0,10
syscall

.data
mensagem: .asciiz "Resultado"
