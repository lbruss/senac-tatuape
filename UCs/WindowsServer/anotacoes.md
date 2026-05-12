# 🌐 Web Server com Windows Server (IIS)

# 📌 Visão Geral

O **IIS (Internet Information Services)** é o servidor web da Microsoft.

Com ele, o Windows Server pode:

- 🌍 Hospedar sites
- 📄 Exibir páginas HTML
- 📡 Publicar aplicações web
- 🔗 Trabalhar integrado ao Active Directory e DNS

---

> 💡 **Analogia:**  
O IIS funciona como um “garçom” da web:
- o navegador faz o pedido
- o IIS entrega a página ao usuário

---

# 🛠️ Instalando o IIS

## 📌 Caminho

1. Abrir:
   - **Gerenciador do Servidor**

2. Ir em:
   - **Gerenciar**
   - **Adicionar Funções e Recursos**

---

## 📌 Instalação

1. Avançar até:
   - **Funções do Servidor**

2. Marcar:
   - ✅ **Servidor Web (IIS)**

---

## ⚙️ Serviços de Função

Na parte de serviços:

- No exemplo foi marcado tudo
- Em ambiente real:
  - o desenvolvedor informa quais tecnologias serão usadas

Exemplos:
- ASP.NET
- PHP
- CGI
- WebSocket
- FTP

---

# 🌍 Testando o IIS

Após instalar:

No navegador, acessar:

```text
http://IP_DO_SERVIDOR
``` id="0axvhu"

Exemplo:

```text
http://192.168.32.10
``` id="nsyu91"

---

## ✅ Resultado

Se aparecer a página padrão do IIS:
- instalação funcionou

---

# 📁 Estrutura do Site

## 📌 Pasta padrão do IIS

```text
C:\inetpub\wwwroot
``` id="9o4i4t"

---

## 📌 O que fica nessa pasta?

Arquivos do site:

- index.html
- imagens
- CSS
- JavaScript

---

# 🛠️ Publicando um Site

## 📌 Passos

1. Pegar:
   - HTML
   - imagens
   - arquivos do projeto

---

2. Ir em:

```text
C:\inetpub\wwwroot
``` id="2m2cm6"

---

3. Remover arquivos padrão do IIS

4. Colocar:
   - index.html
   - imagens
   - restante do projeto

---

# 🌍 Teste

No navegador:

```text
http://IP_DO_SERVIDOR
``` id="w6t7qt"

✔️ O site já deve abrir

---

# 🧠 Entendimento Importante

## 📌 Por que funciona?

Porque:

- IIS escuta requisições HTTP
- A pasta `wwwroot` é a raiz do site
- O arquivo `index.html` é carregado automaticamente

---

> 💡 **Analogia:**  
A pasta `wwwroot` é como a vitrine principal do site.

---

# 🌐 Configurar DNS para o Site

## 📌 Problema

Sem DNS:
- precisa acessar usando IP

Exemplo:
```text
http://192.168.32.10
``` id="xk7zlp"

---

## 📌 Solução

Criar um nome amigável:

```text
www.janelinha.tec
``` id="st5j2z"

---

# 🛠️ Criar Zona DNS

## Caminho

1. Gerenciador do Servidor
2. DNS
3. Botão direito no servidor
4. **Gerenciar DNS**

---

## 📌 Criar Zona

1. Botão direito:
   - **Zona de Pesquisa Direta**

2. Selecionar:
   - **Nova Zona**

---

## ⚙️ Configuração

- Zona Primária
- Integrada ao Active Directory
- Nome da zona:

Exemplo:
```text
janelinha.tec
``` id="6jjlwm"

---

# 🌍 Criar Registro Host (A)

## 📌 Dentro da zona criada

1. Área branca → botão direito
2. **Novo Host (A ou AAAA)**

---

## Configurar

### Nome:

```text
www
``` id="dmdby4"

---

### Endereço IP:

```text
192.168.32.10
``` id="s4ij5m"

---

✔️ Adicionar Host

---

# 🧪 Testar DNS

No CMD:

```bash
ping www.janelinha.tec
``` id="3x0f3h"

✔️ Deve responder com IP do servidor

---

# 🌍 Testar Site

No navegador:

```text
http://www.janelinha.tec
``` id="2z1v9s"

✔️ Site deve abrir normalmente

---

# 🌐 Hospedar Mais de Um Site

## 📌 Conceito

O IIS consegue hospedar vários sites no mesmo servidor.

Isso acontece usando:
- Hostname
- DNS
- Binding

---

> 💡 **Analogia:**  
O servidor é como um prédio com vários apartamentos:
- cada domínio aponta para um site diferente

---

# 🛠️ Criar Novo Site

## 📁 Criar pasta

Exemplo:

```text
C:\inetpub\Tabuadinha
``` id="1r9myl"

---

## 📌 Colocar arquivos HTML

- index.html
- imagens
- CSS
- JS

---

# ⚙️ Adicionar Site no IIS

## Caminho

1. Gerenciador do Servidor
2. Ferramentas
3. **Gerenciador dos Serviços de Informações da Internet (IIS)**

---

## 📌 Adicionar site

1. Expandir servidor
2. Botão direito em:
   - **Sites**
3. **Adicionar Site**

---

# ⚙️ Configuração

## Nome do site

Exemplo:
```text
Tabuadinha
``` id="d9hylf"

---

## Caminho físico

Selecionar:
```text
C:\inetpub\Tabuadinha
``` id="9d0d1m"

---

## Nome do Host

Exemplo:
```text
www.tabuadinha.tec
``` id="oqf0v6"

---

✔️ OK

---

# 🌐 Criar DNS do Novo Site

## 📌 Repetir processo DNS

Criar nova zona:

```text
tabuadinha.tec
``` id="kfg7dr"

---

## Criar Host A

### Nome:
```text
www
``` id="yv9j7m"

### IP:
```text
192.168.32.10
``` id="1lkw8j"

---

# 🧪 Teste Final

No navegador:

```text
http://www.tabuadinha.tec
``` id="dnp4r7"

✔️ Novo site deve abrir

---

# 🧠 Como o IIS diferencia os sites?

O IIS verifica:

- Nome digitado no navegador
- Binding configurado

Exemplo:

| Nome | Site aberto |
|---|---|
| www.janelinha.tec | Site 1 |
| www.tabuadinha.tec | Site 2 |

---

# ⚡ Resumo Relâmpago (10 linhas)

- IIS é o servidor web da Microsoft  
- Sites ficam em `wwwroot`  
- HTML é exibido automaticamente  
- DNS evita acessar por IP  
- Zona DNS cria domínio interno  
- Registro A aponta nome para IP  
- IIS suporta múltiplos sites  
- Cada site possui pasta própria  
- Hostname diferencia os sites  
- Navegador acessa pelo domínio criado  

---

# 📌 Resumo Final (Revisão Rápida)

- IIS hospeda sites no Windows Server  
- `wwwroot` é a pasta padrão  
- DNS cria nomes amigáveis  
- Registro A liga domínio ao IP  
- IIS consegue servir vários sites simultaneamente  

---