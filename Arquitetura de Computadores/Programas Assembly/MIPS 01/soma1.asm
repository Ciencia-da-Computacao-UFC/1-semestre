.text

main:
	
	li $t1, 1       # carrega o valor imediato 1 no registrador $t1 
	add $t0, $t1, 2 # soma $t1 com 2 e armazena em $t0
	
	move $a0, $t0   # carrego em $a0 o valor de $t0   
	li $v0, 1
	syscall		# imprimo na tela o resultado da operação
	
	
	li $v0, 10
	syscall		# return 0
	

