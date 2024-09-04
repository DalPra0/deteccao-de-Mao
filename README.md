# Hand Tracking and Finger Counting

Este projeto é uma aplicação de rastreamento de mãos e contagem de dedos em tempo real utilizando as bibliotecas OpenCV e MediaPipe. A aplicação captura imagens da webcam, detecta as mãos presentes, desenha as conexões das mãos na tela e conta quantos dedos estão levantados em cada mão.

## Funcionalidades

1. **Rastreamento de Mãos:**
   - O código utiliza o módulo de soluções de mãos do MediaPipe para detectar e rastrear as mãos em tempo real. Ele pode rastrear até duas mãos simultaneamente.

2. **Contagem de Dedos:**
   - A aplicação conta quantos dedos estão levantados em cada mão detectada. Ela diferencia entre a mão esquerda e direita para realizar a contagem correta, levando em consideração a orientação da mão.

3. **Interface Visual:**
   - Conexões e marcas são desenhadas sobre as mãos rastreadas no vídeo, e o número de dedos levantados é exibido na tela em tempo real.

## Requisitos

- Python 3.x
- OpenCV (`cv2`)
- MediaPipe

## Como Executar

1. Instale as dependências necessárias:
   ```bash
   pip install opencv-python mediapipe
   ```
2. Execute o script:
   ```bash
   python hand_tracking.py
   ```
   (Certifique-se de ter uma webcam conectada ao seu computador.)

3. Uma janela será exibida mostrando o vídeo da sua webcam com as mãos rastreadas e o número de dedos levantados. Pressione a tecla `q` para encerrar a execução.

## Uso

Este código pode ser utilizado em diversas aplicações que requerem interações baseadas em gestos, como jogos, interfaces homem-máquina, e outros projetos interativos.
```txt
opencv-python
mediapipe
```

Este arquivo `requirements.txt` contém as bibliotecas necessárias para rodar o projeto. Você pode instalá-las utilizando o comando `pip install -r requirements.txt`.
