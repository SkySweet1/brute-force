#include <iostream>
#include <string>
#include <chrono>
#include <cmath>

int main(void){
    std::string alphabet;

    // for(char c  = 'a'; c <= 'z'; c++){
    //     alphabet += c;
    // }

    // for(char c = 'A'; c <= 'Z'; c++){
    //     alphabet += c;
    // }

    for(char c = '0'; c <= '9'; c++){
        alphabet += c;
    }

    // std::cout << "alphabet -> " << alphabet.length() << " symbols" << std::endl;

    std::string password;

    std::cout << "enter ure pass -> "; 
    std::cin >> password;

    int pass_len = password.length();
    std::cout << "pass length -> " << pass_len << std::endl;

    long long tries = 0;
    auto start = std::chrono::high_resolution_clock::now();

    bool found = false;

    long long total_combinations = 1;
    for(int i = 0; i < pass_len; i++){
        total_combinations *= alphabet.length();
    }

    std::cout << "\nmax comb -> " << total_combinations << std::endl;


    if(pass_len == 2){
        for(char c1 : alphabet){
            for(char c2 : alphabet){
                tries++;

                std::string attempt;
                attempt += c1;
                attempt += c2;

                if(tries % 1000 == 0){
                    auto current_time = std::chrono::high_resolution_clock::now();
                    double elapsed = std::chrono::duration<double>(current_time - start).count();
                    double speed = tries / elapsed;
                    double progress = (double)tries / total_combinations * 100.0;
                            
                    std::cout << "\ntries-> " << tries << " - " << attempt
                            << " | " << progress << "%"
                            << " | " << (long long)speed << "/sec"
                            << " | time left: " << (total_combinations - tries) / speed << " sec";
                }

                if(attempt == password){
                    auto end = std::chrono::high_resolution_clock::now();
                    double elapsed = std::chrono::duration<double>(end - start).count();

                    std::cout << "\n\npassword ->    " << attempt << std::endl;
                    std::cout << "tries ->    " << tries << std::endl;
                    std::cout << "time ->    " << elapsed*1000 << " MC" << std::endl;
                    std::cout << "speed ->    " << tries / elapsed << " try/sec" << std::endl;
                    std::cout << "progress ->    " << (double)tries / total_combinations * 100 << "%" << std::endl;
                            
                    found = true;
                    break;
                }
              
            }
            if(found) break;
        }
    } 
    else if(pass_len == 3){
        for(char c1 : alphabet){
            for(char c2 : alphabet){
                for(char c3 : alphabet){
                    tries++;

                    std::string attempt;
                    attempt += c1;
                    attempt += c2;
                    attempt += c3;

                    if(tries % 1000000 == 0){
                        auto current_time = std::chrono::high_resolution_clock::now();
                        double elapsed = std::chrono::duration<double>(current_time - start).count();
                        double speed = tries / elapsed;
                        double progress = (double)tries / total_combinations * 100.0;
                            
                        std::cout << "\ntries-> " << tries << " - " << attempt
                                << " | " << progress << "%"
                                << " | " << (long long)speed << "/sec"
                                << " | time left: " << (total_combinations - tries) / speed << " sec";
                    }

                    if(attempt == password){
                        auto end = std::chrono::high_resolution_clock::now();
                        double elapsed = std::chrono::duration<double>(end - start).count();

                        std::cout << "\n\npassword ->    " << attempt << std::endl;
                        std::cout << "tries ->    " << tries << std::endl;
                        std::cout << "time ->    " << elapsed*1000 << " MC" << std::endl;
                        std::cout << "speed ->    " << tries / elapsed << " try/sec" << std::endl;
                        std::cout << "progress ->    " << (double)tries / total_combinations * 100 << "%" << std::endl;
                            
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
            if(found) break;
        }
    } 
    else if(pass_len == 4){
        for(char c1 : alphabet){
            for(char c2 : alphabet){
                for(char c3 : alphabet){
                    for(char c4 : alphabet){
                        tries++;

                        std::string attempt;
                        attempt += c1;
                        attempt += c2;
                        attempt += c3;
                        attempt += c4;

                        if(tries % 1000 == 0){
                            auto current_time = std::chrono::high_resolution_clock::now();
                            double elapsed = std::chrono::duration<double>(current_time - start).count();
                            double speed = tries / elapsed;
                            double progress = (double)tries / total_combinations * 100.0;
                            
                            std::cout << "\ntries-> " << tries << " - " << attempt
                                      << " | " << progress << "%"
                                      << " | " << (long long)speed << "/sec"
                                      << " | time left: " << (total_combinations - tries) / speed << " sec";
                        }

                        if(attempt == password){
                            auto end = std::chrono::high_resolution_clock::now();
                            double elapsed = std::chrono::duration<double>(end - start).count();

                            std::cout << "\n\npassword ->    " << attempt << std::endl;
                            std::cout << "tries ->    " << tries << std::endl;
                            std::cout << "time ->    " << elapsed*1000 << " MC" << std::endl;
                            std::cout << "speed ->    " << tries / elapsed << " try/sec" << std::endl;
                            std::cout << "progress ->    " << (double)tries / total_combinations * 100 << "%" << std::endl;
                            
                            found = true;
                            break;
                        }
                    }
                    if(found) break;
                }
                if(found) break;
            }
            if(found) break;
        }
    }
    else if(pass_len == 5){
        for(char c1 : alphabet){
            for(char c2 : alphabet){
                for(char c3 : alphabet){
                    for(char c4 : alphabet){
                        for(char c5 : alphabet){
                            tries++;

                            std::string attempt;
                            attempt += c1;
                            attempt += c2;
                            attempt += c3;
                            attempt += c4;
                            attempt += c5;

                            if(tries % 1000000 == 0){
                                auto current_time = std::chrono::high_resolution_clock::now();
                                double elapsed = std::chrono::duration<double>(current_time - start).count();
                                double speed = tries / elapsed;
                                double progress = (double)tries / total_combinations * 100.0;
                                
                                std::cout << "\ntries-> " << tries << " - " << attempt
                                          << " | " << progress << "%"
                                          << " | " << (long long)speed << "/sec"
                                          << " | time left: " << (total_combinations - tries) / speed << " sec";
                            }

                            if(attempt == password){
                                auto end = std::chrono::high_resolution_clock::now();
                                double elapsed = std::chrono::duration<double>(end - start).count();

                                std::cout << "\n\npassword ->    " << attempt << std::endl;
                                std::cout << "tries ->    " << tries << std::endl;
                                std::cout << "time ->    " << elapsed*1000 << " MC" << std::endl;
                                std::cout << "speed ->    " << tries / elapsed << " try/sec" << std::endl;
                                std::cout << "progress ->    " << (double)tries / total_combinations * 100 << "%" << std::endl;
                                
                                found = true;
                                break;
                            }
                        }
                        if(found) break;
                    }
                    if(found) break;
                }
                if(found) break;
            }
            if(found) break;
        }
    }
    else if(pass_len == 6){
        for(char c1 : alphabet){
            for(char c2 : alphabet){
                for(char c3 : alphabet){
                    for(char c4 : alphabet){
                        for(char c5 : alphabet){
                            for(char c6 : alphabet){
                                tries++;

                                std::string attempt;
                                attempt += c1;
                                attempt += c2;
                                attempt += c3;
                                attempt += c4;
                                attempt += c5;
                                attempt += c6;

                                if(tries % 10000000 == 0){
                                    auto current_time = std::chrono::high_resolution_clock::now();
                                    double elapsed = std::chrono::duration<double>(current_time - start).count();
                                    double speed = tries / elapsed;
                                    double progress = (double)tries / total_combinations * 100.0;
                                    
                                    std::cout << "\ntries-> " << tries << " - " << attempt
                                              << " | " << progress << "%"
                                              << " | " << (long long)speed << "/sec"
                                              << " | time left: " << (total_combinations - tries) / speed << " sec";
                                }

                                if(attempt == password){
                                    auto end = std::chrono::high_resolution_clock::now();
                                    double elapsed = std::chrono::duration<double>(end - start).count();

                                    std::cout << "\n\npassword ->    " << attempt << std::endl;
                                    std::cout << "tries ->    " << tries << std::endl;
                                    std::cout << "time ->    " << elapsed*1000 << " MC" << std::endl;
                                    std::cout << "speed ->    " << tries / elapsed << " try/sec" << std::endl;
                                    std::cout << "progress ->    " << (double)tries / total_combinations * 100 << "%" << std::endl;
                                    
                                    found = true;
                                    break;
                                }
                            }
                            if(found) break;
                        }
                        if(found) break;
                    }
                    if(found) break;
                }
                if(found) break;
            }
            if(found) break;
        }
    }
    else if(pass_len == 7){
        for(char c1 : alphabet){
            for(char c2 : alphabet){
                for(char c3 : alphabet){
                    for(char c4 : alphabet){
                        for(char c5 : alphabet){
                            for(char c6 : alphabet){
                                for(char c7 : alphabet){
                                    tries++;

                                    std::string attempt;
                                    attempt += c1;
                                    attempt += c2;
                                    attempt += c3;
                                    attempt += c4;
                                    attempt += c5;
                                    attempt += c6;
                                    attempt += c7;

                                    if(tries % 10000000 == 0){
                                        auto current_time = std::chrono::high_resolution_clock::now();
                                        double elapsed = std::chrono::duration<double>(current_time - start).count();
                                        double speed = tries / elapsed;
                                        double progress = (double)tries / total_combinations * 100.0;
                                        
                                        std::cout << "\ntries-> " << tries << " - " << attempt
                                                << " | " << progress << "%"
                                                << " | " << (long long)speed << "/sec"
                                                << " | time left: " << (total_combinations - tries) / speed << " sec";
                                    }

                                    if(attempt == password){
                                        auto end = std::chrono::high_resolution_clock::now();
                                        double elapsed = std::chrono::duration<double>(end - start).count();

                                        std::cout << "\n\npassword ->    " << attempt << std::endl;
                                        std::cout << "tries ->    " << tries << std::endl;
                                        std::cout << "time ->    " << elapsed*1000 << " MC" << std::endl;
                                        std::cout << "speed ->    " << tries / elapsed << " try/sec" << std::endl;
                                        std::cout << "progress ->    " << (double)tries / total_combinations * 100 << "%" << std::endl;
                                        
                                        found = true;
                                        break;
                                    }
                                }
                                if(found) break;
                            }
                            if(found) break;
                        }
                        if(found) break;
                    }
                    if(found) break;
                }
                if(found) break;
            }
            if(found) break;
        }
    }
    else if(pass_len == 8){
        for(char c1 : alphabet){
            for(char c2 : alphabet){
                for(char c3 : alphabet){
                    for(char c4 : alphabet){
                        for(char c5 : alphabet){
                            for(char c6 : alphabet){
                                for(char c7 : alphabet){
                                    for(char c8 : alphabet){
                                        tries++;

                                        std::string attempt;
                                        attempt += c1;
                                        attempt += c2;
                                        attempt += c3;
                                        attempt += c4;
                                        attempt += c5;
                                        attempt += c6;
                                        attempt += c7;
                                        attempt += c8;

                                        if(tries % 1000 == 0){
                                            auto current_time = std::chrono::high_resolution_clock::now();
                                            double elapsed = std::chrono::duration<double>(current_time - start).count();
                                            double speed = tries / elapsed;
                                            double progress = (double)tries / total_combinations * 100.0;
                                            
                                            std::cout << "\ntries-> " << tries << " - " << attempt
                                                    << " | " << progress << "%"
                                                    << " | " << (long long)speed << "/sec"
                                                    << " | time left: " << (total_combinations - tries) / speed << " sec";
                                        }

                                        if(attempt == password){
                                            auto end = std::chrono::high_resolution_clock::now();
                                            double elapsed = std::chrono::duration<double>(end - start).count();

                                            std::cout << "\n\n\033[32mpassword ->    " << attempt << "\033[0m" << std::endl;
                                            std::cout << "tries ->    " << tries << std::endl;
                                            std::cout << "time ->    " << elapsed*1000 << " MC" << std::endl;
                                            std::cout << "speed ->    " << tries / elapsed << " try/sec" << std::endl;
                                            std::cout << "progress ->    " << (double)tries / total_combinations * 100 << "%" << std::endl;
                                            
                                            found = true;
                                            break;
                                        }
                                    }
                                    if(found) break;
                                }
                                if(found) break;
                            }
                            if(found) break;
                        }
                        if(found) break;
                    }
                    if(found) break;
                }
                if(found) break;
            }
            if(found) break;
        }
    }
    else if(pass_len == 9){
        for(char c1 : alphabet){
            for(char c2 : alphabet){
                for(char c3 : alphabet){
                    for(char c4 : alphabet){
                        for(char c5 : alphabet){
                            for(char c6 : alphabet){
                                for(char c7 : alphabet){
                                    for(char c8 : alphabet){
                                        for(char c9 : alphabet){
                                            tries++;

                                            std::string attempt;
                                            attempt += c1;
                                            attempt += c2;
                                            attempt += c3;
                                            attempt += c4;
                                            attempt += c5;
                                            attempt += c6;
                                            attempt += c7;
                                            attempt += c8;
                                            attempt += c9;

                                            if(tries % 10000000 == 0){
                                                auto current_time = std::chrono::high_resolution_clock::now();
                                                double elapsed = std::chrono::duration<double>(current_time - start).count();
                                                double speed = tries / elapsed;
                                                double progress = (double)tries / total_combinations * 100.0;
                                                
                                                std::cout << "\ntries-> " << tries << " - " << attempt
                                                        << " | " << progress << "%"
                                                        << " | " << (long long)speed << "/sec"
                                                        << " | time left: " << (total_combinations - tries) / speed << " sec";
                                            }

                                            if(attempt == password){
                                                auto end = std::chrono::high_resolution_clock::now();
                                                double elapsed = std::chrono::duration<double>(end - start).count();

                                                std::cout << "\n\n\033[32mpassword ->    " << attempt << "\033[0m" << std::endl;
                                                std::cout << "tries ->    " << tries << std::endl;
                                                std::cout << "time ->    " << elapsed*1000 << " MC" << std::endl;
                                                std::cout << "speed ->    " << tries / elapsed << " try/sec" << std::endl;
                                                std::cout << "progress ->    " << (double)tries / total_combinations * 100 << "%" << std::endl;
                                                
                                                found = true;
                                                break;
                                            }
                                        }
                                        if(found) break;
                                    }
                                    if(found) break;
                                }
                                if(found) break;
                            }
                            if(found) break;
                        }
                        if(found) break;
                    }
                    if(found) break;
                }
                if(found) break;
            }
            if(found) break;
        }
    }
    
    if(!found){
        std::cout << "not found" << std::endl;
    }

    return 0;
}
