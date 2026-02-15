#include <thread>
#include <vector>

using namespace std;

int main() {
    unsigned int cores = thread::hardware_concurrency();
    vector<thread> threads;

    for (unsigned int i = 0; i < cores; ++i) {
        threads.emplace_back([]{
            while (true) {}
        });
    }

    for (auto& t : threads)
        t.join();

    return 0;
}
