# Segurança e Configurações no Switch

## Senha de Acesso ao Modo Privilegiado

O modo privilegiado (`enable`) dá acesso total ao switch, por isso precisa ser protegido.

---

Método Menos Seguro

```
enable
configure terminal
enable password SUASENHA
end
write memory

```


A senha fica armazenada de forma menos protegida



---

Método Mais Seguro (Recomendado)

enable
configure terminal
enable secret SUASENHA
end
write memory

A senha é armazenada de forma criptografada


Analogia:

enable password → senha escrita em papel

enable secret → senha guardada em um cofre



---

**Remover Senha**

Se usou enable password:


```
enable
configure terminal
no enable password
end
write memory
reload

```

---

Se usou enable secret:

```
enable
configure terminal
no enable secret
end
write memory
reload

```

---

## Senha no Console (Acesso Físico)

Protege o acesso quando alguém conecta um cabo console ao switch.

```
enable
configure terminal
line console 0
password SUASENHA
login
end
write memory
```

Analogia:
É como colocar uma senha na porta de entrada física do equipamento.


---

**Atalho Importante**

Se o terminal travar durante comandos:

Ctrl + Shift + 6

Interrompe processos (ex: ping travado)


---

# EtherChannel (Link Aggregation)

O EtherChannel permite juntar várias portas físicas em uma única conexão lógica.


---

**Vantagens**

Aumenta a velocidade

Melhora a estabilidade

Cria redundância (se um cabo falhar, outro assume)


Analogia:
É como transformar várias ruas em uma avenida larga, permitindo mais fluxo de carros (dados).


---

# Configuração do EtherChannel

* Switch 1

```
enable
configure terminal
interface range gigabitEthernet 0/1-2
channel-group 1 mode active
end
write memory

```

---

* Switch 2

```
enable
configure terminal
interface range gigabitEthernet 0/1-2
channel-group 1 mode passive
end
write memory

```

---

# Protocolos do EtherChannel

* LACP (Link Aggregation Control Protocol)

Padrão aberto (IEEE 802.3ad / 802.1AX)

Funciona com diversas marcas



---

* PAgP (Port Aggregation Protocol)

Proprietário da Cisco

Funciona apenas em equipamentos Cisco



---

## Verificar Configuração

```
show etherchannel summary

```

ou

```
show interfaces etherchannel

```

Esses comandos mostram:

* Portas agregadas

* Status do canal

* Tipo de protocolo usado



---

**Informação Adicional**

Para o EtherChannel funcionar corretamente, as interfaces devem ter:

* Mesma velocidade

* Mesmo duplex

* Mesma VLAN (em access)

* Mesma configuração trunk (se for trunk)


Caso contrário, o canal pode não funcionar corretamente.


---

# Conclusão

Com essas configurações você consegue:

Proteger o switch com senha segura

Controlar acesso físico via console

Utilizar agregação de links para melhorar desempenho


Esses recursos são essenciais para redes mais seguras, rápidas e profissionais.