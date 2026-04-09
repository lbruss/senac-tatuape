# RAID — RAID 1 e RAID 5

RAID é uma tecnologia que usa **vários discos (HDs/SSDs)** para melhorar:

- segurança dos dados  
- desempenho  
- disponibilidade  

---

**IMPORTANTE**

**RAID NÃO substitui backup**

**Analogia:**  
- RAID = cofre reforçado  
- Backup = cópia guardada em outro lugar  

Se algo grave acontecer (vírus, erro humano, incêndio), só o backup salva.

---

# RAID 1 — Espelhamento

**Como funciona**

- Usa **no mínimo 2 discos**
- Um disco é uma cópia exata do outro

Tudo que acontece em um disco → acontece no outro automaticamente

---

**Analogia**

É como escrever em **dois cadernos ao mesmo tempo**.  
Se você perder um, o outro ainda tem tudo.

---

## Vantagens

- Alta segurança  
- Simples de configurar  
- Proteção contra falha de 1 disco  

---

## Desvantagens

- Usa o dobro de espaço (2 discos = capacidade de 1)  
- Não melhora muito o desempenho  

---

# Configurar RAID 1 no Windows

**Passo a passo**

1. Clique com botão direito no menu iniciar  
2. Abra **Gerenciamento de Disco**

---

**Inicializar discos**

Ao aparecer:

- **MBR** → suporta até 2TB  
- **GPT** → suporta discos maiores e é mais moderno  

Recomendado: **GPT**

---

**Criar espelhamento**

1. Clique com botão direito no disco  
2. Selecione:

Novo volume espelhado

3. Se não aparecer:
- Converta para **Disco Dinâmico**
4. Adicione o segundo disco  
5. Avance → Formate → Concluir  

---

# Se um HD falhar (RAID 1)

**O que acontece**

- O sistema continua funcionando  
- Seus arquivos continuam acessíveis  

---

**Resolver problema**

1. Vá em **Gerenciamento de Disco**
2. Clique no volume espelhado
3. Selecione:

Remover espelho

4. Escolha o disco com problema  

Seus dados continuam no disco saudável

---

## Refazer o espelho

1. Clique no disco ativo  
2. Selecione:

Adicionar espelho

3. Escolha o novo disco  
4. Confirme  

---

# RAID 5 — Paridade

**Como funciona**

- Usa **mínimo 3 discos**
- Os dados são distribuídos entre os discos
- Existe uma **informação de paridade** que permite recuperar dados

---

**Analogia**

Imagine 3 pessoas guardando partes de um segredo.

Se uma esquecer, as outras conseguem **reconstruir a informação**.

---

## Vantagens

- Melhor aproveitamento de espaço  
- Boa segurança  
- Melhor desempenho que RAID 1 (principalmente leitura)

---

## Desvantagens

- Configuração mais complexa  
- Se **2 discos falharem**, os dados são perdidos  

---

# Configurar RAID 5 no Windows

**Passo a passo**

1. Abra **Gerenciamento de Disco**
2. Clique com botão direito em um disco
3. Selecione:

Novo volume RAID-5

4. Adicione **pelo menos 3 discos**
5. Avance → Formate → Concluir  

---

# Se um HD falhar (RAID 5)

**O que acontece**

- O sistema continua funcionando  
- Os dados ainda estão acessíveis  
- Mas a segurança diminui  

---

## Reparar RAID 5

1. Vá em **Gerenciamento de Disco**
2. Clique no volume RAID
3. Selecione:

Reparar volume

4. Escolha um novo disco  
5. Confirme  

O sistema irá reconstruir automaticamente os dados

---

## Comparação Rápida

| Tipo | Mín. discos | Segurança | Desempenho | Espaço |
|------|------------|----------|------------|--------|
| RAID 1 | 2 | Alta | Normal | 50% |
| RAID 5 | 3 | Média/Alta | Bom | Melhor aproveitamento |

---

**Informação Adicional**

RAID pode ser implementado de duas formas:

* RAID por software
- Configurado no sistema operacional  
- Mais simples  

* RAID por hardware
- Feito por controladoras físicas  
- Mais rápido e profissional  

---

# Conclusão

RAID é essencial para ambientes profissionais porque:

- protege dados contra falhas de disco  
- mantém sistemas funcionando  
- melhora desempenho  

Em resumo:

- **RAID 1** → máxima segurança (espelho)  
- **RAID 5** → equilíbrio entre segurança e desempenho