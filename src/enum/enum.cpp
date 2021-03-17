#include <iostream>

class Log
{
public:
    enum Level
    {
        error, warning, info
    };
private:
    Level m_Loglevel = info;

public:
    void SetLevel(Level level)
    {
        m_Loglevel = level;
    }

    void Error(const char* message)
    {
        if (m_Loglevel >= error)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
        if (m_Loglevel >= warning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_Loglevel >= info)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::warning);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    std::cin.get();
}