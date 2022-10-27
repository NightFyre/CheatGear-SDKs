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
	 * BlueprintGeneratedClass BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C
	 * Size -> 0x0008 (FullSize[0x0738] - InheritedSize[0x0730])
	 */
	class ABP_OakConsumableItemPickup_C : public ABP_OakInventoryItemPickup_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0730(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnPickedUpEvent(class AActor* WasPickedUpBy);
		void ExecuteUbergraph_BP_OakConsumableItemPickup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
