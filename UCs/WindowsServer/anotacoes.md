# Tipos de Rede: Workgroup vs Cliente-Servidor (Active Directory)

Este guia explica de forma simples como funcionam os dois principais modelos de rede:

- Workgroup (Grupo de Trabalho)
- Cliente-Servidor (Active Directory)

---

## Rede Workgroup (Grupo de Trabalho)

**O que é ?**

É uma rede **simples e descentralizada**, onde cada computador funciona de forma independente.

---

## Características

- Usuários e senhas ficam **em cada computador**
- Não existe servidor central
- Cada máquina precisa ser configurada separadamente
- Indicado para redes pequenas (até ~20 computadores)

---

**Analogia**

É como um grupo de pessoas sem chefe:  
cada um cuida do seu próprio trabalho, sem controle central.

---

## Desvantagens

- Difícil de gerenciar  
- Pouca segurança  
- Não escala bem  

---

# Rede Cliente-Servidor (Active Directory)

**O que é?**

É uma rede **centralizada**, onde existe um servidor que controla tudo.

Esse servidor roda o **Active Directory (AD)** no Windows Server.

---

## Características

- Usuários centralizados  
- Login único em qualquer máquina  
- Controle de acesso  
- Mais segurança  
- Ideal para empresas  

---

**Analogia**

É como uma empresa com um **chefe (servidor)**:

- Ele controla quem entra  
- Define permissões  
- Organiza tudo  

---

# Active Directory (AD)

Quando você instala o AD, o servidor vira um:

## Controlador de Domínio (Domain Controller - DC)

- Ele é o “cérebro da rede”

---

## Estrutura de Domínio

Exemplo:

bruss.tec        → domínio principal (matriz) sp.bruss.tec     → filial sc.bruss.tec     → filial

- Isso forma uma estrutura chamada **árvore de domínio**

---

# RODC (Read-Only Domain Controller)

**O que é?**

- Controlador de domínio **somente leitura**
- Cópia do servidor principal

---

**Analogia**

É como uma **filial com acesso limitado**:

- Pode consultar dados  
- Não pode fazer alterações críticas  

**Muito usado em locais com menos segurança**

---

# Instalação do Active Directory

## Pré-requisitos

- Nome do servidor definido  
- IP fixo configurado  
- Espaço em disco disponível  
- DNS (instalado automaticamente com o AD)

---

**Passo a passo**

1. Abrir **Gerenciador do Servidor**
2. Clicar em:

Gerenciar → Adicionar funções e recursos

3. Avançar até selecionar o servidor
4. Marcar:

Serviços de Domínio Active Directory

5. Clicar em **Adicionar recursos**
6. Avançar até **Instalar**

---

**Promover a controlador de domínio**

Após instalar:

- Clique em:

Promover este servidor a um controlador de domínio

---

## Configuração

1. Escolher:

Adicionar uma nova floresta

2. Definir domínio (ex: `bruss.tec`)
3. Escolher nível funcional (versão do servidor)
4. Criar senha de recuperação
5. Avançar até instalar

- O servidor irá reiniciar automaticamente

---

# Instalação do DHCP

**O que é DHCP?**

É o serviço que distribui IP automaticamente na rede.

**Analogia:**  
É como um **atendente que entrega números de senha (IPs)** para cada dispositivo.

---

## Instalar DHCP

1. Gerenciador do Servidor  
2. Clique em:

Gerenciar → Adicionar funções e recursos

3. Selecionar:

Servidor DHCP

4. Avançar até instalar  
5. Concluir configuração  

---

# Configurar Escopo DHCP

## Informações necessárias (exemplo)

IP inicial: 192.168.32.100 IP final:   192.168.32.200 Duração:    2 horas DNS:        192.168.32.10 Gateway:    192.168.32.1

---

**Criar escopo**

1. Abrir:

Ferramentas → DHCP

2. Clique com botão direito em **IPv4**
3. Selecione:

Novo Escopo

4. Avançar e configurar:

- Nome e descrição  
- Intervalo de IP  
- Tempo de concessão  
- Gateway  
- DNS  

**Ignorar WINS (não é necessário)**

---

# Testar DHCP

Em outro computador:

1. Abrir o **CMD**
2. Digitar:

```
ipconfig
```

---

**Verifique:**

- Se recebeu IP dentro do intervalo

- Se o DNS corresponde ao servidor

- Se o gateway está correto


**Se tudo estiver certo, o DHCP está funcionando**

---

# Conclusão

**Comparação**

Característica	Workgroup	Active Directory

- Tipo	Descentralizado	Centralizado
- Usuários	Local	Central
- Segurança	Baixa	Alta
- Escalabilidade	Limitada	Alta

---

# Resumo

Workgroup → simples, pequeno, doméstico

AD → profissional, seguro, empresarial

---

**Insight Final**

Em redes modernas, o padrão é usar:

- Active Directory

- DHCP

- DNS

**Isso permite controle total, organização e segurança na rede.**