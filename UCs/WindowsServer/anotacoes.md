# Servidores no Mundo Corporativo

No ambiente corporativo, **servidores** são computadores especializados que fornecem serviços para outros dispositivos da rede (clientes).

Esses serviços podem incluir:

- Armazenamento de arquivos
- Hospedagem de sites
- Banco de dados
- Autenticação de usuários
- Aplicações empresariais
- E-mail corporativo

**Analogia:**  
Um servidor funciona como **uma central de serviços**.  
Assim como um restaurante atende vários clientes ao mesmo tempo, o servidor atende vários computadores na rede.

---

# Servidores de Rede

Um **servidor de rede** é responsável por disponibilizar recursos para outros dispositivos conectados.

Exemplos comuns:

- **Servidor de arquivos** → armazena documentos da empresa  
- **Servidor web** → hospeda sites e aplicações  
- **Servidor de e-mail** → gerencia correios eletrônicos  
- **Servidor de banco de dados** → guarda informações de sistemas

**Exemplo prático:**  
Quando um funcionário abre um arquivo compartilhado da empresa, ele está acessando um **servidor de arquivos**.

---

# Data Center

Um **data center** é um local projetado para armazenar e operar grandes quantidades de servidores.

Ele possui infraestrutura especializada como:

- Sistemas de refrigeração
- Energia redundante
- Conexões de internet de alta velocidade
- Segurança física
- Monitoramento constante

**Analogia:**  
Um data center funciona como **uma grande biblioteca digital**, onde milhares de servidores armazenam e processam informações ao mesmo tempo.

---

# Linux Server

Grande parte dos servidores no mundo utiliza **Linux**.

Isso acontece porque ele é:

- Estável
- Seguro
- Flexível
- Muito usado no mercado corporativo

---

## O que é Linux?

O **Linux** é baseado em um **kernel**.

* Kernel

O **kernel** é o núcleo do sistema operacional.  
Ele é responsável por:

- Controlar o hardware
- Gerenciar memória
- Gerenciar processos
- Controlar dispositivos

**Analogia:**  
Se o sistema operacional fosse um carro, o **kernel seria o motor** que faz tudo funcionar.

O Linux possui **código aberto (open source)**, ou seja, qualquer pessoa pode estudar, modificar e distribuir o sistema.

---

* Sobre as distribuições Linux

Uma **distribuição Linux** é um sistema operacional completo construído em cima do kernel Linux.

Ela inclui:

- Interface gráfica (em alguns casos)
- Programas básicos
- Ferramentas de administração
- Gerenciadores de pacotes

Cada distribuição possui características próprias.

---

# Distribuições Linux populares para servidores

* Red Hat Enterprise Linux (RHEL)

- Distribuição corporativa
- Suporte profissional
- Muito usada em grandes empresas

É uma distribuição **paga**, mas muito confiável.

---

* Ubuntu Server

Possui duas versões principais:

- **Ubuntu Server gratuito**
- **Ubuntu Pro (com suporte pago)**

Características:

- Fácil de usar
- Muito popular
- Grande comunidade

---

* Debian

Uma das distribuições mais antigas e estáveis.

Características:

- Totalmente livre
- Muito estável
- Atualizações cuidadosas

O Debian prioriza **estabilidade em vez de novidades**, por isso as versões podem demorar alguns anos para serem atualizadas.

**Curiosidade:**  
O Ubuntu foi originalmente baseado no **Debian**.

---

* Android

O **Android**, sistema usado em celulares, também utiliza o **kernel Linux**.

Isso significa que ele compartilha a mesma base tecnológica, embora tenha sido adaptado para dispositivos móveis.

---

# Linux no Mercado Corporativo

Linux é extremamente forte no mercado corporativo porque:

- Consome poucos recursos
- É muito estável
- Possui grande segurança
- Pode ser altamente personalizado

Por isso ele domina áreas como:

- servidores web
- computação em nuvem
- supercomputadores
- infraestrutura de internet

---

# Instalação do Debian 13.3.0 para Servidor

A seguir está um exemplo de instalação do **Debian Server**.

---

* Passo 1 — Iniciar a instalação

Selecione:

```

Graphical Install

```

Isso inicia o instalador com interface gráfica.

---

* Passo 2 — Configurações iniciais

Durante a instalação você irá configurar:

- idioma
- região
- teclado
- rede

Na parte de **nome de domínio**, você pode deixar em branco e configurar depois, se necessário.

---

* Passo 3 — Senha do administrador

Durante a instalação será definida a senha do **usuário root**.

O **root** é o administrador do sistema e possui acesso total ao servidor.

> É importante guardar essa senha com segurança.

---

* Passo 4 — Particionamento de disco

Selecione:

```

Assistido - usar disco inteiro e configurar LVM

```

**O que é LVM?**

**LVM (Logical Volume Manager)** permite gerenciar discos de forma mais flexível.

**Analogia:**  
É como dividir um grande armário em várias gavetas que podem ser aumentadas ou diminuídas quando necessário.

---

* Passo 5 — Esquema de Partições

Selecione:

```

Partições /home, /var e /tmp separadas

```

Isso melhora a organização e segurança do sistema.

**Função de cada diretório**

- **/home** → arquivos dos usuários  
- **/var** → logs e dados variáveis do sistema  
- **/tmp** → arquivos temporários

---

* Passo 6 — Gerenciador de Pacotes

Quando aparecer:

```
Ler mídia de instalação adicional
```

Selecione:

```
Não
```

---

* Repositório Debian

Selecione um **espelho (mirror)** do Debian para baixar atualizações.

Normalmente a primeira opção funciona bem.

---

* Proxy HTTP

Se aparecer a configuração de **proxy HTTP**, deixe em branco caso não utilize proxy na rede.

---

* Participação no concurso de utilização de pacotes

Pergunta:

```
Participar do concurso de utilização de pacotes?
```

Você pode selecionar **Não** se não quiser enviar estatísticas de uso.

---

* Seleção de Software

Selecione apenas:

- **Servidor SSH**
- **Utilitários de sistema padrão**

Desmarque as outras opções se a intenção for manter o servidor mais leve.

---

**O que é SSH?**

**SSH (Secure Shell)** permite acessar o servidor remotamente.

Exemplo:

Um administrador pode controlar o servidor **de outro computador pela rede**.

**Analogia:**  
É como ter um **controle remoto seguro** para administrar o servidor.

---

* Finalizando a instalação

Durante a instalação aparecerão algumas telas pedindo confirmação.

Normalmente basta selecionar **Sim** para continuar.

Após isso, o sistema terminará a instalação e reiniciará.

---

# Login no sistema

Após iniciar o sistema:

```

login: root

```

Digite o usuário:

```

root

````

Depois digite a senha definida na instalação.

---

* Desligar o servidor

Para desligar o sistema de forma segura:

```
shutdown -h now
````

Isso encerra todos os processos antes de desligar a máquina.

---

**Observação Importante**

Servidores geralmente **não são desligados com frequência**, pois muitos sistemas dependem deles funcionando continuamente.

Por isso, data centers utilizam:

* energia redundante
* geradores
* nobreaks (UPS)

para manter os servidores sempre ativos.

---

# Conclusão

Servidores são fundamentais para a infraestrutura de tecnologia das empresas.

Eles permitem:

* armazenar dados
* executar sistemas corporativos
* manter serviços online
* conectar milhares de usuários

E o **Linux**, especialmente distribuições como **Debian, Ubuntu e Red Hat**, é uma das principais bases dessa infraestrutura no mundo moderno.

---

# Tipos de Usuário no Linux (Debian)

No Linux existem diferentes níveis de usuário.

**Usuário comum**

Representado pelo símbolo:

```
$
```

Esse usuário possui **permissões limitadas**.

Ele pode:

- acessar arquivos pessoais
- executar programas
- navegar pelos diretórios permitidos

Mas **não pode alterar configurações importantes do sistema**.

---

**Usuário administrador (Root)**

Representado pelo símbolo:

```
#
```

O **root** é o administrador do sistema.

Ele pode:

- instalar programas
- alterar configurações do sistema
- gerenciar usuários
- modificar qualquer arquivo

> Por segurança, o uso do root deve ser **controlado**, pois qualquer comando executado pode alterar o sistema inteiro.

---

**Diretório Padrão do Usuário**

O símbolo:

```
~
```

representa o **diretório pessoal do usuário**.

**Exemplo:**

```

/home/usuario

````

**Analogia:**  
É como **a pasta pessoal do usuário dentro de um computador compartilhado**.

---

**Sair da Sessão (Logout)**

Para sair da sessão atual:

```
exit
````

---

# Atalhos Úteis do Terminal

**Autocompletar comandos**

Pressione:

```
TAB
```

O terminal tenta **completar automaticamente o comando ou nome do arquivo**.

**Exemplo:**

```
cd Doc + TAB
```

Pode completar para:

```
cd Documentos
```

---

**Histórico de comandos**

Use as **setas do teclado**:

* seta para cima → mostra comandos anteriores
* seta para baixo → navega para comandos mais recentes

---

# Informações de Rede

Quando você executa:

```
ip a
```

Algumas informações importantes aparecem.

`link/ether`

Mostra o **MAC Address** da interface de rede.

O MAC Address é um **identificador físico único da placa de rede**.

**Analogia:**
É como o **CPF da placa de rede**.

---

 `inet` 

Mostra o **endereço IP** atribuído à interface.

O IP permite que o computador **se comunique com outros dispositivos da rede**.

---

# Comandos Básicos do Linux

 `pwd`

```
pwd
```

Mostra **em qual diretório você está atualmente**.

Exemplo de saída:

```
/home/usuario
```

---

`ls`

```
ls
```

Lista:

* arquivos
* diretórios

presentes na pasta atual.

---

`cd`

O comando **cd** significa *change directory* (mudar diretório).

**Ir para a raiz do sistema**

```
cd /
```

A raiz (`/`) é o **diretório principal do Linux**.

---

**Entrar no diretório home**

```
cd /home
```

---

**Voltar um nível**

```
cd ..
```

---

**Voltar para o diretório pessoal**

```
cd
```

ou

```
cd ~
```

---

 `clear`

```
clear
```

Limpa a tela do terminal.

---

`history`

```
history
```

Mostra o **histórico de comandos executados** no terminal.

Isso é útil para:

* repetir comandos
* revisar atividades
* automatizar tarefas

---

`cat`

```
cat arquivo
```

Mostra o **conteúdo de um arquivo** diretamente no terminal.

**Exemplo:**

```
cat arquivo.txt
```

---

`ip a`

```
ip a
```

Mostra:

* endereço IP
* interfaces de rede
* MAC Address

---

# Comandos de Sistema

**Desligar o servidor**

```
shutdown -h now
```

Encerra o sistema **de forma segura**.

---

**Reiniciar o servidor**

```
reboot
```

Reinicia o sistema.

---

# Gerenciamento de Pacotes (APT)

O Debian utiliza o **APT** para gerenciar programas.

---

**Atualizar lista de pacotes**

```
apt update
```

Atualiza a lista de softwares disponíveis nos repositórios.

---

**Instalar um pacote**

```
apt install nome-do-pacote
```

Exemplo:

```
apt install linuxlogo
```

---

**Pacote** `linuxlogo`

O pacote **linuxlogo** exibe:

* o logo do Linux
* informações do sistema

Exemplo de execução:

```
linuxlogo
```

---

# Diretórios Importantes do Linux

`/etc`

Diretório que guarda **arquivos de configuração do sistema**.

**Exemplo:**

* rede
* usuários
* serviços

---

`/home`

Contém as **pastas dos usuários do sistema**.

Exemplo:

```
/home/joao
/home/maria
```

---

 `/root`

Diretório pessoal do **usuário root**.

---

`/lost+found`

Diretório utilizado pelo sistema para **recuperação de arquivos em caso de erros no disco**.

Ele é usado por ferramentas de verificação do sistema de arquivos.

---

# Instalação do `linuxlogo` e configuração

Instalar o pacote:

```
apt install linuxlogo
```

Ir para o diretório de configuração:

```
cd /etc
```

Listar arquivos:

```
ls
```

Configurar o banner do sistema:

```
cat issue.linuxlogo > issue
```

Isso faz com que o **logo do Linux apareça na tela de login do sistema**.

---

# Windows no Ambiente Corporativo

No ambiente empresarial também existem versões específicas do Windows.

Uma delas é:

**Windows 11 Enterprise LTSC**

Características:

* suporte de longo prazo
* estabilidade
* menos atualizações frequentes
* foco em empresas e infraestruturas críticas

O suporte pode chegar a **aproximadamente 10 anos**, dependendo da versão.

Esse tipo de sistema é comum em:

* servidores corporativos
* equipamentos industriais
* sistemas críticos

---

# Conclusão

Aprender os comandos básicos do Linux é essencial para quem trabalha com:

* servidores
* redes
* infraestrutura de TI
* segurança da informação

O terminal Linux oferece **controle total do sistema**, permitindo administrar servidores de forma eficiente e profissional.

---

# Comandos e Serviços no Linux (Debian)

Este guia apresenta **comandos importantes para administração de servidores Linux**, especialmente no **Debian**.  
Eles são usados para **identificar o sistema, gerenciar serviços e acessar servidores remotamente**.

---

# Informações do Sistema

`hostname`

```
hostname
````

Mostra o **nome do computador (host)** na rede.

Exemplo de saída:

```
server01
```

**Analogia:**
O hostname é como **o nome de uma pessoa em uma empresa**, usado para identificar o computador dentro da rede.

---

`hostnamectl`

```
hostnamectl
```

Mostra informações mais completas sobre o sistema, como:

* hostname do computador
* sistema operacional
* versão do kernel
* arquitetura do sistema

Exemplo de saída simplificada:

```
Static hostname: servidor01
Operating System: Debian GNU/Linux
Kernel: Linux 6.x
Architecture: x86_64
```

Esse comando também permite **alterar o nome do computador**.

---

# Gerenciamento de Serviços no Linux

Nos sistemas Linux modernos, o gerenciamento de serviços é feito pelo **systemd**, usando o comando:

```
systemctl
```

Ele controla **serviços que rodam em segundo plano**, chamados de **daemons**.

Exemplos de serviços:

* servidor SSH
* servidor web
* banco de dados
* servidor de arquivos

**Analogia:**
Pense nesses serviços como **funcionários trabalhando nos bastidores do sistema**.

---

# Verificar Status de um Serviço

```
systemctl status nome-do-servico
```

Exemplo:

```
systemctl status ssh
```

Mostra informações como:

* se o serviço está ativo
* se está parado
* logs recentes do serviço

---

# Parar um Serviço

```
systemctl stop nome-do-servico
```

Exemplo:

```
systemctl stop ssh
```

Isso **interrompe o funcionamento do serviço**.

---

# Iniciar um Serviço

```
systemctl start nome-do-servico
```

Exemplo:

```
systemctl start ssh
```

Inicia o serviço novamente.

---

# Reiniciar um Serviço

```
systemctl restart nome-do-servico
```

Exemplo:

```
systemctl restart ssh
```

Isso **desliga e inicia o serviço novamente**, sendo útil após mudanças de configuração.

---

# SSH — Acesso Remoto Seguro

**SSH (Secure Shell)** é um protocolo que permite **acessar um servidor remotamente de forma segura**.

Ele utiliza criptografia para proteger a comunicação.

### Estrutura básica

```
Cliente  ----->  Servidor SSH (Debian)
```

Ou seja:

* um **computador cliente** conecta
* a um **servidor Linux**
* através do protocolo SSH

---

## Cliente SSH

Para acessar um servidor SSH, é necessário um **cliente SSH**.

Um dos mais conhecidos no Windows é:

**PuTTY**

Ele é amplamente utilizado porque é:

* leve
* simples
* gratuito

---

# Conectando ao servidor com PuTTY

Passos básicos:

1. Abrir o **PuTTY**
2. Inserir o **endereço IP do servidor Debian**
3. Usar a **porta padrão do SSH**

```
22
```

4. Clicar em **Open**

---

# Login no servidor

Após conectar, aparecerá o terminal solicitando login.

Exemplo:

```
login as: usuario
```

Digite o **nome do usuário criado no sistema**.

Depois digite a senha.

---

# Acesso administrativo

Em muitos servidores, o login direto como **root** pode estar desativado por segurança.

Nesse caso, você entra com um **usuário comum** e depois usa:

```
su
```

ou

```
su -
```

Depois disso, será solicitada a **senha do root**.

Se estiver correta, o usuário ganha **permissões administrativas**.

---

# Por que o SSH é importante?

O SSH é essencial para administrar servidores porque permite:

* controlar servidores remotamente
* executar comandos
* instalar programas
* corrigir problemas
* transferir arquivos

Tudo isso **sem precisar estar fisicamente perto do servidor**.

---

## Informação Adicional Importante

O serviço SSH precisa estar **instalado e ativo no servidor**.

Para verificar:

```
systemctl status ssh
```

Se não estiver instalado:

```
apt install openssh-server
```

Depois iniciar:

```
systemctl start ssh
```

---

# Conclusão

Comandos como:

* `hostname`
* `hostnamectl`
* `systemctl`

são fundamentais para **administrar servidores Linux**.

Já o **SSH** permite que administradores controlem servidores **de qualquer lugar da rede ou da internet**, tornando a gestão de sistemas muito mais prática e eficiente.

---

# Instalação Debian — Servidor Web

**Instalação do Debian (Modo Servidor Web)**

Durante a instalação do Debian:

## Nome de domínio

Quando aparecer a opção:

Nome de domínio

Digite:

domain.com.br

> Você pode alterar isso depois, se quiser.

---

## Outras opções

- **Ler mídia adicional:** NÃO  
- **Proxy:** deixe em branco  
- **Perguntas (Sim/Não):** pode seguir com **Sim**, como na instalação padrão  

---

## Seleção de Software

Selecione apenas:

-  Servidor Web  
-  Servidor SSH  
-  Utilitários de sistema padrão  

> Desmarque o restante para manter o sistema leve.

---

# Definir IP Fixo no Debian

Exemplo usado:

IP: 10.26.44.222/24 Gateway: 10.26.44.1

---

Passo 1 — Acessar diretório de rede

```
cd /etc/network
```

---

Passo 2 — Criar backup do arquivo

```
cp interfaces interfaces.bkp
```

Analogia:
É como fazer uma cópia de segurança antes de editar um documento importante.


---

Passo 3 — Editar o arquivo de rede

```
nano interfaces
```

---

**Alterações no arquivo**

Procure por algo como:

```
iface enp0s3 inet dhcp
```

E altere para:

```
iface enp0s3 inet static
    address 10.26.44.222
    netmask 255.255.255.0
    gateway 10.26.44.1
```

---

Agora comente a linha:

A linha automatica ipv6, com o sinal `#`

---

## Salvar alterações

Ctrl + O → salvar

Enter → confirmar

Ctrl + X → sair

---

# Configurar DNS

**Instalar serviço DNS local**

```
apt install systemd-resolved
```

Verificar status:

```
systemctl status systemd-resolved
```

Se travar:

Pressione Q ou Ctrl + C

---

## Configurar DNS

```
cd /etc/systemd
```

```
cp resolved.conf resolved.conf.bkp
```

```
nano resolved.conf
```

---

**Dentro do arquivo, configure:**

```
[Resolve]
DNS=8.8.8.8 8.8.4.4
```

---

**Salvar**

Ctrl + O

Enter

Ctrl + X

---

## Reiniciar serviço DNS

```
systemctl restart systemd-resolved
```

---

## Reiniciar Rede

Você pode:

```
systemctl restart networking
```

ou reiniciar tudo:

```
reboot
```

---

# Testes de Funcionamento

**Verificar IP**

```
ip a
```

Se aparecer:

10.26.44.222

**Está correto**

---

**Testar DNS**

```
ping google.com
```

Se responder → DNS funcionando

---

**Teste na rede (Windows)**

No CMD:

```
ping 10.26.44.222
```

Se responder → comunicação funcionando

---

## Testar Servidor Web

Abra o navegador e digite:

http://10.26.44.222

Se aparecer uma página → servidor funcionando

---

# Gerenciar Servidor Web (Apache)

**Parar servidor**

```
systemctl stop apache2
```

---

**Iniciar servidor**

```
systemctl start apache2
```

---

## Criar Página Web

Ir para pasta do site

```
cd /var/www/html
```

---

Remover página padrão

```
rm index.html
```

---

Criar nova página

```
nano index.html
```

---

**Exemplo de código HTML**

```html
<!DOCTYPE html>
<html>
<head>
<title>Hello World</title>
</head>
<body>
<h1>Hello World</h1>
<p>SEUNOME</p>
</body>
</html>
```

---

**Salvar**

Ctrl + O

Enter

Ctrl + X

---

**Resultado Final**

Agora, ao acessar:

http://10.26.44.222

Você verá sua página personalizada.

---

**Resumo**

Foi configurou:

- Servidor Debian

- IP fixo

- DNS

- Servidor Web (Apache)

- Página HTML

---

# Conclusão

Com esses passos, foi criado um servidor web completo.

Analogia final:
Você basicamente:

- Montou um computador (servidor)

- Deu um endereço fixo (IP)

- Configurou a internet (DNS)

- E abriu um site (Apache + HTML)

---

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
