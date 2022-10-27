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
	 * BlueprintGeneratedClass ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UADirection_Spiderant_Flinch_C : public UGbxAction_DirectionContainer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C8(0x0008) Transient, DuplicateTransient

	public:
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_ADirection_Spiderant_Flinch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
