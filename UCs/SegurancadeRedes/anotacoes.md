# ROTEIRO — APRESENTAÇÃO CONNECTSTAR

---

# SLIDE 1 — CONNECTSTAR

**Ezequiel:**

> Boa tarde a todos.
>
> Nós somos a **ConnectStar**, empresa especializada em infraestrutura de tecnologia, redes corporativas, suporte técnico, administração de servidores e segurança digital.
>
> Neste Projeto Integrador, nossa função foi atuar como a empresa responsável por projetar e implementar a infraestrutura necessária para sustentar a operação do sistema apresentado anteriormente pela empresa cliente, a **Synccode**.
>
> Enquanto a Synccode desenvolveu o software AutoLock, nós ficamos responsáveis por toda a parte estrutural que permite esse sistema funcionar dentro de um ambiente corporativo.

---

# SLIDE 2 — SOBRE A EMPRESA

**Ezequiel:**

> A ConnectStar foi criada com foco em infraestrutura e administração de ambientes tecnológicos.
>
> Nosso trabalho é ajudar empresas que precisam de suporte técnico, gerenciamento de servidores, segurança, conectividade e organização dos seus serviços digitais.
>
> Em um cenário real, muitas empresas desenvolvem seus sistemas, mas contratam especialistas para cuidar da infraestrutura.
>
> Foi exatamente esse cenário que simulamos neste projeto.

---

# SLIDE 3 — EQUIPE

**Ezequiel:**

> Essa foi a equipe responsável pelo projeto.
>
> Cada integrante ficou responsável por uma área específica da infraestrutura.
>
> Tivemos divisão entre administração Linux, Windows Server, segurança, firewall, redes, conectividade, banco de dados, documentação e liderança técnica.
>
> Essa divisão foi importante porque permitiu trabalhar de forma semelhante a uma equipe real de infraestrutura corporativa.

(curto, sem enrolar)

---

# SLIDE 4 — POR QUE O CLIENTE NOS CONTRATOU

**Ezequiel:**

> Agora falando sobre o cliente.
>
> A empresa Synccode desenvolveu o AutoLock, mas precisava de uma infraestrutura capaz de sustentar esse ambiente.
>
> O problema do cliente era justamente esse:
>
> como organizar uma rede corporativa segura, com autenticação, controle de acesso, conectividade, servidores e suporte à aplicação.
>
> A ConnectStar entrou exatamente para resolver esse problema.
>
> Nossa função foi entregar a base tecnológica necessária para que a operação do cliente pudesse funcionar de forma organizada e segura.

---

# SLIDE 5 — INFRAESTRUTURA

**Ezequiel:**

> Agora vamos mostrar a infraestrutura que implementamos.

---

# SLIDE 6 — DIAGRAMA DA REDE

**Ezequiel:**

> Aqui temos a arquitetura lógica da infraestrutura.
>
> O funcionamento começa pela internet, que chega primeiro ao nosso servidor Linux Firewall.
>
> Esse servidor é o gateway principal da rede, responsável por controlar o tráfego.
>
> Depois disso, a conexão segue para o switch central.
>
> Esse switch distribui conectividade para todos os equipamentos da infraestrutura.
>
> Entre eles:
>
> * o Windows Server;
> * o servidor Linux da aplicação;
> * o Access Point;
> * os notebooks clientes.
>
> Cada equipamento foi colocado com uma função específica.
>
> O firewall protege e controla.
>
> O switch distribui.
>
> O Windows Server gerencia usuários e serviços.
>
> O servidor Linux suporta a aplicação.
>
> O Access Point fornece conectividade wireless.
>
> E os notebooks simulam as estações cliente.

---

# SLIDE 7 — VIDEO / PACKET TRACER / CENÁRIO FÍSICO

**Ezequiel:**

> Aqui mostramos a simulação da infraestrutura no Cisco Packet Tracer.
>
> Primeiro apresentamos a parte física.
>
> Escolhemos São Paulo, mais especificamente a região do Tatuapé, como localização da empresa cliente.
>
> Depois mostramos a planta física da empresa Synccode, representando um ambiente corporativo real, com salas, estações de trabalho, servidores e infraestrutura técnica.
>
> Em seguida mostramos a parte lógica da rede.
>
> Para demonstrar funcionamento da comunicação interna, utilizamos a ferramenta de simulação do Packet Tracer.
>
> Fizemos um teste de comunicação entre dois notebooks.
>
> Quando enviamos o pacote, ele sai de um notebook, passa pelo switch, é distribuído corretamente pela rede, chega ao notebook de destino e retorna ao equipamento de origem.
>
> Isso demonstra que a comunicação interna da infraestrutura está funcionando corretamente.
>
> Criamos essa estrutura porque o cliente precisava de um ambiente corporativo organizado, funcional e seguro.

---

# SLIDE 8 — DEBIAN SERVER

**Ezequiel:**

> Na camada Linux, utilizamos Debian como base da infraestrutura.
>
> Implementamos dois servidores Linux.
>
> O primeiro atua como firewall da rede.
>
> Ele é responsável pelo controle da internet, roteamento, NAT, DNSMasq e segurança.
>
> O segundo servidor foi preparado para a aplicação.
>
> Nele instalamos Java, Apache Tomcat e MySQL.
>
> Esse ambiente serve como base para execução da aplicação da empresa cliente.

---

# SLIDE 9 — TOMCAT E FIREWALL

**Ezequiel:**

> Aqui detalhamos melhor duas partes importantes.
>
> O Apache Tomcat foi implementado para suportar aplicações desenvolvidas em Java.
>
> Como o ambiente da Synccode utiliza essa tecnologia, esse servidor foi preparado para isso.
>
> Já o firewall Linux é responsável por segurança e controle do tráfego.
>
> Além de fornecer acesso à internet, ele também permite aplicar políticas de segurança.
>
> Durante o projeto inclusive configuramos bloqueio de sites como demonstração prática de controle de acesso.

---

# SLIDE 10 — WINDOWS SERVER

**Ezequiel:**

> Para gerenciamento corporativo da infraestrutura, utilizamos Windows Server.
>
> Nesse servidor implementamos:
>
> * Active Directory;
> * DNS;
> * DHCP.
>
> Também criamos o domínio corporativo **auto.tec**.
>
> Isso permitiu autenticação centralizada.
>
> Os notebooks clientes foram adicionados ao domínio e autenticados com usuários corporativos criados no servidor.
>
> Em resumo, o Windows Server ficou responsável pela administração central da rede.

---

# SLIDE 11 — RESUMO

**Ezequiel:**

> Resumindo a solução entregue:
>
> implementamos:
>
> * servidor Linux Firewall;
> * servidor Linux de aplicação;
> * Windows Server;
> * domínio corporativo;
> * autenticação de usuários;
> * DNS;
> * DHCP;
> * rede cabeada;
> * conectividade wireless.
>
> Além da implementação técnica, enfrentamos desafios reais de infraestrutura, como problemas de hardware, falhas de conectividade e troubleshooting de rede.

---

# SLIDE 12 — VALORES

**Ezequiel:**

> Também temos os custos da infraestrutura.
>
> Consideramos:
>
> notebooks;
> monitores;
> servidores;
> switch;
> roteador;
> firewall;
> smartphone;
> configuração e licenciamento.
>
> O valor estimado da solução foi de aproximadamente **R$ 19.650**.
>
> Esse valor representa a entrega da infraestrutura completa necessária para o ambiente do cliente.

---

# SLIDE 13 — OBRIGADO

**Ezequiel:**

> Esse projeto nos permitiu aplicar na prática conceitos reais de infraestrutura corporativa, redes, segurança e administração de servidores.
>
> Mais do que montar equipamentos, nosso objetivo foi entregar uma solução coerente com a necessidade do cliente.
>
> Obrigado pela atenção.

---
