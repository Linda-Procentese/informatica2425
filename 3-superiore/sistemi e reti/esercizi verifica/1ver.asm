;Realizza un programma Assembler impostando i registri CX e DX con due valori a piacere 
quindi esegui le seguenti operazioni:
1. Aggiungi a DX il valore 0Ah
2. Aggiunti a CX il valore 1A
3. Scambia il contenuto di CX con DX
4. Assegna a AX il contenuto di DX
5. Aggiungi a CX il contenuto di DX
6. Incrementa di 1 DX
7. Termina il programma
8. Riporta con un commento alla fine del codice, dopo la END, 
quanto valgono CX DX e AX. (;CX → ??)

.modelsmall
.stack 200h
.data
.code

MAIN:
	.startup
	mov ax, @data
	mov ds, ax
	
	mov CX, 0Ah
	mov DX, 04h
	mov AX, 00h
	mov BX, 00h
	
	;somme
	add DX, 0Ah
	add CX, 1Ah
	
	;scambio
	mov BX, CX
	mov CX, DX
	mov DX, BX
	
	;asseganzione
	mov AX, DX
	
	;somma
	add CX, DX
	
	;incremento
	inc DX
	
	fine:
	mov ah, 4ch
	int 21h
	.exit
END

;cx=32
;dx=33
;ax=24