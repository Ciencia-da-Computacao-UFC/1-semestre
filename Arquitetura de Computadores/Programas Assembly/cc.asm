.data
     msg1: .asciiz "Insira [1]-DEBITO ou [2]-CREDITO: "
     debito: .asciiz "Debito escolhido."
     credito: .asciiz "Credito escolhido."


.text
    main:
        # imprime msg1
        li $v0, 4
        la $a0, msg1
        syscall
        
        # ler inteiro
        li $v0, 5
        syscall
        
        move $t0, $v0   # copiar inteiro de $v0 para $t0
        
        beq $t0, 1, debito
        beq $t0, 2, credito
        return:
     
    # finaliza programa 
    li $v0, 10
    syscall
    
    # condições
    debito:
       li $v0, 4
       la $a0, prompt2
       syscall
       
       j return
       
    credito:
       li $v0, 4
       la $a0, prompt3
       syscall
       
       j return
       
    
    