#include "asepch.hpp"
#include "ase/debug/log.hpp"

namespace ase
{
    // static variable initalisations
    File* Debug::s_logFile = nullptr;

    /*void Debug::InitLog()
    {
    }*/

    void Debug::Log(std::string message)
    {
        XPLMDebugString((message + "\n").c_str());
    }

    void Debug::Log(int message)
    {
        Log(std::to_string(message));
    }
}

