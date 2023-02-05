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
	 * BlueprintGeneratedClass BP_Footprint.BP_Footprint_C
	 * Size -> 0x0128 (FullSize[0x03A8] - InheritedSize[0x0280])
	 */
	class ABP_Footprint_C : public ADecalActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDCTagCollisionDetectorComponent*                    DCTagCollisionDetector;                                  // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class UMaterialInstance*>                    FootprintMaterialMap;                                    // 0x0290(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bLeftFoot;                                               // 0x02E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_KPMY[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            InRotator;                                               // 0x02E8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class UMaterialInstanceDynamic*                            DecalMaterialInstance;                                   // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FootprintDuration;                                       // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentDuration;                                         // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAccountDataReplication                             OwnerAccountDataReplication;                             // 0x0318(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		struct FLinearColor                                        ColourA;                                                 // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColourB;                                                 // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, const struct FAccountDataReplication& AccountDataReplication);
		void ExecuteUbergraph_BP_Footprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
