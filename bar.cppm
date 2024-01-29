module;

#include <string>

export module fetched_lib;

export auto call() -> std::string {
    return "BAR";
}