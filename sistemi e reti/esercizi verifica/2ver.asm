;Realizza un programma Assembler impostando il registro DX 
ad un valore a piacere e BX a 8 quindi esegui le seguenti operazioni:
• Se DX è inferiore a 16 calcola in CX la somma dei numeri naturali da 1 a BX.
• Se DX è compreso tra 16 e 20 aggiungi 1 finché raggiunge il valore 30, 
conta il numero di aggiunte in un altro registro.
• Se DX è maggiore di 255 scambia la parte alta con la parte bassa e inserisci 
in un commento a fine listato il valore rappresentato da DX. (; DX→ ??)

.model small
.stack 200h
.data
.code

MAIN:
	.startup
	mov ax, @data
	mov ds, ax
	
	mov dx, 03h
	mov bx, 08h
	mov ax, 00h
	mov cx, 00h
	mov ds, 01h
	
	;1
	cmp dx, 16h
	jl ciclo
	jmp fine
	
		ciclo:
		cmp cx, 24h ;24=somma di tuttii numeri naturali da 1 a (bx=8)
		jg fine
		add cx, ds
		inc ds
		jmp ciclo
		
				
			
	;2
	cmp dx, 16h
	jge continua2
	jmp fine
		continua2:
		cmp dx, 20h
		jle cicloA
		jmp fine
			cicloA:
			cmp dx, 30h
			jg fine
			inc dx
			inc ax
			jmp ciclo
	
	;3
	cmp dx, 225h
	jg continua3
	jmp fine
		continua3:
		mov dl, dh
		jmp fine
		
	fine:
	mov ah, 4ch
	int 21h
	.exit
END

;dx=2dh