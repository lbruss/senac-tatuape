# ☕ Continuação Tomcat — MySQL (Usuários, Workbench e Backup)

Este guia mostra como:

- Criar usuário administrador no MySQL  
- Conectar via MySQL Workbench  
- Executar comandos  
- Fazer backup e restauração de banco de dados  

---

# 👤 Criar usuário administrador no MySQL

## 📌 Acessar o MySQL

No Debian:

```bash
mysql -u root -p

Digite a senha do root.


---

👤 Criar usuário

CREATE USER 'dba'@'%' IDENTIFIED BY '123@senac';

👉 % significa que o usuário pode acessar de qualquer IP.


---

🔑 Dar permissões

GRANT ALL PRIVILEGES ON *.* TO 'dba'@'%';
FLUSH PRIVILEGES;


---

🧠 Analogia

Esse usuário é como um administrador geral do banco, com acesso total a tudo.


---

🖥️ MySQL Workbench

O MySQL Workbench é uma ferramenta gráfica para gerenciar bancos de dados.

👉 É como um “VS Code do banco de dados”.


---

🔌 Criar conexão

1. Clique em + (Nova conexão)


2. Preencha:



Nome da conexão: qualquer (ex: ServidorDB)

Host: IP do servidor

Usuário: dba


3. Clique em OK




---

🔐 Conectar

Clique na conexão criada

Digite a senha



---

⚠️ Executar comandos

👉 Diferente do terminal:

Use:

Ctrl + Enter


Para executar comandos


---

🧪 Exemplos de comandos

SHOW DATABASES;

USE agenda;

SELECT * FROM contatos;


---

💾 Backup de Banco de Dados

📌 Passo a passo (Exportar)

1. Vá em:

Administration → Data Export


2. Selecione o banco (ex: agenda)


3. Escolha:

Dump Structure and Data


4. Clique em:

Start Export




---

🧠 Analogia

Backup é como tirar uma foto do banco de dados para guardar caso algo dê errado.


---

❌ Apagar banco de dados

DROP DATABASE agenda;

⚠️ Isso apaga tudo permanentemente.


---

🔄 Restaurar Backup (Importar)

📌 Importante

👉 Você precisa criar o banco antes de restaurar.


---

📌 Criar banco

CREATE DATABASE agenda;


---

📥 Importar no Workbench

1. Vá em:

Administration → Data Import/Restore


2. Clique nos 3 pontinhos e selecione o backup


3. Escolha o banco (agenda)


4. Clique em:

Start Import




---

💡 Informação Adicional

🔹 Segurança

Permitir acesso com '%' é prático, mas:

Em produção, o ideal é limitar por IP:

'dba'@'192.168.0.%'


👉 Isso aumenta a segurança.


---

🔹 Uso real

Esse tipo de configuração é comum em:

Sistemas web (Tomcat + MySQL)

Aplicações empresariais

APIs



---

🧠 Conclusão

Agora você consegue:

Criar usuários no MySQL

Acessar remotamente

Gerenciar banco com interface gráfica

Fazer backup e restore



---

🎯 Resumo final

Usuário dba → administrador do banco

Workbench → interface visual

Backup → segurança dos dados

Restore → recuperação


👉 Isso completa o ambiente profissional com Tomcat + Banco de Dados 🚀