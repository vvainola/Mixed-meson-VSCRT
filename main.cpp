#include <QtCore/qstring.h>
#include <string>
#include <iostream>

int main(){
    std::string std_string = "my_string";
    QString qt_string = QString::fromStdString(std_string);
    std::cout << qt_string.toStdString() << std::endl;
    return 0;
}
