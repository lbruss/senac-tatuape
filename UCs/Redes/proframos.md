Colocar senha no Switch
Jeito menos seguro:

enable
configure terminal
enable password COLOCASENHA
exit
write memory

Jeito mais seguro:

enable
configure terminal
enable secret COLOCASENHA
exit
write memory

Se voce usou o comando password:

enable
configure terminal 
no enable password
exit
write memory
reload

Se voce usou o comando secret:

enable
configure terminal 
no enable secret
exit
write memory
reload

Para colocar senha ao colocar o cabo console no notebook/computador e no Switch:

enable
configure terminal
line con 0
password COLOCASENHA
login
exit
exit
write memory

Combinação de teclas para caso travar o Switch ou algum outro host:

Ctrl + Shift + 6

EtherChannel ou Link aggregation (os dois são a mesma coisa)

Comandos:

No primeiro Switch:
enable
configure terminal
int range gigabitEthernet 0/1-2
channel-group 1 mode active
exit
exit
write memory 

No segundo Switch:

enable
configure terminal
int range gigabitEthernet 0/1-2
channel-group 1 mode passive
exit
exit
write memory

Protocolos para fazer o EtherChannel/Link Aggregation:

LACP - Para qualquer marca de Switch 
PAgP - Apenas para Switchs da Cisco

Comando para ver as configurações do EtherChannel/Link Aggregation:

show etherchannel

Ou

show interfaces etherchannel
