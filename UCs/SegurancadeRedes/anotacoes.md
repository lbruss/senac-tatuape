# SLIDE 1 — CONNECTSTAR (CAPA)

**Ezequiel fala:**

> Boa noite a todos.
>
> Nós somos a **ConnectStar**, empresa especializada em infraestrutura de TI, redes corporativas, suporte técnico e segurança de ambientes computacionais.
>
> Neste projeto, atuamos como empresa contratada pela **Synccode**, com a responsabilidade de projetar e implementar a infraestrutura necessária para sustentar o funcionamento do sistema apresentado anteriormente.
>
> Nossa proposta foi construir um ambiente corporativo funcional, com autenticação centralizada, conectividade, segurança e suporte à aplicação.

---

# SLIDE 2 — SOBRE A EMPRESA

**Ezequiel fala:**

> A ConnectStar foi idealizada como uma empresa focada em infraestrutura e administração de ambientes corporativos.
>
> Nosso papel neste projeto não foi desenvolver o software, mas garantir que existisse uma base tecnológica adequada para suportá-lo.
>
> Em um cenário real, empresas frequentemente terceirizam essa parte da infraestrutura para especialistas, e foi exatamente esse modelo que simulamos aqui.
>
> Nossa responsabilidade foi entregar conectividade, gerenciamento, segurança e organização da rede corporativa.

---

# SLIDE 3 — INFRAESTRUTURA

**Ezequiel fala:**

> Agora entrando na infraestrutura implementada, projetamos uma arquitetura de rede corporativa segmentada.
>
> Nossa estrutura foi organizada para simular um ambiente empresarial real, com separação entre controle administrativo, segurança e camada de aplicação.
>
> Implementamos servidores dedicados para funções específicas, rede interna estruturada, conectividade centralizada e mecanismos de controle de acesso.
>
> O objetivo foi criar um ambiente robusto, organizado e coerente com o cenário da empresa cliente.

---

# SLIDE 4 — DEBIAN SERVER

**Ezequiel fala:**

> Para a camada Linux, utilizamos Debian como base da infraestrutura.
>
> Implementamos dois servidores Linux com funções distintas.
>
> O primeiro servidor foi dedicado à camada de segurança e conectividade, atuando como firewall e gateway principal da rede.
>
> O segundo servidor foi preparado para a camada de aplicação, fornecendo suporte ao ambiente backend necessário para a operação do sistema.
>
> Optamos pelo Debian por ser uma plataforma estável, amplamente utilizada em ambientes corporativos e adequada para administração de serviços críticos.

---

# SLIDE 5 — APACHE TOMCAT E FIREWALL

**Ezequiel fala:**

> No servidor Linux de aplicação, implementamos o Apache Tomcat, responsável por fornecer suporte à execução da aplicação Java.
>
> Também configuramos MySQL para persistência de dados e Java como ambiente de execução.
>
> Já no servidor Linux de segurança, implementamos o firewall da infraestrutura.
>
> Esse equipamento é responsável por controlar o tráfego entre a rede interna e a internet, atuando como gateway principal.
>
> Nele configuramos NAT, DNSMasq e roteamento.
>
> Isso garante que toda comunicação externa passe por um ponto central de controle, aumentando segurança e organização da rede.

---

# SLIDE 6 — WINDOWS SERVER

**Ezequiel fala:**

> Para gerenciamento corporativo da infraestrutura, implementamos um Windows Server 2025.
>
> Esse servidor concentra os serviços administrativos da rede.
>
> Nele configuramos Active Directory, DNS e DHCP.
>
> Isso nos permitiu centralizar autenticação, gerenciamento de usuários e distribuição automática de rede.
>
> Também criamos o domínio corporativo **auto.tec**, simulando o funcionamento de um ambiente empresarial real.
>
> Os notebooks clientes foram integrados a esse domínio, validando o funcionamento da autenticação centralizada.

---

# SLIDE 7 — FOTOS DOS ENVOLVIDOS

(curto, como você pediu)

**Ezequiel fala:**

> Aqui temos a equipe responsável pela criação da ConnectStar e pela implementação da infraestrutura apresentada.
>
> O projeto foi desenvolvido de forma colaborativa, com divisão de responsabilidades entre redes, servidores, segurança, documentação e suporte técnico.

**E segue. Sem alongar.**

---

# SLIDE 8 — EM RESUMO

**Ezequiel fala:**

> Em resumo, entregamos uma infraestrutura corporativa funcional composta por:
>
> * servidor Linux Firewall;
> * servidor Linux de aplicação;
> * Windows Server com gerenciamento centralizado;
> * domínio corporativo;
> * autenticação de usuários;
> * DNS;
> * DHCP;
> * rede cabeada;
> * conectividade wireless.
>
> Além da implementação técnica, enfrentamos desafios reais de infraestrutura, como falhas de hardware, problemas de conectividade e troubleshooting de rede, o que tornou a experiência ainda mais próxima de um cenário profissional.

---

# SLIDE 9 — OBRIGADO

**Ezequiel fala:**

> Esse projeto nos permitiu aplicar, na prática, conceitos reais de infraestrutura, redes corporativas, segurança e administração de servidores.
>
> Mais do que montar equipamentos, buscamos entregar uma solução coerente com a necessidade do cliente.
>
> Obrigado pela atenção.

---
