#include <chrono>
#include <thread>

int main()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(60000));
    return 0;
}
