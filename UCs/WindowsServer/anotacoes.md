# 📁 Pasta Base (Home Folder) no Active Directory

## 📌 Visão Geral

A **Pasta Base (Home Folder)** funciona como uma “gaveta pessoal” de cada usuário dentro da rede.

- Cada usuário tem sua própria pasta  
- A pasta é criada automaticamente  
- Pode ser mapeada como uma unidade (ex: H:)  

> 💡 **Analogia:**  
É como um armário com várias gavetas — cada funcionário tem a sua, com chave própria.

---

# 👁️ Compartilhamento Oculto

## 📌 Como funciona

Se o nome do compartilhamento termina com **`$`**, ele fica oculto na rede.

Exemplo:

home$

✔️ A pasta existe, mas não aparece ao navegar na rede  
✔️ Só acessa quem sabe o caminho

---

# 🛠️ Criando a Pasta HOME (Base)

## 📁 Passo inicial

1. Criar pasta:
   - Nome: `HOME`

---

## 🔗 Compartilhar

1. Botão direito → **Propriedades**
2. Aba:
   - **Compartilhamento**
3. **Compartilhamento Avançado**

---

### Configurar:

- ✔️ Marcar: **Compartilhar esta pasta**
- Nome:

home$

---

## 🔐 Permissões de compartilhamento

1. Clique em:
 - **Permissões**

2. Remover:
 - ❌ Todos

3. Adicionar:
 - ✅ **Usuários do domínio**

4. Marcar:
 - ✔️ **Alteração**

✔️ Isso permite criar e alterar arquivos via rede

---

# 🔒 Configuração de Segurança (NTFS) — Forma Correta

## 📌 Objetivo

Garantir que:
- Cada usuário acesse **apenas sua pasta**
- Ninguém veja ou modifique pasta de outro

---

## 🛠️ Passo a passo

1. Aba:
 - **Segurança**

2. Clique:
 - **Avançadas**

---

3. Clique:
 - **Desabilitar herança**

4. Selecionar:
 - **Remover todas as permissões herdadas**

---

5. Clique em:
 - **Adicionar**

---

## 👤 Configurar permissões

1. **Selecionar entidade de segurança**
 - Digitar:
   ```
   Usuários
   ```

---

2. Em:
 - **Aplicável a**
 - Selecionar:
   - **Esta pasta somente**

---

3. Em permissões:
 - ✔️ Marcar **Modificar**

---

✔️ Confirmar tudo com OK

---

## 📌 Por que isso funciona?

- Usuários podem criar sua própria pasta  
- O sistema automaticamente define o dono da pasta  
- Só o dono terá acesso total  

---

# 🔗 Vincular Pasta Base ao Usuário

## 🛠️ Passo a passo

1. Abrir:
 - **Usuários e Computadores do AD**

2. Selecionar usuários

3. Botão direito → **Propriedades**

---

4. Aba:
 - **Perfil**

---

5. Em:
 - **Pasta Base (Home Folder)**

- Marcar:
- **Conectar**

- Escolher letra:
- Ex: `H:`

---

6. Caminho:

\NOMEDODOMINIO\home$%USERNAME%

---

## 📌 Explicação

- `\\NOMEDODOMINIO` → servidor  
- `home$` → pasta compartilhada  
- `%USERNAME%` → cria pasta com nome do usuário automaticamente  

✔️ Cada usuário acessa sua própria pasta

---

# 🔄 Resultado Final

Quando o usuário faz login:

- Unidade (H:) aparece automaticamente  
- Pasta pessoal é criada (se não existir)  
- Acesso é exclusivo  

---

# 🔒 Problema comum (e solução)

## ❌ Problema

Usuários conseguem acessar pastas de outros digitando:

\servidor\home$

---

## ✅ Solução aplicada acima

- Ajustar permissões NTFS corretamente  
- Cada usuário só acessa sua pasta  

---

# 👁️ Ocultar pastas (Enumeração)

## 📌 Melhorar segurança visual

Mesmo com permissão correta, ainda dá pra “ver” pastas

---

## 🛠️ Ativar Enumeração Baseada em Acesso

1. Ir em:
   - **Gerenciador do Servidor**

2. **Serviços de Arquivo e Armazenamento**

3. **Compartilhamentos**

---

4. Botão direito na pasta → **Propriedades**

5. Aba:
   - **Configurações**

---

6. Marcar:
   - ✅ **Habilitar enumeração baseada em acesso**

---

✔️ Agora:
- Usuário só vê a própria pasta  
- Outras ficam invisíveis  

---

# ⚡ Resumo Relâmpago (10 linhas)

- Pasta base é a pasta pessoal do usuário  
- Pode ser mapeada como unidade (H:)  
- $ no nome deixa o compartilhamento oculto  
- Usuários do domínio recebem permissão  
- NTFS controla acesso real  
- Herança deve ser desabilitada  
- %USERNAME% cria pasta automática  
- Cada usuário acessa só sua pasta  
- Enumeração oculta pastas de outros  
- Tudo funciona automaticamente no login  

---

# 📌 Resumo Final (Revisão Rápida)

- Pasta base = armazenamento individual  
- Compartilhar como `home$`  
- Configurar NTFS corretamente  
- Usar `%USERNAME%` no caminho  
- Ativar enumeração para segurança visual  

---
