# Windows Server 

## Versões do Windows Server

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