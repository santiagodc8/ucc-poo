#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

int main() {
    std::cout << "+-----------------------------------+" << std::endl;
    std::cout << "+---------- PGM: phmPrint ----------+" << std::endl;
    std::cout << "Autor: 👉🏽👉🏽👉🏽Santiago Duran👈🏽👈🏽👈🏽 " << std::endl;
    std::cout << "+-----------------------------------+" << std::endl;

    try {
        auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        std::cout << "Imprimiendo desde el shell a las " << std::ctime(&now) << "⌚";
        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
        std::cout << "📖📖📖📖📖📖📖📖📖" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "🖨️🖨️🖨️ Impresion finalizada 🖨️🖨️🖨️" << std::endl;
    } catch (std::exception const& e) {
        std::cerr << "⚠️⚠️⚠️" << e.what() << std::endl;
    }

    return 0;
}
