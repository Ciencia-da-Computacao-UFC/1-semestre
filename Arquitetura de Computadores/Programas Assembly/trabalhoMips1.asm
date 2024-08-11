.data
     msg1:       .asciiz "\nInsira 1- DEBITO ou 2- CREDITO: "
     msg2:       .asciiz "\nInsira 1- VISA 2- MASTER 3- ELO: "
     msg3:       .asciiz "\nInsira o valor em R$: "
     zerof :     .float 0.0
     msg4:       .asciiz "\nInsira o cartao: "
     msg5:       .asciiz "\nInsira a senha: "
     debito:     .asciiz "\nDEBITO"
     credito:    .asciiz "\nCREDITO"
     visa:       .asciiz "\nVISA"
     master:     .asciiz "\nMASTER"
     elo:        .asciiz "\nELO"
     num_cartao: .space 17   #vetor
     senha_cartao: .space 5  #vetor
     msg6:  .asciiz "\nForma de pagamento: "
     msg7: .asciiz "\nTotal: R$"
     msg8: .asciiz "\nCartao de numero: "
     
.text
	# imprime msg1  Insira 1- DEBITO ou 2- CREDITO: 
	tipo_compra:
        
        	li $v0, 4   #4 para imprimir uma string
        	la $a0, msg1 #armazena o conteúdo de msg1 no registrador $a0
        	syscall
        
        # para ler inteiro digitado por usuario
        	li $v0, 5   #5 para ler um inteiro
        	syscall
        	move $t0, $v0   
        
        #imprime msg2
	band_cartao:
		li $v0, 4
        	la $a0, msg2
        	syscall
        	
        # para ler int bandeira do cartao digitado por usuario
        	li $v0, 5
        	syscall
        	move $t1, $v0
        
        # para ler float que sera o valor digitado		
	compra:
	       	lwc1 $f1, zerof
        	
        #imprime msg3 "insira valor"
		li $v0, 4
        	la $a0, msg3
        	syscall
        #ler o valor digitado
        	la $v0, 6   #6 para ler float
		syscall
		add.s $f2, $f0, $f1
       
        #Imprime msg4 "Insira cartao"	 	
        cartao:
        	li $v0, 4
        	la $a0, msg4
        	syscall
        	
        #para ler o numero do cartao
        	li $v0, 8 #para ler string 
        	la $a0, num_cartao
        	li $a1, 17
        	syscall
        	move $t2, $a0
        	
        #para imprimir msg5 "insira senha"
        senha:
        	li $v0, 4
        	la $a0, msg5
        	syscall
        
        #para ler a senha 
        	li $v0, 8
        	la $a0, senha_cartao
        	li $a1, 5
        	syscall
        	move $t3, $v0
        	
        #para imprimir a escolha de pagamento
        	li $v0, 4
        	la $a0, msg6
        	syscall
        
        #condicao para forma de pagamento
        beq $t0, 1, exibir_debito	        	
        		
        				
        exibir_credito:
        	li $v0, 4
        	la $a0, credito
        	syscall
        	j exibir_bandeira_cartao 
        	
        exibir_debito:
        	li $v0, 4
        	la $a0, debito
        	syscall
        
        #condicao para bandeira do cartao
        exibir_bandeira_cartao:
        beq $t1, 1, exibir_visa
        beq $t1, 2, exibir_master
        beq $t1, 3, exibir_elo 
        
        exibir_visa:
        	li $v0, 4
        	la $a0, visa
        	syscall
        	j exibir_valor_cartao
        exibir_master:
        	li $v0, 4
        	la $a0, master
        	syscall
        	j exibir_valor_cartao
        exibir_elo:
        	li $v0, 4
        	la $a0, elo
        	syscall
        	j exibir_valor_cartao
        	
        exibir_valor_cartao:
 		li $v0, 4
 		la $a0, msg7 
 		syscall   
        
        	li $v0, 2    #2 imprime float
        	mov.s $f12, $f2 #f2 onde esta aarmazenado o valor da compra
        	syscall	
    		
    		li $v0, 4
        	la $a0, msg8
        	syscall
    		
    		li $v0, 4
    		la $a0, num_cartao
    		#move $a0, $t2
    		syscall
    		
    
