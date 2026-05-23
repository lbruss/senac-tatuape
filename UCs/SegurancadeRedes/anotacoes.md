# ROTEIRO COMPLETO DE APRESENTAÇÃO — EZEQUIEL

## ConnectStar — Infraestrutura do AutoLock

---

# SLIDE 1 — CONNECTSTAR (ABERTURA)

**Ezequiel:**

> Boa noite a todos.
>
> Nós somos a **ConnectStar**, empresa especializada em infraestrutura de TI, redes corporativas, segurança e administração de ambientes servidores.
>
> Neste Projeto Integrador, fomos contratados pela empresa **Synccode**, que apresentou anteriormente o sistema AutoLock, para projetar, implementar e documentar toda a infraestrutura necessária para suportar esse ambiente corporativo.
>
> Nosso objetivo foi entregar uma solução funcional que garantisse:
>
> * conectividade;
> * autenticação centralizada;
> * segurança de rede;
> * gerenciamento de usuários;
> * suporte à aplicação;
> * e organização da infraestrutura.

---

# SLIDE 2 — SOBRE A CONNECTSTAR

**Ezequiel:**

> A ConnectStar foi estruturada como uma empresa focada em infraestrutura e suporte corporativo.
>
> Nosso papel neste projeto foi atuar como fornecedores da camada tecnológica que sustenta a operação da empresa cliente.
>
> Em vez de desenvolver o software, nossa responsabilidade foi garantir que a infraestrutura estivesse preparada para suportar a aplicação com estabilidade, segurança e gerenciamento adequado.
>
> Em um cenário real, isso equivaleria à implantação da infraestrutura de uma empresa que está entrando em operação.

---

# SLIDE 3 — DESAFIO RECEBIDO

**Ezequiel:**

> O desafio recebido foi construir uma infraestrutura corporativa capaz de sustentar a operação do sistema AutoLock.
>
> Para isso, precisávamos implementar:
>
> * autenticação centralizada;
> * distribuição automática de rede;
> * resolução DNS;
> * controle de acesso;
> * firewall;
> * ambiente Linux para aplicação;
> * conectividade cabeada;
> * conectividade wireless.
>
> Em resumo, entregar uma infraestrutura corporativa funcional.

---

# SLIDE 4 — TOPOLOGIA DA INFRAESTRUTURA

(Topologia principal da rede)

**Ezequiel:**

> Esta é a arquitetura lógica da solução implementada.
>
> O fluxo da infraestrutura começa no acesso externo à internet.
>
> Essa conexão chega primeiro ao nosso servidor Linux Firewall, que atua como gateway principal da rede.
>
> A partir dele, o tráfego é encaminhado para o switch central, responsável por distribuir conectividade para toda a infraestrutura.
>
> Conectados a esse switch temos:
>
> * o Windows Server;
> * o servidor Linux da aplicação;
> * o Access Point;
> * e os notebooks clientes.
>
> Essa arquitetura simula a organização de uma infraestrutura corporativa real.

**APONTA visualmente enquanto fala.**

---

# SLIDE 5 — FIREWALL LINUX

**Ezequiel:**

> O primeiro componente crítico da infraestrutura é o servidor Linux Firewall.
>
> Implementamos esse servidor utilizando Debian Linux.
>
> Ele atua como gateway principal da rede, utilizando o endereço **192.168.0.1**.
>
> Sua função é controlar todo o tráfego entre a rede interna e a internet.
>
> Nesse servidor implementamos:
>
> * NAT;
> * roteamento;
> * DNSMasq;
> * controle de tráfego;
> * políticas básicas de firewall.
>
> Na prática, qualquer dispositivo que precise acessar a internet passa primeiro por esse servidor.
>
> Isso garante centralização do controle e segurança da rede.

---

# SLIDE 6 — WINDOWS SERVER

**Ezequiel:**

> Para gerenciamento corporativo da infraestrutura, implementamos um Windows Server 2025.
>
> Esse servidor recebeu o endereço **192.168.0.10** e concentra os principais serviços administrativos da rede.
>
> Nele configuramos:
>
> * Active Directory;
> * DNS;
> * DHCP.
>
> O Active Directory permite gerenciamento centralizado de autenticação.
>
> O DNS permite resolução interna de nomes.
>
> E o DHCP distribui automaticamente os endereços IP da rede.
>
> Essa abordagem reproduz exatamente o funcionamento de ambientes corporativos reais.

---

# SLIDE 7 — DOMÍNIO CORPORATIVO

**Ezequiel:**

> Para centralizar a autenticação da infraestrutura, criamos o domínio corporativo **auto.tec**.
>
> Também criamos uma Unidade Organizacional chamada **AutoLock**, organizando logicamente os recursos do projeto.
>
> Dentro dessa estrutura, cadastramos usuários corporativos de teste:
>
> * Convidado1
> * Convidado2
>
> Os notebooks clientes foram integrados ao domínio e autenticados com essas contas.
>
> Isso demonstra funcionamento real de autenticação centralizada.

---

# SLIDE 8 — SERVIDOR LINUX DE APLICAÇÃO

**Ezequiel:**

> Também implementamos um segundo servidor Linux Debian, dedicado à camada de aplicação.
>
> Esse servidor foi preparado para suportar o ambiente da aplicação AutoLock.
>
> Nele instalamos:
>
> * Java 25.0.1
> * Apache Tomcat 11.0.22
> * MySQL 8.4.9
>
> Esse ambiente fornece a base necessária para hospedagem da aplicação backend e persistência de dados.

---

# SLIDE 9 — REDE INTERNA

**Ezequiel:**

> A infraestrutura interna foi organizada com um switch central, responsável por interligar todos os dispositivos.
>
> Também utilizamos um roteador D-Link configurado exclusivamente como Access Point.
>
> Ele recebeu o endereço **192.168.0.2** e teve seu DHCP desativado, evitando conflitos com o Windows Server.
>
> Dessa forma, a distribuição de rede permanece centralizada e controlada.

---

# SLIDE 10 — FLUXO OPERACIONAL

**Ezequiel:**

> Em funcionamento, o fluxo ocorre da seguinte forma:
>
> Quando um notebook entra na rede:
>
> * ele recebe IP automaticamente via DHCP;
> * autentica no domínio auto.tec;
> * resolve nomes internos pelo DNS;
> * e qualquer requisição externa passa obrigatoriamente pelo firewall Linux.
>
> Isso cria um ambiente controlado, organizado e seguro.

---

# SLIDE 11 — DESAFIOS TÉCNICOS

**Ezequiel:**

> Durante a implementação enfrentamos desafios reais de infraestrutura.
>
> Entre eles:
>
> * notebooks defeituosos;
> * falhas de hardware;
> * roteador com comportamento instável;
> * falhas de conectividade;
> * problemas com DNS;
> * internet intermitente;
> * reinstalações de ambiente;
> * troubleshooting de interfaces de rede.
>
> Esses problemas exigiram análise técnica, testes, diagnóstico e reconfiguração.
>
> Isso aproximou o projeto de um cenário profissional real.

---

# SLIDE 12 — RESULTADO FINAL

**Ezequiel:**

> Ao final, entregamos uma infraestrutura corporativa funcional contendo:
>
> * autenticação centralizada;
> * gerenciamento de usuários;
> * resolução DNS;
> * distribuição automática de rede;
> * firewall Linux;
> * NAT;
> * servidor de aplicação;
> * banco de dados;
> * rede cabeada;
> * rede wireless.
>
> Em outras palavras, uma infraestrutura pronta para sustentar o ambiente da empresa cliente.

---

# SLIDE 13 — ENCERRAMENTO

**Ezequiel:**

> Esse projeto permitiu aplicar na prática conceitos reais de infraestrutura corporativa, administração de servidores, redes e segurança.
>
> Mais do que montar equipamentos, nosso objetivo foi entregar uma solução coerente com o cenário apresentado.
>
> Obrigado pela atenção.

---
