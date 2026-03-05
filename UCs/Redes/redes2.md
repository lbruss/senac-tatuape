# Módulo 16



codigos 
Comados da Aula:



SW> enable
SW#
....

SW#conf t
SW(config)#hostname SWFELIZ
SWFELIZ(config)#

....

…

SW# conf t
SW(config)# vlan 2
SW(config-vlan)#name NOMEdaVLAN

…

SW(config-vlan)#end
SW#
...

SW(config-vlan)# “CTRL+Z” 
SW#

...

SW(config-vlan)# exit
SW(config)#

…

SW# Show Vlan Brief

…

SW(config)#interface f0/1
SW(config-if)#switchport access vlan 2
^
…

SW# Show RUN
..
SW#WR
...

SW# copy run star

....



SW(config)#interface range fast 0/1-10
SW(config-if-range)#switchport access vlan 35







------
SW(config)#interface g0/1
SW(config-if)#switchport mode trunk (trafego entre várias VLAns)
----


