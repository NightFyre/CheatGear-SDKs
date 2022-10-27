#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Class ConsoleCertificationRequirements.AccountNickname
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class UAccountNickname : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_7CM2[0x18];                                  // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShowOnlyOnXbox;                                         // 0x0248(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6KML[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (PADDING)

	public:
		class FString GetActiveAccountNickname();
		void BP_OnAccountChanged(int32_t ActiveControllerId);
		static UClass* StaticClass();
	};

	/**
	 * Class ConsoleCertificationRequirements.NetworkConnectionStatus
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class UNetworkConnectionStatus : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_VOUA[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShowOnlyOnConsoles;                                     // 0x0238(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O0HV[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (PADDING)

	public:
		void BP_OnConnectionStatusChanged(bool bConnected);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
