;incrementare un registro AX per un numero di volte pari al valore di BX(CICLO  DO-WHILE)
.model small
.stack 200h
.code
.data
MAIN:
	.startup
	mov ax, @data
	mov ds, ax
	
	mov ax, 0000h
	mov bx, 0005h
	
	ciclo:
		inc ax			;realizzazione con ciclo DO-WHILE
		dec bx			;incremento del registro ax
		cmp bx, 0000h	;controllo valore di bx
		jg ciclo		;eventuale salto condizionato alla testa del ciclo
	
	fine:
		mov ah, 4ch
		int 21h
	.exit
END