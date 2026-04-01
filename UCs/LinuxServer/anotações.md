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
