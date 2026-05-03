# 🖥️ Windows Server 2022 — Anotações Organizadas e Explicadas

## 📌 Versões do Windows Server

O Windows Server possui diferentes versões, e entender isso evita confusão na hora de instalar.

### 🔹 Standard vs Datacenter

- **Standard**
  - Mais básica
  - Possui **limitações em virtualização**
  - Tem suporte a interface gráfica (GUI), dependendo da instalação
  - Ideal para ambientes menores

- **Datacenter**
  - Versão **mais completa e robusta**
  - Suporta **virtualização ilimitada (Hyper-V)**
  - Recursos avançados (ex: Storage Spaces Direct, Shielded VMs)
  - Mais cara 💰
  - Indicada para empresas maiores ou laboratórios completos

💡 **Analogia:**  
A versão Standard é como um carro popular — faz o básico bem.  
A Datacenter é como um carro completo — tem todos os extras disponíveis.

---

## ⚙️ Sobre o Windows Server 2022 (x64)

- Arquitetura: **64 bits (x64)** → padrão atual
- Mais **estável e seguro**
- Menos bugs comparado a versões antigas
- Melhorias em:
  - Segurança 🔐
  - Performance ⚡
  - Integração com nuvem ☁️

💡 Importante:  
As versões do Windows Server não mudam drasticamente.  
Se você sabe usar uma, consegue usar outras com pouca adaptação.

---

## 💿 Instalação do Windows Server

O processo é **praticamente igual ao Windows comum**:

1. Iniciar pelo boot (pendrive/ISO)
2. Escolher idioma
3. Selecionar versão (**recomendo Datacenter para estudo**)
4. Seguir instalação padrão

---

## 🌐 Configuração de Rede com NIC Teaming (Agrupamento de Placas)

### 📌 O que é NIC Teaming?

É juntar várias placas de rede em uma só “virtual”.

💡 **Por que usar?**
- Aumenta desempenho 🚀
- Cria redundância (se uma placa falhar, outra assume)

💡 **Analogia:**  
É como usar várias faixas de uma estrada ao mesmo tempo — mais fluxo e menos risco de parar.

---

### ⚙️ Criando uma equipe (NIC Team)

1. Vá em **Servidor Local**
2. Procure por **NIC Teaming (Agrupamento NIC)** → clique em *Desabilitado*
3. Clique em **Tarefas → Nova equipe**

---

### 🛠️ Configuração da equipe

- Nome: qualquer (ex: `NICBruss`)
- Selecione as placas de rede disponíveis

#### 🔧 Propriedades adicionais:

- **Modo de agrupamento:**  
  → *Alternar independente*  
  (cada placa funciona de forma independente, mais compatível)

- **Balanceamento de carga:**  
  → *Dinâmico*  
  (o sistema distribui o tráfego automaticamente)

- **Adaptador em espera:**  
  → *Nenhum*  
  (todas as placas ficam ativas)

- **Interface primária:**  
  → deixar padrão

---

## 🌍 Configurando IP Manual (IPv4)

Depois de criar a equipe:

1. Clique com botão direito no ícone de rede (canto inferior direito)
2. Vá em **Abrir Configurações de Rede**
3. Clique em **Ethernet**
4. Vá em **Alterar opções de adaptador**
5. Clique com botão direito na interface criada (NIC Team)
6. Vá em:
   - **Protocolo IP Versão 4 (TCP/IPv4)**
   - Clique em **Propriedades**

---

### 📥 Configuração manual:

Marque:

- ✅ Usar o seguinte endereço IP

Exemplo:

- IP: `192.168.32.10`
- Máscara: `255.255.255.0`
- Gateway: `192.168.32.1`

💡 **Explicação rápida:**
- IP → identifica o servidor na rede
- Máscara → define o tamanho da rede
- Gateway → rota de saída (internet ou outra rede)

---

## 🖥️ Alterando o Nome do Servidor

1. Vá em **Servidor Local**
2. Clique no nome do computador
3. Clique em **Alterar**
4. Defina um nome (ex: `SRVBruss`)

⚠️ Se der erro:
- Reinicie o servidor
- Tente novamente

---

# ⚡ Resumo Relâmpago (10 linhas)

- Windows Server tem versões Standard e Datacenter  
- Datacenter é mais completa e usada em ambientes maiores  
- Windows Server 2022 é mais estável e seguro  
- Instalação é parecida com Windows comum  
- NIC Teaming junta várias placas de rede em uma  
- Serve para aumentar desempenho e redundância  
- Configuração recomendada: independente + dinâmico  
- IP pode ser configurado manualmente no IPv4  
- Gateway é a saída da rede  
- Nome do servidor pode ser alterado no servidor local  

---

# 🧠 Resumo Final (Revisão Rápida)

- **Datacenter = mais recursos (ideal para estudo)**
- **NIC Teaming = várias placas viram uma**
- **Modo ideal: independente + dinâmico**
- **Configurar IP manual = controle total da rede**
- **Nome do servidor = identificação na rede**
