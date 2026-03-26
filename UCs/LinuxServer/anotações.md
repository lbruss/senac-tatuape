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
