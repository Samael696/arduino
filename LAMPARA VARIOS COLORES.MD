## PWM (Pulse With Modulation)

¿Como Dimmer

Problema:
Tengo un Arduino que suministra su A a un LED.
A mayor intensidad de corriente(A) el LED
A menor intensidad de corriente el LED brilla menos



Si subimos o bajamos la corriente 
A  un votaje de 5v o de 3v
el LED brillará más con 5v y menos con 3'3v
los pulsos modulados en ancho crean la ilusión de voltajes intermedios entre 0 y 5v
para ello usan pulsos muy cortos
Quen usaremos a través de cunción
Analog write(Pin, 0-255);
ESta funcíon solo funciona en pines con PWM
LOSC PINES CON PWM ESTÁN MARCADOS (CON el símbolo ~ (la tilde de la ñ))
La funcíon nos pide 2 cosas
por un lado (y lo primero) el número de pin 
Por otro lado un Número entre 0 y 255

0 →→→→→ 0%
255 →→→→→ 100% de voltaje (5v)
sting → cadena de caracteres
bool → booleano y es verdadero (true) falso (false)
char → 1 unico carcter
jloat → números decimales





## Código

Este es el código:

[Código](https://github.com/Samael696/arduino/blob/main/lampara_varios_colores.ino)

























