.data
    msg01: .asciiz "1-DEBITO/2-CREDITO: "
    msg02: .asciiz "1-VISA/2-MASTER/3-ELO: "
    msg03: .asciiz "Valor: "
    msg04: .asciiz "Número do cartão: "
    msg05: .asciiz "Senha: "
    
    debitoMsg: .asciiz "-DEBITO"
    creditoMsg: .asciiz "-CREDITO"
    
    visaMsg:  .asciiz "\nVISA"
    masterMsg: .asciiz "\nMASTER"
    eloMsg:   .asciiz "\nELO"
    total:    .asciiz "\nTotal: R$"
    numeroCartao: .asciiz "\nNumero do cartao: "
    
    vNumeroCartao:  .space 17
	
		

.text
    main:
        # imprime msg01
       li $v0, 4
       la $a0, msg01
       syscall
       
       # le se credito ou debito
       jal leInteiro
       move $t0, $v0
       
       # imprime bandeira cartao
       li $v0, 4
       la $a0, msg02
       syscall
       
       # le bandeira cartao
       jal leInteiro
       move $t1, $v0
       
       # solicita valor
       li $v0, 4
       la $a0, msg03
       syscall
       
       # le valor (float)
       li $v0, 6
       syscall
       
       mov.s $f2, $f0
       
       # Solicita numero cartao
       li $v0, 4
       la $a0, msg04
       syscall
       
       # le numero cartao
       li $v0, 8
       la $a0, vNumeroCartao
       li $a1, 18
       syscall
       
       # solicita senha
       li $v0, 4
       la $a0, msg05
       syscall
       
       # le senha
       jal leInteiro
       move $t2, $v0
       
       
      # checa bandeira do cartao 
       beq $t1, 1, visa
       beq $t1, 2, master
       beq $t1, 3, elo
       return1:
       
       # checa forma de pagamento
       beq $t0, 1, debito
       beq $t0, 2, credito
       return2:
       
       # imprime total
       li $v0, 4
       la $a0, total
       syscall
       
       # imprime valor total (float)
       li $v0, 2
       mov.s $f12, $f2
       syscall
       
       #imprime numero do cartao
       li $v0, 4
       la $a0, numeroCartao
       syscall
       
       li $v0, 4
       la $a0, vNumeroCartao
       syscall
       
    
    li $v0, 10
    syscall
    
    leInteiro:
       li $v0, 5
       syscall
       
       jr $ra
       
       
    visa:
        li $v0, 4
        la $a0, visaMsg
        syscall
        
        j return1
        
    master:
        li $v0, 4
        la $a0, masterMsg
        syscall
        
        j return1
        
    elo:
        li $v0, 4
        la $a0, eloMsg
        syscall
        
        j return1   
       
    debito:
       li $v0, 4
       la $a0, debitoMsg
       syscall
       
       j return2
       
    credito:
       li $v0, 4
       la $a0, creditoMsg
       syscall
       
       j return2
       
       
    
       

	