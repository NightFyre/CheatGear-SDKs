#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AndroidFileServer.AndroidFileServerBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_StopFileServer(bool bUSB, bool bNetwork);
		bool STATIC_StartFileServer(bool bUSB, bool bNetwork, int32_t Port);
		EAFSActiveType STATIC_IsFileServerRunning();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
