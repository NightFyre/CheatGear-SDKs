#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass masterNodeBot.masterNodeBot_C
	 * Size -> 0x0020 (FullSize[0x0CB0] - InheritedSize[0x0C90])
	 */
	class AmasterNodeBot_C : public ARaidNodeBot
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C90(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USkinnedDecalSampler*                                SkinnedDecalSampler;                                     // 0x0C98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       NPCWasActivated;                                         // 0x0CA0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I5JP[0x7];                                   // 0x0CA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       NPCController;                                           // 0x0CA8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void StartActiveEvent();
		void StartDeactiveEvent();
		void DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass);
		void OnProxyHitReact(const struct FHitResult& Impact);
		void ExecuteUbergraph_masterNodeBot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
