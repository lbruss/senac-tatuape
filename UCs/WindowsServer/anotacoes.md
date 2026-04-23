# Usuários, Grupos e Permissões de Pasta

**1. Criar Unidade Organizacional (UO)**

A **UO (Unidade Organizacional)** funciona como uma “pasta” para organizar usuários e grupos dentro do domínio.

**Passo a passo**

1. Abra:

Usuários e Computadores do Active Directory

2. Clique com o botão direito no domínio
3. Vá em:

Novo → Unidade Organizacional

4. Defina um nome (ex: `TI`, `Financeiro`, `Projetos`)

* Criar usuários

---

**Analogia**

Usuários são como **funcionários da empresa**, cada um com seu login e senha.

---

#  Criar grupo

Grupos facilitam o gerenciamento. Em vez de dar permissão para cada usuário, você dá para o grupo.

**Criar grupo**

1. Dentro da UO:

Novo → Grupo

2. Defina um nome (ex: `Equipe-Projeto`)

---

## Tipo de grupo

- **Segurança** → usado para permissões (acesso a pastas, arquivos, etc) 
- **Distribuição** → usado para e-mails (listas)  

* Neste exemplo foi selecionado: **Segurança**

---

## Escopo do grupo

- **Domínio Local** → usado dentro do domínio específico  
- **Global** → usado dentro do domínio e recomendado para usuários  
- **Universal** → usado em toda a floresta  

Para o exemplo foi selecionado: **Global**

---

**Analogia**

Grupo é como um **time** (ex: equipe de TI).  
Você não precisa dar acesso para cada pessoa, basta dar acesso ao time.

---

# Adicionar usuários ao grupo

**Passo a passo**

1. Dê duplo clique no grupo  
2. Vá em:

Membros → Adicionar

3. Digite os nomes dos usuários  

* Para vários usuários:

Coloque o começo dos nomes dos usuários, exemplo:

geo;gabr

4. Clique em:

Verificar nomes → OK → Aplicar → OK

Também é possível adicionar **grupos dentro de grupos**

---

# Compartilhamento simples de pasta

## Criar e compartilhar

1. Crie uma pasta em qualquer HD  
2. Clique com botão direito:

Conceder acesso a → Pessoas específicas

3. Selecione:

Todos

4. Defina permissão:

Leitura/Gravação

5. Clique em:

Compartilhar

---

**Analogia**

Esse método é como deixar a porta aberta para todo mundo entrar.

---

# Compartilhamento avançado (controle real)

Aqui você define exatamente quem pode acessar e o que pode fazer.

**Passo a passo**

* Aba Compartilhamento

1. Clique com botão direito na pasta:

Propriedades → Compartilhamento → Compartilhamento Avançado

2. Marque:

Compartilhar esta pasta

3. Clique em:

Permissões

4. Remova:

Todos

5. Adicione:

Usuários do domínio

6. Marque:

Alteração

7. Clique em OK

---

* Aba Segurança

1. Vá em:

Segurança → Avançadas

2. Clique em:

Desabilitar herança

3. Selecione:

Converter permissões herdadas

4. Clique em:

Editar

5. Remova:

Usuários

6. Clique em:

Adicionar

7. Adicione usuários ou grupos desejados  
8. Marque:

Modificar

9. Clique em OK

---

**Analogia**

Aqui você está criando uma **lista VIP**:  
- Alguns podem só ver  
- Outros podem editar  
- Outros podem fazer tudo  

---

# Exemplo prático (empresa)

## Cenário

Pasta: `Projetos`

- Funcionários → podem **ler e copiar**
- Gerente → pode **modificar tudo**

## Configuração

- Grupo Funcionários → **sem permissão de modificar**
- Grupo Gerente → **com permissão de modificar**

---

# Testar acesso

*(Em outro computador**

1. Pressione:

Windows + R

2. Digite:

\NOME-DO-SERVIDOR

3. Acesse a pasta compartilhada

---

**Analogia**

É como um funcionário indo até outro setor da empresa para acessar arquivos.

---

**Informações adicionais**

**Permissões NTFS vs Compartilhamento**

- **Compartilhamento** → controla acesso pela rede  
- **Segurança (NTFS)** → controla o que pode fazer dentro da pasta  

**A regra mais restritiva sempre prevalece.**

---

* Boas práticas

- Use **grupos**, não usuários diretamente  
- Separe por departamentos  
- Evite usar “Todos” em ambientes reais  

---

# Resumo final

- UO → organização  
- Usuários → pessoas  
- Grupos → equipes  
- Permissões → controle de acesso  

**Resultado: rede organizada, segura e fácil de administrar.**