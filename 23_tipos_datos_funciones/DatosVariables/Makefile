#¡¡¡COMENTARIO!!!
# Cambiar la variable para compilar con distinto compilador
CC = gcc

#¡¡¡COMENTARIO!!!
# Añade la opcion -g al compilado para poder depurar
CFLAGS = -g

# ¡¡¡COMENTARIO!!!
# La variable OBJ lo que haces es que busca una lista de los archivos objetos para poder compilarlos despues: patsubst cambia los .c a .o que han sido buscados previamente por wildcard en la lista
OBJS = $(patsubst %.o, %.c, $(wildcard *.c))


# ¡¡¡COMENTARIO!!!
# Vairable con la que vamos a dar nombre al ejecutable
EXE = Distintoo

# ¡¡¡COMENTARIO!!!
# lo que va antes de : Son las reglas y lo que va despues las dependencias y lo de abajo es con lo que compilamos, las opciones $^ coje todas las dependecias, y -0 da nombre al ejecutable con la variable.
$(EXE): $(OBJS)
		$(CC) $(CFLAGS) $^ -o $(EXE)


# ¡¡¡COMENTARIO!!!
# Aqui cojemos los codigos y los convertimos en codigos objetos para despues linakrlos y poder tener el ejecutable. $< coje dependecia por dependencia de 1 en 1.
%.o: %.c
	$(CC) $(CFLAGS) -C $<
