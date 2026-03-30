# Comandos Básicos e Estrutura do Linux (Debian)

Este guia apresenta **conceitos e comandos essenciais do Linux**, especialmente úteis em servidores como o **Debian**.  
A ideia é explicar de forma **simples, clara e prática**.

---

# Tipos de Usuário no Linux

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

```bash
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

# Exemplo: Configurando o `linuxlogo`

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
