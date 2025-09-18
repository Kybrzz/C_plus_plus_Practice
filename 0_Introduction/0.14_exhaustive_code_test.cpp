// the following was generated after

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

// Intentional shadowing/warnings to verify -Wshadow / -W(sign-)conversion fire
std::size_t total_len(const std::vector<std::string> &vs)
{
    std::size_t total = 0;
    for (std::size_t i = 0; i < vs.size(); ++i)
    {
        total += vs[i].size(); // no narrowing conversions
    }
    return total;
}

int main([[maybe_unused]] int argc, [[maybe_unused]] char **argv)
{
    {
        // 1) CLI args check (fill args in launch.json later)
        std::cout << "argc=" << argc << "\n";

        // 2) stdin check (Ctrl+F5 or F5 – both should allow input)
        std::cout << "Enter an integer (13 will assert in Debug): ";
        int x{};
        if (!(std::cin >> x))
            return 1;

        // 3) assert check (fires in Debug, removed in Release by -DNDEBUG)
        assert(x != 13 && "Debug assert triggered (as expected).");

        // 4) warnings check: compute average length
        std::vector<std::string> v = {"aa", "bbb", "c"};
        auto sum = total_len(v);
        double avg = static_cast<double>(sum) / v.size();
        std::cout << "avg len = " << avg << "\n";

#ifdef ENABLE_ASAN_TEST
        // 5) sanitizer check (only if you added -fsanitize=address,undefined)
        std::vector<int> buf(3);
        buf[3] = 42; // out-of-bounds write; ASan should report at runtime
#endif
        return 0;
    }
}