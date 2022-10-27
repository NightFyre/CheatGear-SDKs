#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C
	 * Size -> 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
	 */
	class UAction_StandIn_Flourish_Digiclone_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient

	public:
		void OnBegin(class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_Action_StandIn_Flourish_Digiclone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
