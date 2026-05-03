# 🖥️ Windows Server 2022 — Instalação, Versões e Configuração de Rede

## 📌 Visão Geral

O **Windows Server 2022** é um sistema operacional voltado para servidores, ou seja, máquinas responsáveis por fornecer serviços (rede, arquivos, autenticação, etc.) para outros computadores.

> 💡 **Analogia:**  
Um servidor é como o “cérebro” de uma empresa, enquanto os outros computadores são os “usuários” que dependem dele.

---

## 🧩 Versões do Windows Server

### 🔹 Standard
- Possui menos recursos
- Indicado para ambientes menores
- Pode ter limitações em virtualização

### 🔹 Datacenter
- Versão mais completa 💰
- Suporte avançado a virtualização
- Mais recursos de segurança e gerenciamento

> 💡 **Analogia:**  
- **Standard** = carro básico (faz o essencial)  
- **Datacenter** = carro completo (máximo desempenho + recursos)

✔️ **Recomendação prática:** usar **Datacenter**, principalmente para estudo e testes.

---

## ⚙️ Arquitetura e Estabilidade

- Versão: **Windows Server 2022 x64 (64 bits)**
- Mais estável e com menos falhas comparado a versões antigas
- Atualizações corrigem bugs e melhoram segurança

✔️ Importante:  
As versões mudam pouco na prática. Quem aprende uma, consegue usar outras facilmente.

---

## 💿 Instalação do Windows Server

A instalação é **muito semelhante ao Windows comum**:

### Etapas principais:
1. Iniciar pelo boot (pendrive/ISO)
2. Escolher idioma
3. Selecionar versão (**Datacenter recomendado**)
4. Avançar e instalar

> 💡 Aqui não tem segredo: é praticamente igual instalar o Windows 10/11.

---

# 🌐 Configuração de Rede (NIC Teaming)

## 📌 O que é NIC Teaming?

É o **agrupamento de placas de rede** para trabalhar como uma só.

### 🎯 Objetivos:
- Aumentar desempenho 🚀
- Garantir redundância (se uma falhar, outra assume)

> 💡 **Analogia:**  
É como ter várias conexões de internet juntas: se uma cair, a outra continua funcionando.

---

## ⚙️ Criando um Agrupamento de Rede

### Passo a passo + explicação:

1. **Ir em Servidor Local**
   - Onde ficam as configurações principais do servidor

2. **Localizar NIC (placas de rede)**
   - Mostra todas as interfaces disponíveis

3. **Clique em “Desabilitado” (NIC Teaming)**
   - Abre a configuração de agrupamento

4. **Ir em “Tarefas” → “Nova Equipe”**
   - Aqui você cria o grupo de placas

5. **Definir um nome**
   - Exemplo: `NICBruss`
   - Serve para identificar o agrupamento

6. **Selecionar as placas de rede**
   - Escolher quais placas farão parte do grupo

---

## ⚙️ Configurações Avançadas

### 🔹 Modo de Agrupamento: **Alternar Independente**
- As placas funcionam sem depender de switch específico

### 🔹 Balanceamento de carga: **Dinâmico**
- Distribui o tráfego automaticamente entre as placas

### 🔹 Adaptador em espera: **Nenhum**
- Todas as placas ficam ativas

### 🔹 Interface primária:
- Pode deixar padrão

> 💡 **Resumo técnico:**  
Essas configurações garantem **equilíbrio entre desempenho e segurança**.

---

# 🌍 Configuração de IP (Manual)

## 📌 Caminho:

1. Canto inferior direito → botão direito no ícone de rede  
2. **Abrir Configurações de Rede**
3. Ir em:
   - Ethernet  
   - Alterar opções de adaptador
4. Clicar com botão direito na interface criada (ex: NICBruss)
5. Selecionar:
   - **Protocolo IP Versão 4 (TCP/IPv4)**
   - Clique em **Propriedades**

---

## ⚙️ Configurando IP

Marcar:

- ✅ **Usar o seguinte endereço IP**

Exemplo:

| Configuração | Valor |
|-------------|------|
| IP          | 192.168.32.10 |
| Máscara     | 255.255.255.0 |
| Gateway     | 192.168.32.1 |

---

### 📌 O que significa cada um?

- **IP:** identificação do servidor na rede  
- **Máscara:** define o tamanho da rede  
- **Gateway:** “porta de saída” para outras redes (ex: internet)

> 💡 **Analogia:**  
- IP = número da casa  
- Máscara = bairro  
- Gateway = saída do bairro

---

# 🖥️ Alterando Nome do Servidor

## Passo a passo:

1. Ir em **Servidor Local**
2. Clicar em **Nome do Computador**
3. Clicar em **Alterar**
4. Definir um nome (ex: `SRVBruss`)
5. Confirmar

### ⚠️ Observação:
- Pode pedir reinicialização
- Se der erro, reinicie e tente novamente

---

# ⚡ Resumo Relâmpago (10 linhas)

- Windows Server 2022 é um sistema para servidores  
- Versão Standard é básica; Datacenter é completa  
- Datacenter é mais indicada para estudo  
- Instalação é igual ao Windows comum  
- NIC Teaming junta placas de rede  
- Serve para desempenho e redundância  
- Modo independente não depende de switch  
- Balanceamento dinâmico distribui tráfego  
- IP manual define endereço fixo  
- Nome do servidor identifica a máquina na rede  

---

# 📌 Resumo Final (Revisão Rápida)

- Use **Windows Server 2022 Datacenter x64**
- Instalação é simples (igual Windows comum)
- Configure **NIC Teaming** para melhorar rede
- Use:
  - Agrupamento: independente
  - Balanceamento: dinâmico
- Configure IP fixo (IPv4)
- Defina nome do servidor
- Reinicie se necessário

---
