.text

main:

	li $s3, 2
	li $s4, 4

       #desvia para L2 se s0 = s1
	   beq $s0, $s1, L2
	   # Executa se x != y
	   sub $s2, $s3, $s4

L2 : add $s2, $s4, $s4     # Executa se x = y

move $a0, $s2
li $v0, 1
syscall
