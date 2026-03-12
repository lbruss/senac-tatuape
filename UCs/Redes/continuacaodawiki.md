# Spanning Tree Protocol (STP)

O que é
O **Spanning Tree Protocol (STP)** é um protocolo de rede usado em **switches** para evitar **loops de rede** em redes Ethernet.

## Por que ele é necessário
Quando existem **vários caminhos entre switches**, podem ocorrer **loops** (dados circulando infinitamente na rede).  
Isso causa problemas como:

- Congestionamento da rede
- Pacotes duplicados
- Queda de desempenho

O **STP resolve isso bloqueando caminhos redundantes**, deixando apenas **um caminho ativo** entre os dispositivos.

## Como funciona (de forma simples)
O STP cria uma **estrutura em forma de árvore**, onde:

1. Um switch é escolhido como **Root Bridge (switch principal)**.
2. O protocolo calcula **o melhor caminho** até esse switch.
3. Caminhos extras são **bloqueados** para evitar loops.
4. Se o caminho principal falhar, o STP **ativa um caminho alternativo automaticamente**.

**Analogia simples**
Imagine uma **cidade com várias ruas entre dois lugares**.

- Se todas as ruas ficarem abertas ao mesmo tempo, pode acontecer **trânsito circulando em círculos**.
- O STP **fecha algumas ruas temporariamente** para que o tráfego siga **um caminho organizado**.
- Se a rua principal fechar, **outra rua é aberta automaticamente**.

## Vantagens
- Evita loops de rede
- Mantém a rede estável
- Permite redundância (caminhos de backup)

## Desvantagem
- Pode demorar alguns segundos para reorganizar a rede quando ocorre uma falha.

# Conclusão
O **STP** é essencial em redes com **vários switches conectados**, pois **organiza os caminhos da rede e evita loops**, garantindo que os dados trafeguem de forma correta.
