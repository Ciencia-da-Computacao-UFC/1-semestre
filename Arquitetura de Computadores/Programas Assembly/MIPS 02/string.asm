.data
    buffer: .space 20
    str1:  .asciiz "Digite uma string"
    str2:  .asciiz "Você escreveu:"

.text

main:
    la $a0, str1    #Carrega e exibe uma mensagem 
    li $v0, 4
    syscall

    li $v0, 8       # Lê uma string
    la $a0, buffer  # aloca o buffer
    li $a1, 20      # tamanho do buffer

    syscall
    move $t0, $a0   # salva string em t0

    la $a0, str2    # Carrega e exibe " Você escreveu "
    li $v0, 4
    syscall

    la $a0, buffer  # aloca o buffer
    move $a0, $t0   # armazena a string em $a0
    li $v0, 4       # imprime a string
    syscall

    li $v0, 10      # return 0
    syscall
