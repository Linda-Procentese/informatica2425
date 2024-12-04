;realizza un programma assembly che imposta il registro ax con valore 0005h, bx con valore 0004h 
;calcola in cx il prodotto di ax*bx con somme successive
.model small
.stack 200h
.data
.code
MAIN:
		.startup
		mov ax, @data
		mov ds, ax
		
		mov ax, 0005h
		mov bx, 0004h
		mov cx, 0000h
		
		CICLO:
			cmp bx, 0000h
			jle fine
			add cx, ax
			dec bx
			jmp ciclo
			
	fine
		mov ah, 4ch
		int 21h
	.exit
END