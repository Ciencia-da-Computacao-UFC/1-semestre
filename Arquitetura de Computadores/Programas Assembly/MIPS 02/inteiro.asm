.text

main:
	# SOLICITA AO USUÁRIO UM NÚMERO
	la $a0, print1
	li $v0, 4
	syscall

	# LÊ UM NÚMERO DO BUFFER DE ENTRADA
	li $v0, 5
	syscall
	move $t0, $v0
	
	# IMPRIME O INTEIRO
	move $a0, $t0
	li $v0, 1
	syscall
	
	# FINALIZA A EXECUÇÃO
	li $v0, 10
	syscall
	
.data
print1 :	.asciiz "Digite um numero inteiro: "        

