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
	 * BlueprintGeneratedClass BP_GBPPVolume.BP_GBPPVolume_C
	 * Size -> 0x05C0 (FullSize[0x07E0] - InheritedSize[0x0220])
	 */
	class ABP_GBPPVolume_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess;                                             // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TMap<class FName, struct FPostProcessSettings>             PostProcessSettings;                                     // 0x0238(0x0050) Edit, BlueprintVisible
		unsigned char                                              UnknownData_U0J1[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                DefaultPostProcessSettings;                              // 0x0290(0x0550) Edit, BlueprintVisible

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BindToSkyActor();
		void OnTimeSpanChanged_Event_1(const class FName& Timespan);
		void SetEnabled(bool bEnabled);
		void ExecuteUbergraph_BP_GBPPVolume(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
