# Hand Tracking and Finger Counting

Este projeto é uma aplicação de rastreamento de mãos e contagem de dedos em tempo real utilizando as bibliotecas OpenCV e MediaPipe para Python, e uma versão alternativa em C++ usando apenas OpenCV. A aplicação captura imagens da webcam, detecta as mãos presentes, desenha as conexões das mãos na tela e conta quantos dedos estão levantados em cada mão.

## Funcionalidades

1. **Rastreamento de Mãos:**
   - O código Python utiliza o módulo de soluções de mãos do MediaPipe para detectar e rastrear as mãos em tempo real. Ele pode rastrear até duas mãos simultaneamente.
   - O código C++ implementa uma versão simplificada para rastreamento de dedos, simulando a detecção de landmarks de mãos.

2. **Contagem de Dedos:**
   - Ambos os códigos contam quantos dedos estão levantados em cada mão detectada. Eles diferenciam entre a mão esquerda e direita para realizar a contagem correta, levando em consideração a orientação da mão.

3. **Interface Visual:**
   - Conexões e marcas são desenhadas sobre as mãos rastreadas no vídeo, e o número de dedos levantados é exibido na tela em tempo real em ambas as versões (Python e C++).

## Requisitos

### Python

- Python 3.x
- OpenCV (`cv2`)
- MediaPipe

### C++

- OpenCV
- Compilador C++ (como g++)

## Como Executar

### Python

1. Instale as dependências necessárias:
   ```bash
   pip install opencv-python mediapipe
   ```
2. Execute o script Python:
   ```bash
   python hand_tracking.py
   ```
   (Certifique-se de ter uma webcam conectada ao seu computador.)

3. Uma janela será exibida mostrando o vídeo da sua webcam com as mãos rastreadas e o número de dedos levantados. Pressione a tecla `q` para encerrar a execução.

### C++

1. Instale o OpenCV em seu sistema.

2. Compile o código C++:
   ```bash
   g++ hand_tracking.cpp -o hand_tracking -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio
   ```

3. Execute o código:
   ```bash
   ./hand_tracking
   ```

4. Uma janela será exibida mostrando o vídeo da sua webcam com o número de dedos levantados (simulado) para uma ou mais mãos. Pressione a tecla `q` para encerrar a execução.

## Uso

Este código pode ser utilizado em diversas aplicações que requerem interações baseadas em gestos, como jogos, interfaces homem-máquina, e outros projetos interativos.

### Python Dependencies (`requirements.txt`)

```txt
opencv-python
mediapipe
```

Este arquivo `requirements.txt` contém as bibliotecas necessárias para rodar o projeto em Python. Você pode instalá-las utilizando o comando `pip install -r requirements.txt`.
