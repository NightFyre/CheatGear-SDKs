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
	 * DynamicClass Tagline_NoPressure.Tagline_NoPressure_C
	 * Size -> 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
	 */
	class UTagline_NoPressure_C : public UTagline
	{
	public:
		class AINSPlayerState*                                     K2Node_CustomEvent_HeroPlayer;                           // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x00E8(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class AINSGameMode*                                        K2Node_Event_GameMode;                                   // 0x00F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSMultiplayerMode*                                 K2Node_DynamicCast_AsINSMultiplayer_Mode;                // 0x0100(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0108(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEJT[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnHeroCapture(class AINSPlayerState* bpp__HeroPlayer__pf);
		void BlueprintInit(class AINSGameMode* bpp__GameMode__pf);
		void OnHeroCaptureDelegate__DelegateSignature(class AINSPlayerState* bpp__HeroPlayer__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
