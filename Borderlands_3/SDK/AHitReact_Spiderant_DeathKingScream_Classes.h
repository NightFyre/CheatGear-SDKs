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
	 * BlueprintGeneratedClass AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C
	 * Size -> 0x0008 (FullSize[0x0208] - InheritedSize[0x0200])
	 */
	class UAHitReact_Spiderant_DeathKingScream_C : public UOakAction_PhysicalDeath
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0200(0x0008) Transient, DuplicateTransient

	public:
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
