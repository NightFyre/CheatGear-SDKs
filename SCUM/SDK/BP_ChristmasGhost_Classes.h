#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_ChristmasGhost.BP_ChristmasGhost_C
	 * Size -> 0x0030 (FullSize[0x0330] - InheritedSize[0x0300])
	 */
	class ABP_ChristmasGhost_C : public AChristmasGhost
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Ghost;                                                   // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class USkeletalMesh*>                               PossibleMeshes;                                          // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnNotifyEnd_BD830BA54751BA88132EE8B90C969374(const class FName& NotifyName);
		void OnNotifyBegin_BD830BA54751BA88132EE8B90C969374(const class FName& NotifyName);
		void OnInterrupted_BD830BA54751BA88132EE8B90C969374(const class FName& NotifyName);
		void OnBlendOut_BD830BA54751BA88132EE8B90C969374(const class FName& NotifyName);
		void OnCompleted_BD830BA54751BA88132EE8B90C969374(const class FName& NotifyName);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_ChristmasGhost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
