# Windows Server 

O Windows Server é um sistema operacional da Microsoft criado especialmente para gerenciar redes, usuários e serviços dentro de empresas.


---

**O que é Windows Server?**

O Windows Server é como uma versão “profissional” do Windows, feita para:

controlar vários computadores ao mesmo tempo

armazenar dados com segurança

rodar serviços importantes

manter sistemas funcionando 24h


Analogia:
Se o Windows comum é um computador pessoal, o Windows Server é como o “cérebro da empresa”, que organiza tudo e garante que tudo funcione corretamente.


---

**Função do Windows Server**

Ele serve para centralizar e gerenciar tudo dentro de uma rede.


---

1. Gerenciamento de usuários

Com o Windows Server você pode:

criar contas para funcionários

definir permissões (quem pode acessar o quê)

controlar logins


Isso é feito principalmente com o Active Directory

Analogia:
É como um porteiro inteligente, que decide quem entra e onde pode ir.


---

2. Compartilhamento de arquivos

Criar pastas compartilhadas

Controlar quem pode acessar

Armazenar arquivos da empresa


Muito usado em escritórios


---

3. Servidor de rede

Ele pode fornecer serviços como:

DHCP → distribui IP automaticamente

DNS → resolve nomes (ex: google.com)

Servidor Web → hospeda sites

Servidor de impressão



---

4. Segurança

Controle de acesso

Políticas de senha

Firewall

Auditoria de usuários


Ajuda a proteger os dados da empresa


---

5. Virtualização

Com ferramentas como o Hyper-V, o Windows Server permite:

criar máquinas virtuais

rodar vários sistemas em um único servidor


Analogia:
É como ter vários computadores dentro de um só.


---

6. Aplicações empresariais

Ele também roda sistemas como:

ERPs

bancos de dados

sistemas internos da empresa



---

## Diferença entre Windows comum e Windows Server

Windows comum	Windows Server

Uso pessoal	Uso empresarial
1 usuário principal	Vários usuários
Interface simples	Ferramentas avançadas
Não gerencia rede	Gerencia toda a rede



---

## Onde o Windows Server é usado?

Empresas

Escolas

Hospitais

Bancos

Data centers



---

**Resumindo**

O Windows Server serve para:

organizar redes

controlar usuários

armazenar dados

manter serviços funcionando

---

# Conclusão

O Windows Server é essencial no mundo da TI porque permite que empresas:

tenham controle total da rede

aumentem a segurança

melhorem a organização

mantenham tudo funcionando de forma centralizada


Em poucas palavras:
sem servidores, a maioria das empresas simplesmente não conseguiria funcionar direito.

---

# Versões do Windows Server

O **Windows Server** possui diferentes versões, cada uma com objetivos específicos.

**Windows Server Standard**

- Possui **menos recursos avançados**
- Indicado para **pequenas e médias empresas**
- Suporta virtualização, mas com limitações

---

**Windows Server Datacenter**

- Versão mais completa
- Possui **todos os recursos disponíveis**
- Indicado para:
  - grandes empresas
  - data centers
  - ambientes com muita virtualização

**Analogia:**  
- Standard → carro básico  
- Datacenter → carro completo com todos os opcionais

---

# Windows Server 2022 (64 bits)

O **Windows Server 2022 x64** é uma versão moderna e estável.

**Características**

- Melhor segurança  
- Correções de erros  
- Maior desempenho  
- Suporte a novas tecnologias  

Em geral, quem aprende uma versão consegue usar outras, pois a base é muito parecida.

---

# Instalação do Windows Server

A instalação é **muito semelhante ao Windows comum**:

1. Iniciar a instalação pelo ISO
2. Escolher idioma
3. Avançar normalmente

---

**Escolha da versão**

Durante a instalação, escolha:

Datacenter (Experiência com área de trabalho)

Essa opção inclui **interface gráfica (GUI)**, facilitando o uso.

---

# Configuração de Rede (NIC Teaming)

O **NIC Teaming** permite unir várias placas de rede em uma só.

**Vantagens**

- Maior velocidade  
- Redundância (se uma falhar, outra assume)  
- Melhor desempenho  

**Analogia:**  
É como usar **várias pistas em uma rodovia** ao invés de apenas uma.

---

## Criar equipe de rede

1. Vá em **Servidor Local**
2. Em **Agrupamento NIC**, clique em:

Desabilitado

3. Clique em **Tarefas → Nova Equipe**
4. Defina um nome (exemplo):

NICBruss

5. Selecione as placas de rede disponíveis

---

## Configurações recomendadas

- **Modo de agrupamento:** Alternar independente  
- **Balanceamento de carga:** Dinâmico  
- **Adaptador em espera:** Nenhum (todos ativos)  
- **Interface primária:** padrão  

---

# Configurar IP Manual

1. Clique com o botão direito no ícone de rede (canto inferior direito)
2. Abra:

Configurações de rede e Internet

3. Clique em:

Alterar opções de adaptador

4. Clique com o botão direito na interface criada (ex: NICBruss)
5. Vá em:

Protocolo IP Versão 4 (TCP/IPv4)

6. Clique em **Propriedades**

---

## Definir IP

Marque:

Usar o seguinte endereço IP

Exemplo:

- IP: 192.168.32.10
- Máscara: 255.255.255.0
- Gateway: 192.168.32.1

---

## Alterar Nome do Servidor

1. Vá em **Servidor Local**
2. Clique em **Nome do Computador**
3. Clique em **Alterar**
4. Defina um nome (exemplo):

SRVBruss

5. Clique em **OK**
6. Reinicie o servidor se necessário

**Analogia:**  
O nome do servidor é como o **nome de um funcionário na empresa**, facilita a identificação na rede.

---

**Informação Adicional**

Mesmo após alterar configurações, às vezes o sistema pode:

- não aplicar imediatamente
- apresentar erro temporário

Nesses casos, **reiniciar o servidor resolve na maioria das vezes**.

---

# Conclusão

Com esses passos você consegue:

- Escolher a versão correta do Windows Server  
- Instalar o sistema  
- Configurar rede  
- Criar redundância com NIC Teaming  
- Definir IP fixo  
- Nomear o servidor  

Essas são as configurações iniciais essenciais para começar a trabalhar com servidores Windows em ambientes profissionais.