#  Placas de Vídeo

As **placas de vídeo (GPUs)** são componentes responsáveis pelo **processamento gráfico** de imagens, vídeos e jogos.  
Possuem memória própria (**VRAM**), processador gráfico (**GPU**) e tecnologias específicas para melhorar a qualidade visual e o desempenho.  

---

##  Conexão PCI Express (PCIe)

As GPUs utilizam o **PCI Express (PCIe)** para se conectar à placa-mãe.  
Existem diferentes versões: **1.0, 2.0, 3.0, 4.0 e 5.0**.

### Tipos de encaixe
- **x4**  
- **x8**  
- **x16** (mais comum)  

### Compatibilidade
- **Retrocompatível**: versões diferentes funcionam juntas.  
- O desempenho sempre será limitado pela **versão mais baixa**.  
- Exemplo prático:  
  - Placa de vídeo **PCIe 3.0** em placa-mãe **2.0** → funciona, mas com **perda de desempenho**.  
  - Placa de vídeo **PCIe 3.0** em placa-mãe **4.0 ou 5.0** → funciona, mas **limitada ao 3.0**.  

---

##  Principais Fabricantes

Atualmente existem apenas **três fabricantes de GPUs dedicadas**:

- **NVIDIA GeForce**  
- **AMD Radeon**  
- **Intel Arc** (novata, com apenas 2 gerações lançadas até agora)  

---

##  Nomenclatura dos Modelos

Os números finais do modelo indicam a categoria dentro da mesma geração:

| Final do modelo | Categoria                         | Exemplos                  |
|-----------------|-----------------------------------|---------------------------|
| **50**          | Básica (entrada, jogos leves)     | GTX 1050, RTX 3050        |
| **60**          | Intermediária (Full HD)           | GTX 1060, RTX 2060, 3060  |
| **70**          | Intermediária-avançada (até 1440p)| GTX 1070, RTX 2070, 4070  |
| **80/90**       | Topo de linha (4K, profissional)  | RTX 3080, RTX 4090        |

---

##  Tecnologias Gráficas

### Ray Tracing  
Simula iluminação, reflexos e sombras de forma realista.  
Melhora os gráficos, mas reduz o desempenho.  

### Upscaling Inteligente (aumenta FPS mantendo qualidade)  
Tecnologias que usam algoritmos e inteligência artificial para melhorar desempenho sem perda visual significativa:  

| Tecnologia | Fabricante |
|------------|------------|
| **DLSS**   | NVIDIA     |
| **FSR**    | AMD        |
| **XeSS**   | Intel      |

---

##  Resumo

- **Função**: Processar gráficos e melhorar desempenho em jogos e softwares.  
- **Conexão**: Padrão **PCIe**, com retrocompatibilidade.  
- **Classificação**: Terminação do modelo indica potência (50 → básica, 60 → intermediária, 70 → avançada, 80/90 → topo).  
- **Fabricantes**: Apenas **NVIDIA, AMD e Intel**.  
- **Tecnologias**: Ray Tracing e upscaling (DLSS, FSR, XeSS).

---
