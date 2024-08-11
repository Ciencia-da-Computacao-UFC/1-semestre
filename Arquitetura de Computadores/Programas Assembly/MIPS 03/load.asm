#SOBRESCREVE UM VALOR NA MEMÓRIA
.data
var1:	.word	23		# DECLARA UMA VARIÁVEL CHAMADA VAR1 COM VALOR INICIAL 23

	.text
main:
	lw	$t0, var1	# CARREGA VAR1 PARA $t0
	li	$t1, 5		# $t1 = 5   ("load immediate")
	sw	$t1, var1	# ARMAZENA O VALOR DE $t1 NA MEMÓRIA:  var1 = $t1