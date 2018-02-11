# esp8266-esp01-multiproposito
Placa multipropósito para desarrollar y prototipar con el esp8266 esp01

## Objetivo
El objetivo de esta placa es poder programar y acceder a todos los pines del esp8266 en su versi&oacute;n esp01.

## Notas:
1. Para entrar en modo programaci&oacute;n deb&eacute;s presionar el bot&oacute;n RESET y sin soltarlo presionar el bot&oacute;n FLASH. Luego soltar el bot&oacute;n RESET y posteriormente el bot&oacute;n FLASH. Con esto se logra resetear el esp8266 con el GPIO0 en GND, lo que hace que entre en modo programaci&oacute;n.

2. La alimentaci&oacute;n suplementaria debe ser con una fuente de 5v y por lo menos 1A (recomendado). En el PCB propuesto, el conector debe tener VCC en la parte exterior y GND en el centro.

3. Del adaptador USB-TTL, en mi caso uno basado en el chip CP2102, se pueden tomar los 5v y pasarlos por el regulador de tensi&oacute;n AMS1117 del circuito para obtener 3.3v. No se debe usar los 3.3v del adaptador USB-TTL porque no tienen suficiente corriente para alimentar al esp8266 y puede derivar en coportamientos inestables.

## Esquem&aacute;tico
![](https://github.com/nelopauselli/esp8266-esp01-multiproposito/raw/master/Esquematico.png "Esquem&aacute;tico")

## PCB
![](https://github.com/nelopauselli/esp8266-esp01-multiproposito/raw/master/PCB.png "PCB")

[Descargar PDF para imprimir](https://github.com/nelopauselli/esp8266-esp01-multiproposito/raw/master/PCB.pdf)

## Pr&oacute;xima versi&oacute;n
* Conectar con RTS y DTR del CP2102
* Colocar un diodo en GND del regulador para evitar que ingresen 5v por ese conector.
* Cuando se ingresa en modo programaci&oacute;n, desconectar los pines expuestos GPIO 0-3 hasta el siguiente reset.