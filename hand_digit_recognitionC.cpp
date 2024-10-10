#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>

struct Ponto {
    float x, y;
};

std::vector<bool> contarDedos(const std::vector<Ponto>& pontosTips, const std::vector<Ponto>& pontosMcps, const std::string& handLabel) {
    std::vector<bool> dedosLevantados(5, false);

    for (size_t i = 0; i < dedosLevantados.size(); ++i) {
        if (i == 0) {
            if (handLabel == "Left") {
                dedosLevantados[i] = pontosTips[i].x > pontosMcps[i].x;
            } else {
                dedosLevantados[i] = pontosTips[i].x < pontosMcps[i].x;
            }
        } else {
            dedosLevantados[i] = pontosTips[i].y < pontosMcps[i].y;
        }
    }

    return dedosLevantados;
}

int main() {
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Erro ao abrir a câmera!" << std::endl;
        return -1;
    }

    while (true) {
        cv::Mat frame;
        cap >> frame;
        if (frame.empty()) {
            break;
        }

        std::vector<Ponto> pontosTips = {
            {0.5, 0.2},
            {0.3, 0.1}, 
            {0.4, 0.1},
            {0.5, 0.1},
            {0.6, 0.1}
        };

        std::vector<Ponto> pontosMcps = {
            {0.4, 0.5},
            {0.3, 0.5},
            {0.4, 0.5},
            {0.5, 0.5},
            {0.6, 0.5}
        };

        std::string handLabel = "Right";

        std::vector<bool> dedosLevantados = contarDedos(pontosTips, pontosMcps, handLabel);
        int numDedosLevantados = std::count(dedosLevantados.begin(), dedosLevantados.end(), true);

        cv::putText(frame, handLabel + " Hand: " + std::to_string(numDedosLevantados), 
                    cv::Point(10, 70), cv::FONT_HERSHEY_SIMPLEX, 2, cv::Scalar(255, 0, 0), 2, cv::LINE_AA);

        cv::imshow("Hand Tracking", frame);

        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}
