#include <iostream>
#include <string>
#include <chrono>
#include <cmath>

long long tries = 0;
long long totalComb = 1;

std::chrono::high_resolution_clock::time_point start;

bool found = false;

std::string password;
std::string alphabet;

void printProgress(const std::string& attempt, double elapsed)
{
    double speed = tries / elapsed;
    double progress = (double)tries / totalComb * 100.0;

    std::cout << "\ntries -> " << tries << " - " << attempt << " - " << progress << "% - " << (long long)speed << "/sec - time left -> " << (totalComb - tries) / speed << "sec";

}

void printResult(const std::string& attempt, double elapsed)
{
    std::cout << "password -> " << attempt << std::endl;
    std::cout << "tries -> " << tries << std::endl;
    std::cout << "time -> " << elapsed * 1000 << " mc" << std::endl;
    std::cout << "speed -> " << tries / elapsed << " try/sec" << std::endl;
    std::cout << "progress -> " << (double)tries / totalComb * 100 << std::endl;

}

void generatePass(std::string curr, int depth, int max_depth)
{
    if(found){
        return;
    }

    if(depth == max_depth){
        tries++;

        auto now = std::chrono::high_resolution_clock::now();
        double elapsed = std::chrono::duration<double>(now - start).count();

        if(max_depth <= 4){
            if(tries % 1000 == 0){
                printProgress(curr, elapsed);
            }
        } else if (max_depth <= 6){
            if(tries % 1000000 == 0){
                printProgress(curr, elapsed);
            }
        } else {
            if(tries % 10000000 == 0){
                printProgress(curr, elapsed);
            }
        }

        if(curr == password){
            printResult(curr, elapsed);

            found = true;
        }

        return;
    }

    for(char c : alphabet){
        if(found){
            break;
        }

        generatePass(curr + c, depth + 1, max_depth);
    }
}

int main(void){
    for(char c = '0'; c <= '9'; c++){
        alphabet += c;
    }

    std::cout << "enter the pass -> ";
    std::cin >> password;

    int passLen = password.length();

    std::cout << "pass lenght -> " << passLen << std::endl;

    for(int i = 0; i < passLen; i++){
        totalComb *= alphabet.length();
    }

    std::cout << "\nmax comb -> " << totalComb << std::endl;
    
    start = std::chrono::high_resolution_clock::now();

    generatePass("", 0, passLen);

    if(!found){
        std::cout << "not found" << std::endl;

    }

    return 0;
}