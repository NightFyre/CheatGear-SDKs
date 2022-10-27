#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class RemoteEmergentVoyage.RemoteEmergentVoyageInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URemoteEmergentVoyageInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteEmergentVoyage.RemoteEmergentVoyageService
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URemoteEmergentVoyageService : public UObject
	{
	public:
		unsigned char                                              UnknownData_Z3IR[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
