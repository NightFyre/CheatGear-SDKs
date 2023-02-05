#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass BP_DCMonsterBase.BP_DCMonsterBase_C
	 * Size -> 0x0048 (FullSize[0x0B78] - InheritedSize[0x0B30])
	 */
	class ABP_DCMonsterBase_C : public ADCMonsterBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B30(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDCAkComponent*                                      DCAk;                                                    // 0x0B38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UExpandableInventoryComponent*                       ExpandableInventory;                                     // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInteractableTargetComponent*                        InteractableTarget;                                      // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UItemRandomGenerateComponent*                        ItemRandomGenerate;                                      // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     AudibleDistance;                                         // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       MonsterFootsteps;                                        // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPrimaryAssetId>                             InteractSettingArray;                                    // 0x0B68(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83(class UMsgBaseNode* ProxyObject);
		void ReceivePreInitializeComponents();
		void EventFMsgSoundEvent(const struct FMsgSoundEvent& Msg);
		void BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature(TArray<struct FItemData>* ResultItems);
		void InteractSucceed(class AActor* Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_DCMonsterBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
