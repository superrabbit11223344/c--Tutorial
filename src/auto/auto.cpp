#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

char* GetName()
{
    return "Cherno";
}

class Device
{

};

class DeviceManager
{
private:
    std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
    const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const
    {
        return m_Devices;
    }
};

int main()
{
    std::vector<std::string> strings;
    strings.push_back("apple");
    strings.push_back("orange");

    // for (std::vector<std::string>::iterator it = strings.begin();
    for (auto it = strings.begin();  // auto
         it != strings.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
    typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap;

    DeviceManager dm;
    // const DeviceMap& devices = dm.GetDevices();
    const auto& devices = dm.GetDevices();

    std::cin.get();
}