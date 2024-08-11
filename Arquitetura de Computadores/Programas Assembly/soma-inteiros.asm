.data
    prompt1: .asciiz "Inisira o 1 numero: "
    prompt2: .asciiz "Insira o 2 numero: "
    prompt3: .asciiz "O resultado é: "
.text
    main:
        # imprime - insira o 1 numero
        li $v0, 4
        la $a0, prompt1
        syscall
        
        # ler numero 1
        li $v0, 5
        syscall
        
        move $t0, $v0 # copia conteudo de $v0 para $t0
        
        # imprime - insira o 2 numero
        li $v0, 4
        la $a0,prompt2
        syscall
        
        # ler 2 numero
        li $v0, 5
        syscall
        
        move $t1, $v0 # copia conteudo de $v0 para $t1
    
        add $t3, $t0, $t1    #  soma $t0 e $t1 e entao armazena em $t3
        
        # imprime - O resultado é
        li $v0, 4
        la $a0, prompt3
        syscall
            
        # imprimir o resultado armazendado em $t3
        li $v0, 1
        move $a0, $t3
        syscall
        
    # finalizar função main
    li $v0, 10
    syscall
    