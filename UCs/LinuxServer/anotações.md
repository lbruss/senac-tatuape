**Passo 5 — Instalar MySQL (Oracle)**

O **MySQL** é um banco de dados usado para armazenar informações da aplicação.

---

**Analogia**

Se o Tomcat é o “motor” da aplicação, o banco de dados é o **arquivo onde tudo é guardado** (usuários, dados, registros, etc).

---

## Instalar dependência (chaves)

```
apt install gnupg
```

- Serve para validar pacotes com segurança (assinatura digital).

---

**Baixar repositório oficial do MySQL**

1. Acesse:

https://mysql.com

2. Vá em:

Downloads → MySQL Community Edition → MySQL APT Repository

3. Copie o link do download

---

**Baixar no Debian**

wget LINK_COPIADO

Exemplo:

```
wget https://dev.mysql.com/get/mysql-apt-config_0.8.xx.deb
```

---

**Instalar pacote**

```
dpkg -i mysql-apt-config*.deb
```

- Use TAB e ENTER para confirmar as opções padrão.

---

**Atualizar repositórios**

```
apt update
```

---

**Instalar MySQL**

```
apt install mysql-server
```

- Durante a instalação:

Defina a senha do usuário root do banco

---

**Verificar instalação**

```
mysql -V
```

---

**Usando o MySQL (Exemplo Prático)**

- Acessar o banco

```
mysql -u root -p
```

Digite a senha configurada.

---

- Limpar tela

Ctrl + L

---

- Ver bancos existentes

```
SHOW DATABASES;
```

---

**Criar banco de dados**

```
CREATE DATABASE agenda;
```

---

**Usar banco**

```
USE agenda;
```

---

**Ver tabelas**

```
SHOW TABLES;
```

---

**Criar tabela**

```java
CREATE TABLE contatos (
  idcon INT PRIMARY KEY AUTO_INCREMENT,
  nome VARCHAR(30) NOT NULL,
  fone VARCHAR(15) NOT NULL,
  email VARCHAR(30)
);
```

---

**Descrever tabela**

```
DESCRIBE contatos;
```

---

**Sair do MySQL**

Ctrl + D

---

# Deploy de Aplicação Java (.WAR)

**O que é um arquivo WAR?**

É um pacote de aplicação Java

Contém tudo que o sistema precisa para rodar

---

**Analogia**

Um arquivo .war é como um arquivo compactado (.zip) com um sistema pronto dentro.


---

# Implantar aplicação no Tomcat

1. Abra o navegador:

http://IP_DO_SERVIDOR:8080

2. Clique em:

Manager App

3. Faça login com usuário admin

---

**Fazer upload do WAR**

Na seção:

WAR file to deploy

Clique em Escolher arquivo

Selecione seu arquivo .war

Clique em:

Deploy

---

**Aplicação implantada**

Após o deploy, aparecerá algo como:

/agenda

---

**Acessar aplicação**

No navegador:

http://IP_DO_SERVIDOR:8080/agenda

---

**Informação Adicional**

- Integração Tomcat + MySQL

Muitas aplicações Java usam:

Tomcat → executa o sistema

MySQL → armazena dados


**Eles trabalham juntos o tempo todo.**


---

- Segurança básica

Após instalar o MySQL, é recomendado:

```
mysql_secure_installation
```

**Isso melhora a segurança do banco.**

---

# Conclusão

Agora você tem um ambiente completo com:

- Servidor Linux (Debian)
- Tomcat (aplicações Java)
- MySQL (banco de dados)
- Aplicação rodando (.WAR)

---

**Resumo Final**

MySQL → guarda dados

Tomcat → executa aplicação

WAR → sistema pronto


**Isso é a base de sistemas web Java usados em empresas**