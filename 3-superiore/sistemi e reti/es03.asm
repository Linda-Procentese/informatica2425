;codice di esempio
.model small
.stack 200h
.data
.code

MAIN:
	.startup
	mov ax, @data
	mov ds, ax
	
	mov ax, 0Fh ;imposto ax con valore esadecimale 0F
	mov bx, 0Ah ;imposto bx con valore esadecimale 0A
	
	;scambio i due valori tra i registri
	mov cx, ax ;salvo il valore di ax in cx
	mov ax, bx ;assegno il valore di bx a ax
	mov bx, cx ;assegno il valore di cx a bx
	
	;righe di chiusura
	mov ah, 4ch
	int 21h
	.exit
END