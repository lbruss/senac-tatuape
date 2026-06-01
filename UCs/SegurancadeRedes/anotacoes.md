# Slide 1 — ConnectStar

**Fala do Ezequiel**

"Boa tarde a todos.

Nós somos a ConnectStar, uma empresa especializada em infraestrutura, redes e suporte corporativo.

Hoje vamos apresentar a solução de infraestrutura desenvolvida para a empresa Synccode, responsável pelo sistema AutoLoc.

Nosso objetivo foi criar uma estrutura de rede segura, organizada e preparada para suportar os serviços necessários para o funcionamento da empresa."

---

# Slide 2 — Sobre a ConnectStar

**Fala do Ezequiel**

"A ConnectStar atua na área de infraestrutura e redes corporativas.

Trabalhamos com servidores Linux e Windows, configuração de firewall, monitoramento de rede, gerenciamento de usuários, conectividade cabeada e wireless e suporte técnico.

Para este projeto desenvolvemos uma solução completa para atender as necessidades da Synccode, garantindo conectividade, segurança e gerenciamento centralizado."

---

# Slide 3 — Integrantes

**Fala do Ezequiel**

"Esse foi o time responsável pelo desenvolvimento do projeto.

Cada integrante ficou responsável por uma área específica da infraestrutura, como servidores, redes, segurança, documentação, conectividade e suporte.

A divisão das funções permitiu que todas as etapas fossem executadas de forma organizada e eficiente."

---

# Slide 4 — Cliente: Synccode

**Fala do Ezequiel**

"A Synccode foi a empresa cliente deste projeto.

O principal desafio era disponibilizar uma infraestrutura capaz de suportar seus serviços de forma segura e organizada.

Nossa responsabilidade foi construir toda a estrutura de rede, servidores, autenticação de usuários, acesso à internet e mecanismos de segurança necessários para que o ambiente funcionasse corretamente.

O software AutoLoc é desenvolvido pela Synccode e será executado sobre a infraestrutura que construímos."

---

# Slide 5 — Infraestrutura

**Fala do Ezequiel**

"Agora vamos apresentar a infraestrutura desenvolvida pela ConnectStar.

A partir deste ponto mostraremos como todos os equipamentos foram organizados para formar um ambiente corporativo completo."

---

# Slide 6 — Diagrama da Infraestrutura

**Fala do Ezequiel**

"Este é o diagrama lógico da nossa infraestrutura.

A internet chega primeiro ao servidor Linux Firewall, que é responsável pela segurança e controle do tráfego.

Depois disso a conexão é distribuída para o switch, que funciona como o ponto central da rede.

No switch estão conectados:

* o servidor Windows Server;
* o servidor Linux de aplicação;
* os notebooks dos usuários;
* o Access Point para acesso sem fio.

O Windows Server realiza o gerenciamento centralizado dos usuários e serviços da rede.

O servidor Linux de aplicação hospeda o banco de dados MySQL e o Apache Tomcat.

Já o Access Point permite a conexão de dispositivos wireless."

---

# Slide 7 — Localização

**Fala do Ezequiel**

"Para tornar o projeto mais próximo de um ambiente real, utilizamos o Cisco Packet Tracer para representar a localização da empresa.

Aqui mostramos a cidade de São Paulo, onde está localizada a empresa Synccode."

---

# Slide 8 — Região do Tatuapé

**Fala do Ezequiel**

"Nesta etapa aproximamos a visualização até a região do Tatuapé.

O objetivo foi demonstrar onde estaria localizada a empresa dentro da simulação desenvolvida."

---

# Slide 9 — Planta da Empresa

**Fala do Ezequiel**

"Esta é a planta da empresa Synccode.

Nela podemos observar diversos setores como:

* área de desenvolvimento;
* monitoramento;
* suporte;
* documentação;
* servidores;
* sala técnica.

A infraestrutura foi planejada considerando uma empresa real, com setores separados e espaço dedicado para equipamentos críticos."

---

# Slide 10 — Estrutura Física

**Fala do Ezequiel**

"Esta imagem representa a montagem física da infraestrutura dentro do Cisco Packet Tracer.

Podemos observar os servidores, roteador, notebooks, smartphone e os equipamentos conectados através do switch.

Isso permite visualizar como os dispositivos estariam organizados fisicamente dentro da empresa."

---

# Slide 11 — Demonstração do Ping (Vídeo)

**Fala do Ezequiel**

"Neste vídeo mostramos a comunicação entre dois notebooks da rede.

Utilizamos a ferramenta de simulação do Cisco Packet Tracer para realizar um teste de ping.

O envelope representa um pacote de dados sendo enviado de um notebook para o outro.

Primeiro o pacote sai do Notebook 1 e chega ao switch.

O switch identifica para onde aquela informação deve ser encaminhada e envia o pacote até o Notebook 2.

Em seguida o Notebook 2 responde e o pacote retorna ao Notebook 1.

Esse teste demonstra que a comunicação da rede está funcionando corretamente e que os dispositivos conseguem trocar informações entre si.

Em uma empresa, essa comunicação é essencial para acesso a sistemas, arquivos, servidores e serviços de rede."

---

# Slide 12 — Debian Server

**Fala do Ezequiel**

"Utilizamos o Debian como base dos nossos servidores Linux.

Um dos servidores foi utilizado como Firewall, responsável pela segurança e acesso à internet.

O outro foi utilizado como servidor de aplicação, executando serviços como MySQL, Apache Tomcat e monitoramento através do Netdata.

Essa solução oferece estabilidade, desempenho e segurança para o ambiente corporativo."

---

# Slide 13 — Tomcat e Firewall

**Fala do Ezequiel**

"Do lado esquerdo temos o Apache Tomcat.

Ele é responsável por executar aplicações web desenvolvidas em Java e é amplamente utilizado em ambientes corporativos.

Do lado direito temos o Firewall.

Sua função é controlar o tráfego da rede, permitindo conexões autorizadas e bloqueando acessos indevidos.

Dessa forma conseguimos aumentar a segurança da infraestrutura."

---

# Slide 14 — Windows Server

**Fala do Ezequiel**

"Também utilizamos o Windows Server como servidor central da rede.

Ele foi responsável pelos serviços de:

* Active Directory;
* DNS;
* DHCP;
* gerenciamento de usuários;
* autenticação no domínio.

Com isso os usuários podem acessar seus recursos utilizando contas centralizadas e administradas pela empresa."

---

# Slide 15 — Resumo da Solução

**Fala do Ezequiel**

"Em resumo, nossa solução foi composta por:

* servidor Linux Firewall;
* servidor Linux de Aplicação;
* Windows Server;
* domínio corporativo;
* autenticação centralizada;
* DNS;
* DHCP;
* rede cabeada;
* conectividade wireless.

Todos esses componentes trabalham juntos para fornecer uma infraestrutura segura, organizada e funcional."

---

# Slide 16 — Custos do Projeto

**Fala do Ezequiel**

"Além da implementação técnica, também realizamos o levantamento dos custos da solução.

Nesta tabela estão apresentados os equipamentos utilizados, seus respectivos valores e o custo da mão de obra.

O investimento total da infraestrutura foi estimado em R$ 26.150 em equipamentos e R$ 7.000 em serviços.

Esse valor contempla uma solução completa para atender as necessidades apresentadas pela Synccode."

---

# Slide 17 — Encerramento

**Fala do Ezequiel**

"Encerramos aqui a apresentação da infraestrutura desenvolvida pela ConnectStar para a Synccode.

Agradecemos a atenção de todos e ficamos à disposição para responder perguntas."

---
