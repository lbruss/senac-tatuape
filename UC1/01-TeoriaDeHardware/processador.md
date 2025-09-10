# Processadores Intel e AMD

## Tipos (Intel e AMD)

- i3 / Ryzen 3 → entrada
- i5 / Ryzen 5 → intermediário
- i7 / Ryzen 7 → desempenho
- i9 / Ryzen 9 → trabalho pesado

## Marcas

Intel → i1 ao i14 / Ultra

- **Linha Ultra** → nova geração da Intel 

AMD → Ryzen 1000, 2000, 3000/4000, 5000, 7000/8000, 9000

**Como saber qual é melhor?** 

Intel Core i5 14400 é inferior ao i5 14600

AMD Ryzen 5 7500F é inferior ao Ryzen 5 7600

---

## Intel: Soquetes

  - **10ª e 11ª Geração** → LGA 1200  
  - **12ª, 13ª e 14ª Geração** → LGA 1700  
  - **Intel Ultra** → LGA 1851  

---

## AMD: Soquetes
- **Ryzen (arquiteturas por geração):**
  - Ryzen **1000–5000** → **Soquete AM4**  
  - Ryzen **7000–9000** → **Soquete AM5**  

## Sufixos dos Processadores

## AMD
- G → gráficos integrados (ex: Ryzen 5 8600G)
- X → maior frequência (ex: Ryzen 5 5600X)
- F → sem gráficos integrados (ex: Ryzen 5 7600F)
- 3D → maior cache (ex: Ryzen 7 7800X3D)

## Intel
- F → sem gráficos integrados
- K → desbloqueado para overclock


---

## Core, Thread e GHz
- **Core (Núcleo):** o *motor* do processador → quanto mais cores, maior o poder de processamento.  
- **GHz (Frequência):** “velocidade” do núcleo → pode variar conforme a carga.  
- **Importante:** Core ≠ GHz.  

### Threads
- **Threads = Processadores lógicos.**  
- Exemplos:  
  - `4 Cores / 4 Threads` → desempenho básico.  
  - `4 Cores / 8 Threads` → mais eficiente (melhor multitarefa).  

### Diferenças Intel x AMD
- **Intel (13ª, 14ª e Ultra):** performance-cores (altos) + efficiency-cores (baixos).  
- **AMD:** multiplica cores em threads (ex.: 6C/12T).  
- **Intel Ultra (atual):** não dobra cores/threads como o AMD (ainda).  

---

## Consultando Fichas Técnicas
- **Intel:** basta pesquisar `ark (modelo)` → exemplo: `ark i7-12700K`.  
- **AMD:** pesquisar `AMD Ryzen (modelo)` → exemplo: `AMD Ryzen 7 5800X`.  
  - Diferença: a Intel disponibiliza fichas de **todas** as gerações, já a AMD não mantém informações completas dos modelos mais antigos.

---

## AMD – Processadores
- **Trabalho pesado:** exige mais **núcleos, threads e GHz**.  
- **Jogos:** demanda mais **cache** → modelos com **X3D / 3D** são ideais.  

**Observação:** Nos consoles, a configuração mais comum é **8 Cores / 16 Threads**.

---

## Cache
- **L1:** dentro do núcleo (ultrarrápido, mas pequeno).  
- **L2:** “quintal” exclusivo de cada núcleo.  
- **L3:** “quintal” compartilhado entre todos os núcleos.  

---

## Transistor
- Funciona como o **neurônio do processador**.  
- Antes dele, era usada a **válvula**.  
- Transistores **esquentam**, mas quanto **menores**, menos calor geram.  
- Atualmente: fabricação em **5 nm** (nanômetros).  
- **1 nm = 0,00000001 mm**.  

---

## TSMC – Taiwan
- Principal fabricante de chips do mundo.  
- Produz para **diversas empresas** (incluindo AMD, Apple, NVIDIA e outras).  

---

## TDP (Thermal Design Power)
- Representa o **consumo de energia** do processador.  
- Medido em **Watts (W)**.  
- Pode variar conforme o uso.  

### EM RESUMO

# AMD – Processadores

### Uso Ideal
| Situação          | O que é mais importante?        | Exemplos/Observações |
|-------------------|---------------------------------|-----------------------|
| **Trabalho pesado** | Mais **núcleos, threads e GHz** | Renderização, edição de vídeo, multitarefas |
| **Jogos**          | Mais **cache (X3D/3D)**         | Consoles costumam ter **8C / 16T** |

---

## Cache

| Tipo  | Localização                   | Característica |
|-------|-------------------------------|----------------|
| **L1** | Dentro do núcleo              | Muito rápido, mas pequeno |
| **L2** | Exclusivo de cada núcleo      | “Quintal” individual |
| **L3** | Compartilhado entre núcleos   | “Quintal” coletivo |

---

## Transistor

| Item            | Informação |
|-----------------|------------|
| Função          | “Neurônio” do processador |
| Antes dele      | Válvulas |
| Problema        | Esquenta muito |
| Solução atual   | Quanto **menor**, menos calor |
| Escala atual    | **5 nm** |
| Conversão       | **1 nm = 0,00000001 mm** |

---

## TSMC – Taiwan
- Principal fabricante mundial de chips.  
- Produz para **AMD, NVIDIA, Apple, Qualcomm** e muitas outras empresas.  

---

## TDP (Thermal Design Power)

| Faixa de TDP | Consumo típico | Uso comum |
|--------------|---------------|-----------|
| **15–45 W**  | Baixo         | Notebooks ultrafinos |
| **65–95 W**  | Médio         | Desktops padrão |
| **105–170 W**| Alto          | Processadores de alto desempenho / overclock |

---
