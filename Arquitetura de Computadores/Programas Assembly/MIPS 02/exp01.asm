.text

main:
	
	li $s1, 1		# armazena 1 em $s1
	li $s2, 2		# armazena 2 em Ss2
	li $s3, 3		# armazena 3 em $s3
	li $s4, 4       	# armazena 4 em $s4 
	add $t0, $s1, $s2 	# $t0 = ($s1 + $s2)
	add $t1, $s3, $s4 	# $t1 = ($s3 + $s4)
	sub $t2, $t0, $t1 	# $t2 = ($t0 - $t1)
	move $s0, $t2		# $s0 = ($t2)

	move $a0, $s0   # carrego em $a0 o valor de $t0   
	li $v0, 1
	syscall		# imprimo na tela o resultado da operação
	
	
	li $v0, 10
	syscall		# return 0
	

