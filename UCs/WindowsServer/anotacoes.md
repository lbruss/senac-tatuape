# 🏢 Active Directory — Unidade Organizacional (OU) e Usuários

Este guia mostra como:

- Criar uma **Unidade Organizacional (OU)**  
- Criar e gerenciar usuários  
- Conectar um computador ao domínio  
- Aplicar regras de acesso  

---

# 🧠 O que é uma Unidade Organizacional (OU)?

A **OU (Organizational Unit)** é como uma pasta dentro do Active Directory usada para:

- Organizar usuários  
- Separar setores (RH, TI, Financeiro)  
- Aplicar regras específicas  

---

## 🧠 Analogia

Pense na OU como uma **gaveta de escritório**:

- Cada gaveta guarda um tipo de documento  
- Facilita organização e controle  

---

# 📁 Criar Unidade Organizacional (OU)

## 📌 Passo a passo

1. Abrir:

Ferramentas → Usuários e Computadores do Active Directory

2. Clique com botão direito no domínio (ex: `bruss.tec`)
3. Vá em:

Novo → Unidade Organizacional

4. Defina um nome (ex: `TI`, `Financeiro`)
5. Clique em **OK**

---

# 👤 Criar Usuários

## 📌 Passo a passo

1. Entre na OU criada  
2. Clique com botão direito na área branca  
3. Vá em:

Novo → Usuário

4. Preencha:

- Nome  
- Sobrenome  
- Nome de logon  

---

## 🔐 Definir senha

Escolha uma senha e configure opções:

- Usuário deve alterar senha no próximo logon  
- Usuário não pode alterar senha  
- Senha nunca expira  
- Conta desativada  

👉 Selecione conforme a necessidade

---

## 📌 Finalizar

- Clique em **Avançar → Concluir**

---

# 🔄 Gerenciar Usuários

## 📌 Habilitar ou desabilitar conta

- Clique com botão direito no usuário  
- Escolha:

Habilitar conta

ou

Desabilitar conta

---

## 📌 Exemplos práticos

- **Daniel** → não pode alterar senha  
- **Enzo** → senha nunca expira + conta desativada  
- **Ezequiel** → deve alterar senha no próximo login  

---

# 🛟 Criar usuário administrador reserva

## 📌 Por que fazer isso?

👉 Para evitar perda de acesso caso o administrador principal tenha problemas.

---

## 📌 Passo a passo

1. Vá em:

Users

2. Clique com botão direito em:

Administrador

3. Clique em:

Copiar

4. Crie o novo usuário

---

## 📌 Configuração importante

- Marque:

Senha nunca expira

---

## 📂 Organizar

- Arraste esse usuário para a OU criada  

👉 Esse usuário terá privilégios administrativos

---

# 🌐 Adicionar computador ao domínio

## 📌 Testar DNS antes

No computador cliente:

```bash
ping bruss.tec

👉 Se responder, o DNS está funcionando


---

📌 Entrar no domínio

1. Vá em:

Configurações → Sistema → Sobre


2. Clique em:

Configurações avançadas do sistema


3. Aba:

Nome do computador → Alterar


4. Selecione:

Domínio


5. Digite:

bruss.tec




---

🔐 Autenticação

Digite usuário e senha do administrador do servidor


👉 Se aparecer mensagem de boas-vindas, deu certo ✅


---

🔄 Reiniciar

Reinicie o computador



---

🔑 Testar login

Após reiniciar:

Clique em Outro usuário

Faça login com um usuário criado no servidor



---

📌 Verificar no servidor

No Active Directory:

Domínio → Computers

👉 O computador aparecerá na lista


---

🎯 Controlar acesso dos usuários

📌 Configurar restrições

1. Abra o usuário


2. Vá na aba:

Conta




---

⏰ Horário de login

Defina dias e horários permitidos



---

💻 Restringir computadores

Clique em:

Fazer logon em

Selecione:

Os seguintes computadores

Adicione os nomes dos PCs



---

🧠 Analogia

É como um cartão de acesso:

Só funciona em certos lugares

Só funciona em certos horários



---

💡 Informação Adicional

Essas configurações são muito usadas em:

Bancos

Empresas grandes

Ambientes corporativos


👉 Aumenta a segurança e o controle sobre os usuários


---

🧠 Conclusão

Com isso você consegue:

Organizar usuários com OUs

Criar e controlar contas

Adicionar computadores ao domínio

Definir regras de acesso



---

🎯 Resumo final

OU → organização

Usuários → controle de acesso

Domínio → centralização

Regras → segurança


👉 Isso é a base de qualquer rede corporativa moderna.