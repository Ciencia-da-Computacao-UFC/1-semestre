/*6.(String) Crie um programa que le uma expressao sem parenteses digitada
 *  no teclado e calcula o valor numerico na expressao.*/
 
#include <stdio.h>

#define not !
#define true  1
#define false 0
typedef int bool;

typedef struct error {
	bool exist;
	int  value;
} Error;

// retorna um novo erro personalizado
Error newError( bool exist, int value ) {
	Error result;
	result.exist = exist;
	result.value = value;
	return result;
}

bool endString( char element ) {
	return ( element != '\0' ) ? false : true;
}

// verifica se um dado elemento eh digito ou nao
bool isDigit( char element ) {
	return ( element < '0' || element > '9' ) ? false : true;
}

// adiciona um novo digito a um 'value'
int addDigit( int* value, int newDigit ) {
	*value *= 10;
	*value += newDigit;
}

short toDigit( char element ) {
	return (element - '0');
}

bool isOperator( char element ) {
	if ( element == '-' || element == '+' || element == '*' || element == '/'  )
		return true;
	return false;
}

// converte uma expressao 'string' em 'int' se for possivel
Error toInt( char* expr ) {
	int i, value;
	
	for ( value = 0, i = 0; not endString( expr[i] ) ; i++ ) {
		if ( ! isDigit( expr[i] ) )
			return newError( true, 0 );
		addDigit( &value, toDigit( expr[i] ) );
	}
	
	return newError( false, value );
}

int getValue( Error err ) {
	return err.value;
}

// verifica se ha algum operador de precedencia
Error hasPrecedent( char* expr ) {
	int i;
	
	for ( i = 0; not endString( expr[i] ); i++ ) {
		if ( expr[i] == '+' || expr[i] == '-' )
			return newError( false, expr[i] );
	}
	
	return newError( true, 0 );
}



Error exec( char* expr ) {
	char exprLeft[100], exprRight[100];
	int i, j, indLeft, indRight;
	Error err = toInt( expr );
	
	// se nao a expressao nao for um inteiro, entao..
	if ( err.exist ) {
		
		err = hasPrecedent( expr );
		if ( not err.exist ) {
			
			for ( indLeft = 0, indRight = 0, i = 0; not endString( expr[i] ); i++ ) {
				if ( expr[i] == err.value ) {
					exprLeft[ indLeft ] = '\0';
		
					for ( j = (i + 1); not endString( expr[j] ); j++, indRight++ )
						exprRight[ indRight ] = expr[j];
		
					exprRight[ indRight ] = '\0';
		
					printf(" %s -> ( %s, %s )\n", expr, exprLeft, exprRight);
					
					if ( expr[i] == '+' )
						return newError( false, getValue( exec( exprLeft ) ) + getValue( exec( exprRight ) ) );
					else if ( expr[i] == '-' )
						return newError( false, getValue( exec( exprLeft ) ) - getValue( exec( exprRight ) ) );
					else
						return newError( true, 0 );
		
		
				} else {
					exprLeft[ indLeft ] = expr[i];
					indLeft++;
				}
			}
			
		}
		else {
			
			for ( indLeft = 0, indRight = 0, i = 0; not endString( expr[i] ); i++ ) {
				if ( isOperator( expr[i] ) ) {
					exprLeft[ indLeft ] = '\0';
		
					for ( j = (i + 1); not endString( expr[j] ); j++, indRight++ )
						exprRight[ indRight ] = expr[j];
		
					exprRight[ indRight ] = '\0';
		
					printf(" %s -> ( %s, %s )\n", expr, exprLeft, exprRight);
		
					if ( expr[i] == '*' )
						return newError( false, getValue( exec( exprLeft ) ) * getValue( exec( exprRight ) ) );
					else if ( expr[i] == '/' )
						return newError( false, getValue( exec( exprLeft ) ) / getValue( exec( exprRight ) ) );
					else
						return newError( true, 0 );
		
		
				} else {
					exprLeft[ indLeft ] = expr[i];
					indLeft++;
				}
			}
			
		}
		
		
		
	}
	// caso seja um inteiro, a 'string' sera convertida em 'int'
	else
		return newError( false, err.value );
}

int main() {
	char expr[100];
	Error err;
	
	printf("Expr: ");
	scanf("%s", expr);
	
	err = exec( expr );
	
	if ( err.exist )
		printf("Expressao invalida.\n");
	else 
		printf("Resultado = %d\n", err.value);
	
	return 0;
}
