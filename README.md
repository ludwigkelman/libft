*Este proyecto ha sido creado como parte del currículo de 42 por lumercha*

#Descripcion
El proyecto libft consiste en la creación de una biblioteca estatica de funciones básicas en C, replicando y extendiendo funcionalidades de la librería estándar (libc).

##Objetivo
El objetivo principal del proyecto es profundizar en el manejo de memoria, punteros y estructuras de datos

###Funciones
**Funciones de ctype.h (manipulación de caracteres)**
isalpha	Comprueba si el carácter es letra (A-Z, a-z)
isdigit Comprueba si es dígito (0-9)
isalnum Comprueba si es alfanumérico
isascii Comprueba si es un carácter ASCII (0-127)
isprint Comprueba si es imprimible
toupper Convierte minúscula → mayúscula
tolower Convierte mayúscula → minúscula
**Funciones de string.h / memoria (manipulación de cadenas y memoria)**
strlen  Longitud de cadena
strchr  Busca primera ocurrencia de un char
strrchr Busca última ocurrencia de un char
strncmp Compara cadenas hasta n caracteres
strlcpy Copia string con límite de tamaño	bsd/string.h
strlcat Concatenación limitada			bsd/string.h
strnstr Busca subcadena con límite de tamaño	bsd/string.h
memset  Rellena memoria con un byte
bzero   Inicializa memoria a 0			
memcpy  Copia memoria de forma directa
memmove Copia memoria con solapamiento seguro
memchr  Busca un byte en memoria
memcmp  Compara bloques de memoria
**Conversión y numéricos**
atoi	Convierte string → int
**Funciones que requieren malloc para implementar**
calloc	Reserva memoria inicializada a cero
strdup	Duplica una cadena en memoria dinámica
#####Funciones adicionales
**funciones adicionales**
ft_substr       Reserva memoria (con malloc(3)) y devuelve una subcadena de caracteres de la cadena ‘s’. La subcadena comienza en el índice ‘start ’ y tiene una longitud máxima ‘len ’
ft_strjoin	Reserva memoria (con malloc(3)) y devuelve una nueva cadena de caracteres, formada por la concatenación de ‘s1’ y ‘s2’.
ft_strtrim	Reserva memoria (con malloc(3)) y devuelve una copia de ‘s1’ con los caracteres de ‘set ’ eliminados al principio y al final.
ft_split	Reserva memoria (utilizando malloc(3)) y devuelve un arreglo (array ) de cadenas obtenido al dividir la cadena ‘s’ en subcadenas utilizando el carácter ‘c’ como delimitador. El arreglo debe terminar con un puntero a NULL.
ft_itoa 	Reserva memoria (utilizando malloc(3)) y devuelve una cadena que represente el valor del número entero recibido como argumento. Debe ser capaz de manejar números negativos.
ft_strmapi	Aplica la función ‘f’ a cada carácter de la cadena ‘s’, pasando su índice como primer argumento y el propio carácter como segundo argumento. Se crea una
nueva cadena (utilizando malloc(3)) para almacenar los resultados de las sucesivas aplicaciones de ‘f’.
ft_striteri	Aplica la función ‘f’ a cada carácter de la string ‘s’, pasando como parámetros el índice de cada carácter dentro de ‘s’ y la dirección del propio carácter, que puede modificarse si es necesario.
ft_putchar_fd	Envía el carácter ‘c’ al descriptor de archivo (file descriptor ) especificado.
ft_putstr_fd	Envía la cadena ‘s’ al descriptor de archivo especificado.
ft_putendl_fd	Envía la cadena ‘s’ al descriptor de archivo dado, seguido de un salto de línea.
ft_putnbr_fd	Escribe el número entero ‘n’ en el descriptor de archivo dado.
###Listas enlazadas
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#Instrucciones
Para generar la libreria estatica usamos **make** este comando nos compilara todos los archivos .c y los linkeara. Si queremos eliminar los archivos .o usamos **clean** si queremos eliminarlos junto a la libreria estatica **fclean** si queremos recompilar todos los archivos **re**

#Recursos
La IA se ha empleado como consultor externo sobre definiciones de funciones o recrear casos particulares.


