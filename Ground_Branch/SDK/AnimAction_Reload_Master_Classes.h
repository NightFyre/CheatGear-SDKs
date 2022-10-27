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
	 * BlueprintGeneratedClass AnimAction_Reload_Master.AnimAction_Reload_Master_C
	 * Size -> 0x0014 (FullSize[0x012C] - InheritedSize[0x0118])
	 */
	class UAnimAction_Reload_Master_C : public UGBCharAnimAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		EHand                                                      TargetHand;                                              // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_37Q5[0x3];                                   // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DummyItemTag;                                            // 0x0124(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnMontageEndedEvent(bool bInterrupted);
		void TriggerAction();
		void TriggerActionInternal();
		void ExecuteUbergraph_AnimAction_Reload_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
