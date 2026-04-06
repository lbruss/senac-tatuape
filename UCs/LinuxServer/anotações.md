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

Agora comente a linha automática:

auto enp0s3

Ficando assim:

```
#auto enp0s3
```

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