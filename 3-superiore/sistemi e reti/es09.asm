;Esercitazione Learning by Doing:
;Trova i passaggi da effettuare in Assembler 8086 per visualizzare un singolo carattere a video.
 ;Successivamente prova a realizzare un algoritmo che visualizza a video 10 asterischi in colonna.
;Tip: per andare a capo che in C sarebbe un '\n' in assembler sono due caratteri da stampare in successione 
;e nello specifico Line Feed e Carriage Return.
.model small
.stack 200h
.data
.code
MAIN:
		.startup
		mov ax, @data
		mov ds, ax

        mov DL,'*'
        mov AH,2
        mov BX,0h

        CICLO:
            cmp BX, 10h
            stampa:INT 21H
            JNG stampa
            JL CICLO
            JGE fine

        fine
		mov ah, 4ch
		int 21h
	.exit
END