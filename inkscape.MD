## Propiedades de una imagen Ráster

*Resolución. Un mapa de bits tiene un tamaño concreto de A x B
La resolución se puede expresar de diferentes formas

Nº total de píxeles. normalmente MP (mega píxeles)
esto es el numero que resulta de AxB en millones de píxeles

### formatos comunes

-JPG(*JPEG)
-GIF-------se puede animar
-PNG
-TIFF


### Ejercicio de vectorización

Vamos a tomar la imagen del cuadro del León de Rosa Bonheur
Esta es la imagen Rasterizada original 

![](https://github.com/Samael696/arduino/blob/main/511fdaef-910d-4148-9091-b2d19acdc2b5_832.jpg?raw=true)

[*enlace de la fuente original](https://www.museodelprado.es/coleccion/obra-de-arte/el-cid/19984271-9cb6-476d-8655-f012e1fec1bf) 



tamaño personalizado
ancho: 600
alto: 1000

cerramos la ventana

añadimos la imagen de internet 

-archivo -- -- -- importar
-arrastrar la imagen
-copiar y pegar la imagen
*click derecho en la imagen -- -- -- vectorizar mapas de bits


### Explicación 

![](https://github.com/Samael696/arduino/blob/main/Captura%20de%20pantalla%20de%202021-10-20%2012-51-47.png?raw=true)



Existen varias opciones
Primero es decidir si el programa hará una o más pasadas
Con una uńica pasada siempre obtendremos una imagen en blanco y negro (que podremos colorear después)


---» Varias pasadas

Nos permite hacer una imagen vectorial más compleja, con varios grises o colores. Esto necesita más capacidad de proceso

Leon 1.svg

Después de importar el león vamos a ajustar el lienzo. Para ello iremos a propiedades de documento --» en tamaño, vamos a ajustar página o contenido.
Seleccionamos la imagen y pulsamos el botón.


### ejercicio

-Vectorizamos el león con las siguientes características
→multiples pasadas
→colores
→8 pasadas


-Borramos el ráster                                         3 Leones diferentes             
-Guardamos como león.svg                                                                    {subir.svg
-Subimos al Github                                          otras imagenes vectorizadas




------------------------------------------------------------------------Ajuste de lienzo a la imagen----------------------------------------------------------------





![](https://raw.githubusercontent.com/Samael696/arduino/d8f92cff1e7e7869f4ef5ee0a6153285835888b6/le%C3%B3n1.svg)





![](https://github.com/Samael696/arduino/blob/main/Captura%20de%20pantalla%20de%202021-10-20%2013-28-06.png?raw=true)




![](https://raw.githubusercontent.com/Samael696/arduino/8f71b52e3476cac509ac1cb5f262d0896b59f40e/le%C3%B3n.svg)




![](https://raw.githubusercontent.com/Samael696/arduino/186b7a697afacdd2fd1444fc29ad4c08af31089d/goku.svg)





### observaciones

Me a resultado realmente fácil la vectorizacion de estas imagenes, solo hubieron algunos errores en la ultima imagen debido a que el personaje transparenta con el fondo de mi ordenador, muy probablemente no se note en un fondo blanco.

también he tenido que rediseñar pedazos del dibujo debido a que se veía muy feo algunas linéas que se ponian automaticamente por la vectorización, he aprendido mucho gracias a ese fallo en la imágen .


-----------------------------------------------------------------------------------------------------------------------------------------------------------
