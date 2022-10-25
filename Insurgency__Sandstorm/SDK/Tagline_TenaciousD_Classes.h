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
	 * DynamicClass Tagline_TenaciousD.Tagline_TenaciousD_C
	 * Size -> 0x0070 (FullSize[0x0150] - InheritedSize[0x00E0])
	 */
	class UTagline_TenaciousD_C : public UTagline
	{
	public:
		int32_t                                                    LastStandWaves;                                          // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReachedLastStand;                                       // 0x00E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U11N[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AttackerWaveThreshold;                                   // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x00EC(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4J7[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSGameMode*                                        K2Node_Event_GameMode;                                   // 0x0100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERoundConclusion                                           K2Node_CustomEvent_RoundEndReason;                       // 0x0108(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              K2Node_CustomEvent_WinningTeam;                          // 0x0109(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SR8K[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSPushGameMode*                                    K2Node_DynamicCast_AsINSPush_Game_Mode;                  // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0118(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0YK[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSPushGameMode*                                    K2Node_DynamicCast_AsINSPush_Game_Mode_2;                // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x0128(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11IB[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_2;                  // 0x012C(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G08L[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSPushGameMode*                                    K2Node_DynamicCast_AsINSPush_Game_Mode_3;                // 0x0140(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_3;                           // 0x0148(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYNK[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRoundOver(ERoundConclusion bpp__RoundEndReason__pf, unsigned char bpp__WinningTeam__pf);
		void OnLastStand();
		void BlueprintOnRoundReset();
		void BlueprintInit(class AINSGameMode* bpp__GameMode__pf);
		void OnRoundOverDelegate__DelegateSignature(ERoundConclusion bpp__RoundEndReason__pf, unsigned char bpp__WinningTeam__pf);
		void OnLastStandDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
