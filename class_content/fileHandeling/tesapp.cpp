#include <iostream>
#include <fstream>
int main()
{
    std::fstream fs("text.txt", std::fstream::in | std::fstream::out);
    if (fs.is_open()) {
        while (!fs.eof()) {
            if (fs.get() == 'A') {
                fs.seekp((fs.tellp() - static_cast<std::streampos>(1)));
                fs.put(' ');
                fs.seekp(fs.tellp());
            }
        }
        fs.close();
    } else {
        std::cout << "Faild to open" << '\n';
    }
    return 0;
}