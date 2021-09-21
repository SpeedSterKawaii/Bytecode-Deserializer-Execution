#include <Windows.h>
#include <string.h>
using namespace std;

DWORD RBX; // Our Roblox State, For our Execution.

namespace Addresses // Must update every weekend for it to init.
{
   int luau_deserialize = NULL;
   int lua_spawn = NULL;
   int lua_getfield = NULL;
}

namespace Typedefs
{
  
}

void Deserialize(DWORD state, std::string luau) // 2 atguments, (state == RBX), luau is our script to run.
{
   
}

VOID Load()
{
   // This is the entry, how we will load the void into the injection.
  
   // Show the local user a friendly injection message. (you can change).
   MessageBoxA(NULL, "Successfully Loaded Bytecode Deserializer DLL", "Bytecode Deserializer // By SpeedSterKawaii", NULL);
   
   
}

BOOL APIENTRY DllMain(HMODULE Module, DWORD Reason, void* Reserved) {
	if (Reason == DLL_PROCESS_ATTACH)
  {
    Sleep(500); // Give a cooldown, remember it is in millisecond format.
		CreateThread(NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(Load), NULL, NULL, NULL); // Load the Void "Load()" into Process Injection.
	}
	return TRUE;
}
