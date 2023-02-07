#include <QtWidgets/QMessageBox>
#include <QtWidgets/QCheckBox>
#include  <QtWidgets/QSpinBox>
#include "CryptoAppBuild.h"
#include "SHA256.h"

int doTestCrypt(std::string inFile, std::string outFile, int strenght) {
    std::ifstream file(inFile);
    std::ifstream bufferFile(outFile);
    char g;
    std::vector<char> charArray;



    int counter = 0;
    while (!file.fail()) {
        file.get(g);
        g += strenght;
        charArray.push_back(g);
        counter++;
    }


    charArray.pop_back();
    std::ofstream fileOut(outFile, std::ios::binary);
    
    for (int i = 0; i < charArray.size(); i++) {
        fileOut << charArray.at(i);
    }
    fileOut.close();

    return 0;
}

int doCrypt(std::string inFile, std::string outFile, int strenght) {
    std::ifstream file(inFile);
    
    std::ofstream fileOut(outFile, std::ios::binary);
    SHA256 sh;
    
    size_t size = file.tellg();

    file.seekg(0, std::ios::end);
    std::string buff(size, ' ');
    file.seekg(0);
    file.read(&buff[0], size);
    sh.update(buff);
    
    uint8_t* digest = sh.digest();

    fileOut << SHA256::toString(digest) << std::endl;

    fileOut.close();
}

int doTestDeCrypt(std::string inFile, std::string outFile, int strenght) {
    std::ifstream file(inFile);
    std::ifstream bufferFile(outFile);
    char g;
    std::vector<char> charArray;



    int counter = 0;
    while (!file.fail()) {
        file.get(g);
        g-=strenght;
        charArray.push_back(g);
        counter++;
    }
 
    
    charArray.pop_back();                             
    std::ofstream fileOut(outFile, std::ios::binary);
    for (int i = 0; i < charArray.size(); i++) {
        fileOut << charArray.at(i);
    }
    fileOut.close();

    return 0;
}

CryptoAppBuild::CryptoAppBuild(QWidget *parent): QMainWindow(parent)
{
    ui->setupUi(this);
}

CryptoAppBuild::~CryptoAppBuild()
{}

void CryptoAppBuild::on_pushButton_clicked() {
    QLineEdit* InFile = ui->InputDir;

    QLineEdit* OutFile = ui->OutputDir;

    QCheckBox* CheckBox = ui->checkBox;

    QSpinBox* spinBox = ui->spinBox;
    if (CheckBox->isChecked()) {
        if (doTestDeCrypt(InFile->text().toStdString(), OutFile->text().toStdString(), spinBox->value()) == 0) {
            QMessageBox::about(this, "Success", "File Decrypted successfully");
        }
        else {
            QMessageBox::about(this, "Fail", "File cryption/encryption failed");
        }
    }
    else {
        if (doTestCrypt(InFile->text().toStdString(), OutFile->text().toStdString(), spinBox->value()) == 0) {
            QMessageBox::about(this, "Success", "File Encrypted successfully");
        }
        else {
            QMessageBox::about(this, "Fail", "File cryption/encryption failed");
        }
    }

}
