;esempio di assegnazione e somma tra due registri

.model
.stack 200h
.data
.code

MAIN:

	;istruzioni di inizio del codice
	.startup
	mov ax, @data
	mov ds, ax
	
	;inizio codice
	mov ax, 02h ;ax[0002]
	mov bx, 0Ah ;bx [000A]
	 
	add bx, ax  ;add addizione matematica -->bx [000c]
	
	;chiusura codice
	mov ah, 4ch
	int 21h
	.exit
END