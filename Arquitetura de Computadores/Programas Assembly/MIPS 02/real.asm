.data

	print1 :	.asciiz "Digite o numero PI: "
	zerof :	.float 0.0

.text

	lwc1 $f4, zerof
	
	# EXIBE UMA MENSAGEM
	la $a0, print1
	li $v0, 4
	syscall

	# LÊ A ENTRADA DO USUÁRIO
	li $v0, 6
	syscall
	
	# MOSTRA O VALOR DIGITADO
	la $v0, 2
	add.s $f12, $f0, $f4
	syscall
	
  	
