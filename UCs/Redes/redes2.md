# Módulo 16













# 🔐 Entrar no modo privilegiado

```bash
SW> enable
````

Resultado:

```bash
SW#
```

---

# ⚙️ Entrar no modo de configuração

```bash
SW# configure terminal
```

ou

```bash
SW# conf t
```

Resultado:

```bash
SW(config)#
```

---

# 🏷️ Alterar o nome do Switch

```bash
SW(config)# hostname SWFELIZ
```

Resultado:

```bash
SWFELIZ(config)#
```

---

# 🧩 Criar uma VLAN

```bash
SW(config)# vlan 2
```

---

# 📝 Nomear a VLAN

```bash
SW(config-vlan)# name NOMEdaVLAN
```

---

# 🔙 Sair do modo VLAN

Existem três formas:

### 1️⃣ Comando `end`

```bash
SW(config-vlan)# end
```

---

### 2️⃣ Teclas de atalho

```bash
CTRL + Z
```

---

### 3️⃣ Comando `exit`

```bash
SW(config-vlan)# exit
```

---

# 🔎 Ver VLANs configuradas

```bash
SW# show vlan brief
```

Esse comando mostra:

* VLANs existentes
* Nome da VLAN
* Portas associadas

---

# 🔌 Colocar uma porta em uma VLAN

Exemplo usando a porta **FastEthernet 0/1**

```bash
SW(config)# interface f0/1
```

Depois:

```bash
SW(config-if)# switchport mode access
SW(config-if)# switchport access vlan 2
```

Agora essa porta pertence à **VLAN 2**.

---

# 🔌 Configurar várias portas ao mesmo tempo

Exemplo: portas **1 até 10**

```bash
SW(config)# interface range fastEthernet 0/1-10
```

Depois:

```bash
SW(config-if-range)# switchport mode access
SW(config-if-range)# switchport access vlan 35
```

Isso coloca **10 portas na VLAN 35 de uma vez**.

---

# 🔀 Porta Trunk (Comunicação entre VLANs)

Portas **Trunk** permitem transportar **tráfego de várias VLANs ao mesmo tempo**.

Muito usado para conectar:

* Switch com Switch
* Switch com Roteador
* Switch com Servidor

### Configuração

```bash
SW(config)# interface g0/1
SW(config-if)# switchport mode trunk
```

**Analogia:**
Uma porta trunk funciona como uma **rodovia com várias faixas**, onde cada faixa representa uma VLAN diferente.

---

# 📄 Ver Configuração Atual

```bash
SW# show running-config
```

Mostra toda a configuração ativa do switch.

---

# 💾 Salvar Configuração

Para salvar a configuração permanentemente:

```bash
SW# write memory
```

ou

```bash
SW# copy running-config startup-config
```

Isso evita perder as configurações após reiniciar o switch.

---

# ✅ Conclusão

Os **switches modernos** são fundamentais para redes atuais porque:

* Evitam colisões
* Melhoram o desempenho
* Permitem segmentação com VLAN
* Possuem recursos avançados de gerenciamento

Por isso, o **Hub praticamente não é mais utilizado em redes modernas**.

```
```
