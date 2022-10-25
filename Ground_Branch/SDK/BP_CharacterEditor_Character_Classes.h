#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_CharacterEditor_Character.BP_CharacterEditor_Character_C
	 * Size -> 0x0008 (FullSize[0x1098] - InheritedSize[0x1090])
	 */
	class ABP_CharacterEditor_Character_C : public AGBCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1090(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void InventoryItemAdded_Event_1(class AGBCharacter* Character, class AGBItem* InvItem);
		void ExecuteUbergraph_BP_CharacterEditor_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
