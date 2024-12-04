;incrementare un registro AX per un numero di volte pari al valore di BX (CICLO WHILE)
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
	
	ciclo:              ;ciclo con controllo in TESTA->al pari di while
		cmp bx, 0000h   ;controllo il registro->con il valore di stop
		jle fine	    ;se il contenuto del registro è inferiore ouguale a 0 salto a fine
		inc ax			;se non salto eseguo queste istruzioni
		dec bx			;IMPORTANTE:modificare il registro (variabile) su cui si basa il ciclo, altrimenti possibile loop
		jmp ciclo		;salto alla testa del ciclo per un nuovo controllo
	
	mov ah, 4ch
	int 21h
	.exit
END