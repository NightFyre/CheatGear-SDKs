#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UEasyAntiCheatNetComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ERM5[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void ServerMessage(TArray<unsigned char> Message);
		void ClientMessage(TArray<unsigned char> Message);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
