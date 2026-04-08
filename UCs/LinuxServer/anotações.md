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
SELECT User, Host FROM mysql.user;
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

🛠️ Configuração inicial

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