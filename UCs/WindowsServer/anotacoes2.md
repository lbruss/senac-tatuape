
# WordPress + LAMP

---

# O que é WordPress?

O **WordPress** é uma plataforma usada para criar:

- Sites
- Blogs
- Lojas virtuais (E-commerce)

Aproximadamente **43% dos sites da internet usam WordPress**.

**Analogia:**  
O WordPress é como um **“construtor de sites pronto”**, onde você monta tudo sem precisar programar do zero.

---

# O que é LAMP?

LAMP é um conjunto de tecnologias usadas para rodar sites:

- **L** → Linux (Sistema operacional)
- **A** → Apache (Servidor web)
- **M** → MariaDB / MySQL (Banco de dados)
- **P** → PHP (Linguagem do servidor)

**Analogia:**  
É como montar uma casa:

- Linux → terreno  
- Apache → estrutura  
- Banco de dados → armazenamento  
- PHP → funcionamento da casa  

---

# Etapas para montar o WordPress

---

**1. Preparação inicial**

Antes de tudo, você deve:

- Instalar o Debian (Servidor Web)
- Definir um IP fixo
- Verificar se o Apache está ativo:

```
systemctl status apache2
```

---

**2. Instalar o Banco de Dados (MariaDB)**

* Instalação

```
apt install mariadb-server
```

---

* Verificar se está ativo

```
systemctl status mariadb
```

---

**Segurança do banco**

```
mariadb-secure-installation
```

**Durante o processo:**

* Defina senha do root

Responda Y (sim) para as opções de segurança


Isso protege o banco contra acessos indevidos.

---

**3. Criar Banco de Dados do WordPress**

Entrar no banco:

```
mariadb
```

---

**Criar banco**

```
CREATE DATABASE wordpress;
```

---

**Criar usuário**

```
CREATE USER 'admin'@'localhost' IDENTIFIED BY '123@senac';
```

---

**Dar permissões**

```
GRANT ALL PRIVILEGES ON wordpress.* TO 'admin'@'localhost';
FLUSH PRIVILEGES;
```

---

**Verificar**

```
select User,Db,Host from mysql.db;
```

---

**Sair**

```
quit
```

---

**4. Instalar PHP + phpMyAdmin**

```
apt install php phpmyadmin
```

* Durante a instalação:

Selecione apache2

Configure senha do banco

---

**Reiniciar Apache**

```
systemctl restart apache2
```

---

**Verificar versão do PHP**

```
php -v
```

---

**Acessar phpMyAdmin**

No navegador:

http://IP_DO_SERVIDOR/phpmyadmin

Login:

Usuário: admin

Senha: a que você criou

---

**5. Ajustar Memória do PHP (Importante)**

Valores recomendados:

- Padrão → 128M

- Uso comum → 256M

- E-commerce → 512M

---

**Acessar configuração**

```
cd /etc/php/8.x/apache2/
```

(Substitua 8.x pela sua versão)

---

* Backup

```
cp php.ini php.ini.bkp
```

---

**Editar**

```
nano php.ini
```

Procure:

```
memory_limit = 128M
```

Altere para:

```
memory_limit = 512M
```

---

**Salvar**

- Ctrl + O

- Enter

- Ctrl + X

---

**Reiniciar Apache**

```
systemctl restart apache2
```

---

**6. Instalar WordPress**

Ir para diretório do site

```
cd /var/www/html
```

---

**Remover página padrão**

```
rm index.html
```

---

**Baixar WordPress**

```
cd ..
```

```
wget https://wordpress.org/latest.tar.gz
```

---

**Extrair arquivos**

```
tar -xzvf latest.tar.gz
```

---

**Copiar arquivos**

```
rsync -avP wordpress/ /var/www/html/
```

---

**Permissões**

```
chown -R www-data:www-data /var/www/html
```

---

**7. Finalizar pelo Navegador**

Acesse:

http://IP_DO_SERVIDOR

---

**Configuração inicial**

- Escolha idioma

- Clique em “Vamos lá”

Configure:

- Nome do banco → wordpress

- Usuário → admin

- Senha → definida anteriormente

---

**Criar site**

- Título do site

- Usuário admin

- Senha

- E-mail


Se tudo estiver certo → aparecerá Sucesso!

---

**8. Personalização**

No painel do WordPress:

- Vá em Aparência → Temas

- Instale um tema (ex: Astra)

- Personalize como quiser

---

# Hospedagem gratuita (Front-end)

Você pode hospedar sites simples (HTML, CSS, JS) gratuitamente usando o GitHub Pages da Microsoft.

**WordPress NÃO funciona no GitHub Pages (precisa de servidor PHP).**

---

**Criar página HTML simples**

```html
<!DOCTYPE html>
<html lang="pt-br">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Hello World</title>
</head>
<body>
<h1>Hello World</h1>
<p>Seu Nome</p>
</body>
</html>
```

---

**Publicar no GitHub Pages**

1. Criar repositório


2. Enviar index.html


3. Ir em Settings → Pages


4. Selecionar branch main


5. Salvar

Após alguns minutos, o site estará online.


---

**Domínio próprio**

Você pode comprar domínio em:

* Registro.br


Exemplo:

seusite.com.br

Depois, pode conectar ao GitHub Pages ou ao seu servidor.

---

# Conclusão

Você montou um ambiente completo com:

- Linux (Debian)

- Apache

- MariaDB

- PHP

- WordPress

Analogia final:
Você construiu:

- o terreno (Linux)

- a casa (Apache + PHP)

- o banco de dados (MariaDB)

- e decorou tudo (WordPress)


Isso é exatamente como a maioria dos sites profissionais funciona hoje.

---

# Apache Tomcat

## O que é o Tomcat?

O **Apache Tomcat** é um servidor que executa aplicações Java na web.

Ele é muito usado para rodar:

- Sistemas web em Java  
- APIs  
- Aplicações corporativas  

---

**Analogia**

Se o **Apache (web server)** entrega páginas HTML, o **Tomcat** é como um **motor inteligente**, que executa código Java e gera páginas dinâmicas.

---

# Etapas Gerais

1. Instalar Debian  
2. Configurar rede  
3. Instalar Java  
4. Instalar Tomcat  
5. Configurar acesso  

---

**Instalar Debian**

Durante a instalação:

- Escolha **Graphic Install**
- Domínio → pode deixar em branco (configura depois)
- Defina senha do root

---

**Particionamento**

- Escolher:

Assistido - usar disco inteiro com LVM

- Depois:

/home, /var e /tmp separados

---

**Seleção de software**

Marcar apenas:

- Servidor SSH  
- Utilitários padrão  

---

**Finalização**

- Finalize a instalação  
- Faça login como:

```
root
```

---

**Passo 2 — Configurar Rede**

- Configurar IP fixo e DNS

Depois de configurar:

## Testes

```
ping google.com
```

- Testa internet (DNS funcionando)

---

```
ip a
```

- Verifica o IP configurado

---

Teste também de outro computador:

```
ping IP_DO_SERVIDOR
```

---

## Instalar Java

O Tomcat precisa do Java para funcionar.

-Instalar

```
apt install default-jdk
```

---

- Verificar

```
java -version
```

```
javac -version
```

---

## Instalar Apache Tomcat

- Instalação

```
apt install tomcat11 tomcat11-admin tomcat11-examples tomcat11-docs
```

---

- Verificar serviço

```
systemctl status tomcat11
```

---

**Acessar no navegador**

Digite:

http://IP_DO_SERVIDOR:8080

Exemplo:

http://10.26.44.222:8080

- Se aparecer a página, o Tomcat está funcionando.

---

## Criar usuário administrador

**Acessar diretório**

```
cd /etc/tomcat11
```

---

**Fazer backup**

```
cp tomcat-users.xml tomcat-users.xml.bkp
```

---

**Editar arquivo**

```
nano tomcat-users.xml
```

---

**Adicionar usuário**

Dentro do arquivo, adicione:

```
<user username="admin" password="SUA_SENHA" roles="manager-gui,admin-gui"/>
```

---

**Salvar**

Ctrl + O

Enter

Ctrl + X

---

**Reiniciar serviço**

```
systemctl restart tomcat11
```

---

**Acessar painel administrativo**

1. Abra no navegador:

http://IP_DO_SERVIDOR:8080


2. Clique em:

Manager App


3. Faça login com:

Usuário: admin

Senha: definida anteriormente

---

# Instalar MySQL (Oracle)

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

# Conclusão 1

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

**Informação Adicional**

- Porta 8080

É a porta padrão do Tomcat

Diferente do Apache (porta 80)

- Você pode mudar isso depois na configuração.

---

- Segurança

Por padrão:

O acesso administrativo pode ser restrito

Em produção, recomenda-se limitar acesso por IP

---

# Conclusão 2

Foi configurado:

- Debian (sistema base)
- Rede (IP + DNS)
- Java (necessário para rodar aplicações)
- Tomcat (servidor de aplicações)

---

**Analogia Final**

Você montou:

O terreno → Debian

Energia → Java

Máquina → Tomcat

**Agora você tem um servidor pronto para rodar aplicações Java na web**

---

# Continuação Tomcat - MySQL (Usuários, Workbench e Backup)

---

# Criar usuário administrador no MySQL

## Acessar o MySQL

No Debian:

```
mysql -u root -p
```

Digite a senha do root.

---

**Criar usuário**

```
CREATE USER 'dba'@'%' IDENTIFIED BY '123@senac';
```

**% significa que o usuário pode acessar de qualquer IP.**

---

* Dar permissões

```
GRANT ALL PRIVILEGES ON *.* TO 'dba'@'%';
```

```
FLUSH PRIVILEGES;
```

---

**Analogia**

Esse usuário é como um administrador geral do banco, com acesso total a tudo.

---

## MySQL Workbench

O MySQL Workbench é uma ferramenta gráfica para gerenciar bancos de dados.

**É como um “VS Code do banco de dados”.**

---

**Criar conexão**

1. Clique em + (Nova conexão)

2. Preencha:

* Nome da conexão: qualquer (ex: ServidorDB)

* Host: IP do servidor

* Usuário: dba


3. Clique em OK

---

**Conectar**

Clique na conexão criada

Digite a senha

---

**Executar comandos**

* Diferente do terminal:

Use:

Ctrl + Enter

Para executar comandos

---

## Exemplos de comandos

```
SHOW DATABASES;
```

```
USE agenda;
```

```
SELECT * FROM contatos;
```

---

# Backup de Banco de Dados

**Passo a passo (Exportar)**

1. Vá em:

Administration → Data Export

2. Selecione o banco (ex: agenda)

3. Escolha:

* Dump Structure and Data

4. Clique em:

Start Export

---

**Analogia**

Backup é como tirar uma foto do banco de dados para guardar caso algo dê errado.

---

## Apagar banco de dados

```
DROP DATABASE agenda;
```

**Isso apaga tudo permanentemente.**

---

## Restaurar Backup (Importar)

* Importante

** Você precisa criar o banco antes de restaurar.

---

**Criar banco**

```
CREATE DATABASE agenda;
```

---

## Importar no Workbench (Restaurar Backup)

1. Vá em:

Administration → Data Import/Restore

2. Clique nos 3 pontinhos e selecione o backup

3. Escolha o banco (agenda)


4. Clique em:

Start Import

---

**Informação Adicional**

* Segurança

Permitir acesso com '%' é prático, mas:

Em produção, o ideal é limitar por IP:

```
'dba'@'192.168.0.%'
```

**Isso aumenta a segurança.**

---

* Uso real

Esse tipo de configuração é comum em:

* Sistemas web (Tomcat + MySQL)

* Aplicações empresariais

* APIs

---

# Conclusão

Agora você consegue:

Criar usuários no MySQL

Acessar remotamente

Gerenciar banco com interface gráfica

Fazer backup e restore

---

**Resumo final**

Usuário dba → administrador do banco

Workbench → interface visual

Backup → segurança dos dados

Restore → recuperação

**Isso completa o ambiente profissional com Tomcat + Banco de Dados.**
