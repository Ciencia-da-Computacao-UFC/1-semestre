.text

main:
	# EXIBE HELLO WORLD
	la $a0, hello
	li $v0, 4
	syscall

.data
hello :	.asciiz "hello world! "

