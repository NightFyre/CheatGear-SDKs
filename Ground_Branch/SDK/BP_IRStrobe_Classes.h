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
	 * BlueprintGeneratedClass BP_IRStrobe.BP_IRStrobe_C
	 * Size -> 0x0019 (FullSize[0x0409] - InheritedSize[0x03F0])
	 */
	class ABP_IRStrobe_C : public AGBItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_IRStrobe;                                             // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                IRStrobe;                                                // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       bLocalHasNightVisionEnabled;                             // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem);
		bool AllowUsageWhileAttached();
		void ReceiveBeginPlay();
		void OnLocalPlayerTagsUpdated_Event_1(class AGBPlayerController* PlayerController);
		void UpdateIRStatus();
		void EncodeKit(class UVaRestJsonObject* ItemAsJson);
		void ExecuteUbergraph_BP_IRStrobe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
