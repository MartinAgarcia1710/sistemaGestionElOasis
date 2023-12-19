#include <iostream>
#include "funcionesImpresion.h"
#include "rlutil.h"
void letraA(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 2, locY + 3);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX, locY + 4);
    std::cout << (char)219 << (char)219 << "  " << (char)219 << (char)219;
}

void letraG(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 3, locY + 2);
    std::cout << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX, locY + 3);
    std:: cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 4);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
}

void letraL(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 4);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;

}

void letraC(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 4);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
}

void letraT(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX + 2, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 2, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 2, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 2, locY + 4);
    std::cout << (char)219 << (char)219;

}
void letraI(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 4);
    std::cout << (char)219 << (char)219;
}
 
void letraR(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 4);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 4);
    std::cout<< (char)219 << (char)219;
}

void letraE(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 4);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;

}

void letraW(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 8, locY);
    std::cout << (char)219 << (char)219;

    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 8 , locY + 1);
    std::cout << (char)219 << (char)219;

    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 8, locY + 2);
    std::cout << (char)219 << (char)219;


    rlutil::locate(locX, locY + 3);
    std::cout << (char)219 << (char)219;

    rlutil::locate(locX + 3, locY + 3);
    std::cout << (char)219;

    rlutil::locate(locX + 6, locY + 3);
    std::cout << (char)219;

    rlutil::locate(locX + 8, locY + 3);
    std::cout << (char)219 << (char)219;

    rlutil::locate(locX + 1, locY + 4);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 7, locY + 4);
    std::cout << (char)219 << (char)219;
}
void letraN(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 8, locY);
    std::cout << (char)219 << (char)219;

    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219;
    rlutil::locate(locX + 8, locY + 1);
    std::cout << (char)219 << (char)219;

    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 8, locY + 2);
    std::cout << (char)219 << (char)219;

    rlutil::locate(locX, locY + 3);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 6, locY + 3);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219;

    rlutil::setColor(color);
    rlutil::locate(locX, locY + 4);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 8, locY + 4);
    std::cout << (char)219 << (char)219;
    
}

void letraS(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX + 1, locY);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;

    rlutil::locate(locX , locY + 1);
    std::cout << (char)219 << (char)219;

    rlutil::locate(locX + 1, locY + 2);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219;

    rlutil::locate(locX + 4, locY + 3);
    std::cout << (char)219 << (char)219;

    rlutil::locate(locX, locY + 4);
    std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;

}
void letraV(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY);
    std::cout << (char)219 << (char)219;

    rlutil::setColor(color);
    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 1);
    std::cout << (char)219 << (char)219;
    rlutil::setColor(color);
    rlutil::locate(locX, locY + 2);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX + 4, locY + 2);
    std::cout << (char)219 << (char)219;

    rlutil::setColor(color);
    rlutil::locate(locX + 1, locY + 3);
    std::cout << (char)219;
    rlutil::locate(locX + 4, locY + 3);
    std::cout << (char)219;

    rlutil::locate(locX + 2, locY + 4);
    std::cout << (char)219 << (char)219;
}

void apostrofe(int color, int locX, int locY) {
    rlutil::setColor(color);
    rlutil::locate(locX, locY);
    std::cout << (char)219 << (char)219;
    rlutil::locate(locX, locY + 1);
    std::cout << (char)219 << (char)219;
}
void muestraIntro(int x, int y) {

    letraI(1, x + 2, y + 5);
    letraR(2, x + 5, y + 5);
    letraW(3, x + 12, y + 5);
    letraI(4, x + 23, y + 5);
    letraN(5, x + 26, y + 5);
    apostrofe(6, x + 37, y + 5);
    letraS(7, x + 40, y + 5);
    letraR(8, x + 54, y + 5);
    letraE(9, x + 61, y + 5);
    letraV(10, x + 68, y + 5);
    letraE(11, x + 75, y + 5);
    letraN(12, x + 82, y + 5);
    letraG(13, x + 93, y + 5);
    letraE(14, x + 100, y + 5);
    
}

void dado1(int color, int locX, int locY) {
    rlutil::setColor(color);
    
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY);
        std::cout << (char)220;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 1);
        std::cout << (char)219;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 2);
        if (x == 4 || x == 5) {
            std::cout << (char)223;
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 3);
        if (x == 4 || x == 5) {
            std::cout << (char)220;
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 4);
        std::cout << (char)219;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 5);
        std::cout << (char)223;
    }
}

void dado2(int color, int locX, int locY) {
    rlutil::setColor(color);
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY);
        std::cout << (char)220;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 1);
        if (x == 1 || x == 2) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 2);
        std::cout << (char)219;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 3);
        std::cout << (char)219;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 4);
        if (x == 7 || x == 8) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 5);
        std::cout << (char)223;
    }
}

void dado3(int color, int locX, int locY) {
    rlutil::setColor(color);
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY);
        std::cout << (char)220;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 1);
        if (x == 1 || x == 2) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 2);
        if (x == 4 || x == 5) {
            std::cout << (char)223;
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 3);
        if (x == 4 || x == 5) {
            std::cout << (char)220;
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 4);
        if (x == 7 || x == 8) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 5);
        std::cout << (char)223;
    }

}

void dado4(int color, int locX, int locY) {
    rlutil::setColor(color);
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY);
        std::cout << (char)220;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 1);
        if (x == 1 || x == 2 || x == 7 || x ==8) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 2);
        std::cout << (char)219;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 3);
        std::cout << (char)219;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 4);
        if (x == 1 || x ==2 || x == 7 || x == 8) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 5);
        std::cout << (char)223;
    }
}

void dado5(int color, int locX, int locY) {
    rlutil::setColor(color);
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY);
        std::cout << (char)220;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 1);
        if (x == 1 || x == 2 || x == 7 || x == 8) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 2);
        if (x == 4 || x == 5) {
            std::cout << (char)223;
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 3);
        if (x == 4 || x == 5) {
            std::cout << (char)220;
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 4);
        if (x == 1 || x == 2 || x == 7 || x == 8) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 5);
        std::cout << (char)223;
    }
}

void dado6(int color, int locX, int locY) {
    rlutil::setColor(color);
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY);
        std::cout << (char)220;
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 1);
        if (x == 1 || x == 2 || x == 7 || x == 8) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 2);
        if (x == 1 || x == 2 || x == 7 || x == 8) {
            std::cout << (char)223;
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 3);
        if (x == 1 || x == 2 || x == 7 || x == 8) {
            std::cout << (char)220;
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 4);
        if (x == 1 || x == 2 || x == 7 || x == 8) {
        }
        else {
            std::cout << (char)219;
        }
    }
    for (int x = 0; x < 10; x++) {
        rlutil::locate(locX + x, locY + 5);
        std::cout << (char)223;
    }
}

void animacionDados(int locX, int locY, int color) {
    
    for (int x = 0; x < 6; x++) {

        switch (x)
        {
        case 0:
            dado1(color, locX + 5, locY);
            break;
        case 1:
            dado2(color, locX + 20, locY);
            break;
        case 2:
            dado3(color, locX + 35, locY);
            break;
        case 3:
            dado4(color, locX + 50, locY);
            break;
        case 4:
            dado5(color, locX + 65, locY);
            break;
        case 5:
            dado6(color, locX + 80, locY);
            break;
        }
        rlutil::msleep(500);
    }
}
