# Projeto Integrador — Infraestrutura Corporativa AutoLock

## Documentação Técnica Parcial Consolidada (Dia 1 ao Dia 6)

- **Empresa prestadora de serviços:** ConnectStar
- **Empresa cliente:** Synccode
- **Projeto atendido:** AutoLock
- **Status:** Projeto em andamento *(documentação parcial consolidada)*

---

# Sumário

1. Introdução
2. Sobre a ConnectStar
3. Sobre a empresa cliente Synccode
4. Sobre o sistema AutoLock
5. Objetivo do projeto
6. Escopo da infraestrutura
7. Equipe técnica e responsabilidades
8. Infraestrutura planejada
9. Inventário de equipamentos
10. Planta física da empresa cliente
11. Arquitetura lógica da infraestrutura
12. Diário técnico consolidado
13. Estado atual da infraestrutura
14. Pendências atuais

---

# 1. Introdução

Este documento apresenta a documentação técnica parcial consolidada do Projeto desenvolvido pela **ConnectStar**, responsável pelo planejamento, implementação e documentação da infraestrutura tecnológica necessária para suportar o funcionamento do sistema **AutoLock**, pertencente à empresa cliente **Synccode**.

**ConnectStar** atua como empresa especializada em:

* infraestrutura de TI;
* redes corporativas;
* servidores;
* conectividade;
* segurança;
* suporte técnico;
* manutenção de computadores e redes locais.

Dentro desse contexto, a empresa cliente **Synccode**, responsável pelo desenvolvimento do software **AutoLock**, contratou a ConnectStar para implementar toda a infraestrutura necessária para sustentação da aplicação.

A proposta do projeto envolve a implantação de um ambiente corporativo completo contendo:

* servidor Windows;
* servidor Linux Firewall;
* servidor Linux de aplicação;
* Active Directory;
* DNS;
* DHCP;
* firewall;
* NAT;
* banco de dados;
* servidor de aplicação;
* estações cliente;
* conectividade cabeada;
* conectividade wireless;
* monitoramento.

Este documento consolida todas as atividades realizadas até o momento.

---

# 2. Sobre a ConnectStar

A **ConnectStar** representa uma organização especializada em serviços de tecnologia da informação, com foco em:

* montagem e manutenção de computadores;
* implantação de redes locais;
* configuração de servidores;
* segurança de rede;
* suporte técnico;
* documentação de infraestrutura;
* conectividade corporativa.

---

# 3. Sobre a empresa cliente Synccode

A **Synccode** representa a empresa cliente atendida pela ConnectStar.

Essa empresa corresponde ao grupo parceiro de outro Projeto Integrador, responsável pelo desenvolvimento do software AutoLock.

No cenário, a Synccode atua como empresa de desenvolvimento de software e terceiriza a implementação da infraestrutura tecnológica necessária para seu sistema.

---

# 4. Sobre o sistema AutoLock

O **AutoLock** é uma plataforma digital desenvolvida para facilitar a localização de serviços automotivos.

Objetivo da aplicação:

* localizar oficinas mecânicas;
* localizar locadoras;
* localizar serviços automotivos próximos;
* utilizar geolocalização;
* permitir comparação entre estabelecimentos;
* auxiliar usuários na tomada de decisão.

Características técnicas da aplicação:

### Front-end

* HTML
* CSS
* JavaScript

### Back-end

* Java
* Spring Boot

### Banco de dados

* MySQL

### Servidor de aplicação

* Apache Tomcat

### Sistema operacional servidor

* Linux Debian

---

# 5. Objetivo do projeto

O objetivo deste projeto é projetar, implementar e documentar a infraestrutura necessária para suportar o funcionamento do sistema AutoLock dentro de um ambiente corporativo simulado.

Objetivos específicos:

* implantar ambiente Windows Server;
* configurar Active Directory;
* configurar DNS;
* configurar DHCP;
* implantar firewall Linux;
* configurar NAT;
* configurar DNSMasq;
* implantar servidor Linux de aplicação;
* instalar Java;
* instalar MySQL;
* instalar Apache Tomcat;
* integrar estações cliente ao domínio;
* configurar rede cabeada;
* configurar Wi-Fi corporativo;
* documentar toda a infraestrutura.

---

# 6. Escopo da infraestrutura

A infraestrutura prevista contempla:

## Ambiente Microsoft

* Windows Server 2025
* Active Directory
* DNS
* DHCP
* domínio corporativo

## Ambiente Linux

* Debian Linux Firewall
* Debian Linux Aplicação
* NAT
* DNSMasq
* nftables
* firewall

## Aplicação

* Java
* MySQL
* Apache Tomcat

## Rede

* switch
* Access Point
* notebooks clientes
* cabeamento estruturado

## Monitoramento

* Netdata *(planejado)*

---

# 7. Equipe técnica e responsabilidades

## ConnectStar — Equipe de Infraestrutura

| Integrante        | Cargo                                     | Responsabilidades                            |
| ----------------- | ----------------------------------------- | -------------------------------------------- |
| Bruss Loza        | Gerente de Infraestrutura / Líder Técnico | documentação, Windows Server, Linux Firewall |
| Eduardo Mantovani | Administrador Windows Server              | implantação Windows Server                   |
| Enzo Becker       | Analista de Infraestrutura Windows        | suporte ao Windows Server                    |
| Ruan Anderson     | Analista de Segurança e Firewall          | Linux Firewall, roteador                     |
| João Vitor        | Técnico de Redes e Firewall               | Linux Firewall, roteador                     |
| Daniel Vieira     | Analista de Redes e Conectividade         | redes, roteador, firewall, slides            |
| Ezequiel Soares   | Técnico de Redes                          | apresentação técnica, redes                  |
| Victor Gabriel    | Administrador Linux e Banco de Dados      | MySQL, Tomcat, Linux                         |

---

# 8. Infraestrutura planejada

Estrutura planejada:

* Internet
* Linux Firewall
* Switch
* Windows Server
* Linux Aplicação
* Access Point
* Notebooks clientes
* monitores de demonstração

---

# 9. Inventário de equipamentos

| Equipamento         | Quantidade | Função                  |
| ------------------- | ---------- | ----------------------- |
| PC Linux Firewall   | 1          | Gateway / firewall      |
| PC Linux Aplicação  | 1          | MySQL + Tomcat          |
| PC Windows Server   | 1          | Serviços Microsoft      |
| Notebooks           | 2          | clientes / demonstração |
| Monitores           | 2          | exibição do AutoLock    |
| Switch              | 1          | conectividade central   |
| Access Point D-Link | 1          | rede Wi-Fi              |
| Cabos de rede       | 6          | conectividade física    |

---

# 10. Planta física da empresa cliente

Foi criada uma planta física da empresa Synccode para contextualizar o ambiente corporativo do projeto.

Ambientes previstos:

* recepção
* help desk
* suporte técnico
* documentação
* desenvolvimento
* Windows Server
* Linux Server
* backup / storage
* monitoramento
* sala de reunião
* infraestrutura de rede

<img width="1431" height="787" alt="synccode" src="https://github.com/user-attachments/assets/3042d389-7a41-466a-a675-488b0483f81a" />

---

# 11. Arquitetura lógica da infraestrutura

Configuração lógica atual:

| Equipamento    | IP           |
| -------------- | ------------ |
| Linux Firewall | 192.168.0.1  |
| Access Point   | 192.168.0.2  |
| Windows Server | 192.168.0.10 |

DHCP:

```
192.168.0.50 → 192.168.0.200
```

Domínio:

```
auto.tec
```

---

# 12. Diário técnico consolidado

A próxima parte conterá:

* Dia 1
* Dia 2
* Dia 3
* Dia 4
* Dia 5
* Dia 6

---

# 12. Diário técnico consolidado

# 12.1 Dia 1 — 15/05/2026

## Objetivo do dia

O primeiro dia foi dedicado à seleção, preparação e identificação dos equipamentos físicos necessários para a montagem inicial da infraestrutura.

---

## Seleção dos notebooks

Inicialmente foram selecionados notebooks para utilização como estações cliente e demonstração.

Durante os testes:

- diversos notebooks apresentaram falhas;
- alguns não inicializavam corretamente;
- outros apresentavam lentidão excessiva.

Após múltiplas tentativas, foram encontrados **dois notebooks funcionais**, ambos com **Windows 10 instalado**.

Apesar da limitação de desempenho, os equipamentos atenderam à necessidade inicial do projeto.

Como a seleção ocorreu apenas no final do período, poucas configurações adicionais puderam ser executadas.

---

## Preparação do Windows Server

O equipamento destinado ao Windows Server foi encontrado funcionando corretamente.

Entretanto, ainda não havia mídia de instalação disponível.

Foi então criado:

- pendrive bootável com Ventoy;
- ISO do Windows Server 2025.

Essa preparação ocorreu no final do dia.

---

## Seleção do Linux Firewall

A escolha da máquina destinada ao firewall Linux foi complexa.

Problemas encontrados:

- equipamentos defeituosos;
- falhas de inicialização;
- incompatibilidades físicas.

Após diversos testes, foi encontrado equipamento funcional.

Por falta de tempo, a instalação do Debian não foi iniciada.

---

## Linux Aplicação

O servidor destinado ao ambiente de aplicação foi preparado.

Foi realizado:

- instalação inicial do Debian Linux.

Nenhuma configuração adicional foi executada nesse dia.

---

## Roteador

O roteador inicialmente selecionado foi testado e configurado.

Estado:

- funcionando

---

## Identificação física

Todos os equipamentos receberam identificação física com etiquetas.

Itens identificados:

- computadores
- notebooks
- cabos
- roteador

Objetivos:

- organização;
- rastreabilidade;
- troubleshooting facilitado.

---

## Inventário inicial

| Equipamento | Quantidade |
|----------|------------|
| PC Linux Firewall | 1 |
| PC Linux Aplicação | 1 |
| PC Windows Server | 1 |
| Notebooks | 2 |
| Monitores | 2 |
| Roteador | 1 |
| Cabos de rede | 6 |

---

# 12.2 Dia 2 — 18/05/2026

## Objetivo do dia

Continuidade da preparação da infraestrutura.

---

## Notebooks

Foram instalados os softwares necessários.

| Software | Versão |
|--------|--------|
| Java | 25.0.1 |
| XAMPP | v3.3.0 |
| MySQL Workbench | 8.0.45 |
| Eclipse | 4.37.0 |

Um notebook apresentou falha e precisou ser substituído.

Resultado:

- instalação concluída com sucesso

---

## Windows Server

A mídia bootável anterior apresentou falha.

Foi recriado o pendrive utilizando:

- Rufus

Sistema:

- Windows Server 2025

**Aqui é recomendado colocar a imagem6.**

---

## Linux Firewall

O ambiente apresentou falha no DNSMasq.

Decisão tomada:

- reinstalação;
- reconfiguração completa.

Configuração final aplicada:

- gateway: 192.168.0.1
- NAT
- DNSMasq
- nftables
- roteamento

Resultado:

- internet funcionando

---

## Linux Aplicação

Foi identificado ambiente inconsistente.

Problemas:

- versões incorretas;
- necessidade de padronização.

Decisão:

- reinstalação futura.

---

# 12.3 Dia 3 — 19/05/2026

## Objetivo do dia

Implantação do ambiente Microsoft e continuidade da infraestrutura.

---

## Problema inicial

Tentativa de conectar firewall à internet.

Problema:

- falha no roteador.

Ação:

- reset do equipamento;
- prioridade para outros servidores.

---

## Windows Server

Instalação concluída com sucesso.

Serviços instalados:

- Active Directory
- DNS
- DHCP

---

## Configuração do servidor

| Parâmetro | Valor |
|---------|-------|
| IP | 192.168.0.10 |
| Gateway | 192.168.0.1 |
| DNS | 192.168.0.10 |

---

## DHCP

| Configuração | Valor |
|-------------|-------|
| IP inicial | 192.168.0.50 |
| IP final | 192.168.0.200 |

---

## Domínio

```
auto.tec
````

---

## Roteador

Foi desativado:

* DHCP

---

## Teste DNS

Teste:

```
ping auto.tec
```

Resultado:

- resolução funcional

---

## Linux Aplicação

Instalado:

* Java 25.0.1
* Tomcat

MySQL ainda pendente.

---

## Linux Firewall

Foi reinstalado.

Pendente:

* configuração completa

---

# 12.4 Dia 4 — 20/05/2026

## Objetivo do dia

Consolidação física da infraestrutura.

---

## Organização

Foi realizada reorganização completa.

Adicionado:

* switch central

Objetivo:

* centralização da conectividade.

---

## Substituição do roteador

O roteador anterior apresentou falhas.

Substituído por:

**D-Link Wi-Fi Gigabit AC1300 MU-MIMO**

---

## Access Point

Configurado como:

* Access Point

IP configurado posteriormente:

```
192.168.0.2
```

---

## Linux Firewall

Configuração:

* gateway 192.168.0.1
* NAT
* DNSMasq

Problema:

* internet intermitente.

Sintoma:

* funciona por um período;
* depois para.

---

## Problemas Wi-Fi

Falhas:

* Wi-Fi não conectava adequadamente.

---

## Linux Aplicação

Instalação finalizada.

| Software | Versão  |
| -------- | ------- |
| Java     | 25.0.1  |
| MySQL    | 8.4.9   |
| Tomcat   | 11.0.22 |

---

# 12.5 Dia 5 — 21/05/2026

## Objetivo do dia

O quinto dia foi dedicado à consolidação da infraestrutura Microsoft e integração das estações cliente ao domínio corporativo.

---

## Organização da infraestrutura

No início das atividades, foi realizada nova reorganização física da infraestrutura.

Foram reorganizados:

- servidores;
- notebooks;
- switch;
- cabeamento;
- Access Point.

Objetivo:

- estabilização das conexões;
- continuidade dos testes.

---

## Correção documentacional — Access Point

Foi consolidada a configuração definitiva do Access Point.

Configuração:

| Equipamento | IP |
|----------|------|
| Access Point D-Link | 192.168.0.2 |

Distribuição da rede:

| Equipamento | IP |
|----------|------|
| Linux Firewall | 192.168.0.1 |
| Access Point | 192.168.0.2 |
| Windows Server | 192.168.0.10 |

---

## Active Directory

Foi criada uma Unidade Organizacional (OU):

```
AutoLock
````

Objetivo:

* organização lógica;
* administração centralizada;
* separação de usuários do projeto.

---

## Usuários de domínio

Foram criados:

* Convidado1
* Convidado2

Objetivo:

* autenticação corporativa;
* testes com domínio;
* simulação de ambiente empresarial.

---

## Integração dos notebooks

Os dois notebooks foram adicionados ao domínio:

```
auto.tec
```

Após isso:

* notebook 1 → login com Convidado1
* notebook 2 → login com Convidado2

Resultado:

- notebooks integrados ao domínio
- autenticação funcional
- Active Directory validado

---

## Testes de internet

Foram realizados testes de conectividade nas estações e no Windows Server.

Problema observado:

* rede conectada;
* navegação indisponível;
* erro DNS.

Sintoma:

- Internet aparentemente conectada, porém sem resolução funcional.

Diagnóstico preliminar:

* problema DNS;
* possível conflito de gateway;
* NAT;
* DNSMasq;
* integração entre firewall e Windows DNS.

---

# 12.6 Dia 6 — 22/05/2026

## Objetivo do dia

O sexto dia foi dedicado ao troubleshooting definitivo da infraestrutura de rede, com foco principal no Linux Firewall.

Também foi iniciado o planejamento de monitoramento dos servidores.

---

## Organização inicial

No início do dia, todos os equipamentos foram novamente organizados e conectados ao switch.

Itens conectados:

* Linux Firewall
* Windows Server
* Linux Aplicação
* notebooks
* Access Point

Objetivo:

* reiniciar testes de conectividade;
* troubleshooting controlado.

---

## Netdata (planejamento)

Foi definido o uso do Netdata para monitoramento dos servidores Linux.

Planejamento:

instalação em:

* Linux Firewall
* Linux Aplicação

Objetivos:

* monitoramento de CPU;
* memória;
* tráfego de rede;
* serviços;
* performance.

Instalação adiada para momento de conectividade estável.

---

## Planta da empresa cliente

Também foi elaborada a planta física da empresa Synccode.

Essa planta representa o ambiente corporativo fictício da empresa cliente.

Áreas previstas:

* recepção
* help desk
* suporte
* documentação
* desenvolvimento
* Windows Server
* Linux Server
* backup
* monitoramento
* sala de reunião
* rede

<img width="1431" height="787" alt="synccode" src="https://github.com/user-attachments/assets/3042d389-7a41-466a-a675-488b0483f81a" />

---

## Linux Firewall

Foi realizada nova reinstalação do Debian Linux.

Objetivo:

* corrigir falhas persistentes;
* reconstruir o ambiente do zero.

Serviços configurados:

* DNSMasq
* NAT
* gateway
* roteamento

Configuração:

| Função  | Valor       |
| ------- | ----------- |
| Gateway | 192.168.0.1 |
| NAT     | Ativo       |
| DNSMasq | Ativo       |

---

## Problema persistente

Mesmo após configuração:

* internet não aparecia nas estações;
* Windows sem conectividade;
* clientes sem acesso externo.

---

## Diagnóstico físico

Foi identificado detalhe crítico:

a instalação foi feita utilizando interfaces de rede em ordem inadequada.

Cenário:

* placa adicional recebendo tráfego externo;
* placa onboard conectada ao switch.

Esse detalhe impactava o comportamento esperado.

---

## Correção

Após reinstalação e reconfiguração:

- internet restaurada
- gateway funcional
- Linux Firewall operacional

Esse foi um marco importante do projeto.

---

## Netdata

A instalação não foi concluída.

Motivo:

* indisponibilidade de internet durante parte significativa do troubleshooting.

---

# 13. Estado atual da infraestrutura

## Infraestrutura consolidada

### Linux Firewall

| Item       | Valor        |
| ---------- | ------------ |
| Sistema    | Debian Linux |
| Gateway    | 192.168.0.1  |
| NAT        | Configurado  |
| DNSMasq    | Configurado  |
| Roteamento | Ativo        |

---

### Windows Server

| Item    | Valor               |
| ------- | ------------------- |
| Sistema | Windows Server 2025 |
| IP      | 192.168.0.10        |
| DNS     | 192.168.0.10        |
| DHCP    | Configurado         |
| Domínio | auto.tec            |

Serviços:

* Active Directory
* DNS
* DHCP

---

### Access Point

| Item        | Valor         |
| ----------- | ------------- |
| Equipamento | D-Link AC1300 |
| IP          | 192.168.0.2   |
| Função      | Access Point  |

---

### Linux Aplicação

| Item    | Valor        |
| ------- | ------------ |
| Sistema | Debian Linux |
| Java    | 25.0.1       |
| MySQL   | 8.4.9        |
| Tomcat  | 11.0.22      |

---

### Clientes

| Equipamento | Quantidade |
| ----------- | ---------- |
| Notebooks   | 2          |

Status:

- integrados ao domínio
- autenticação funcional

---

# 14. Pendências atuais

Ainda pendente:

* instalação do Netdata;
* validação de estabilidade da internet;
* testes completos da infraestrutura;
* integração final do ambiente;
* testes da aplicação AutoLock;
* testes de banco de dados;
* testes do servidor Tomcat;
* validação final do ambiente.

---

# Status do projeto

```
PROJETO EM ANDAMENTO
DOCUMENTAÇÃO PARCIAL CONSOLIDADA
DIAS 1 → 6
```

---
