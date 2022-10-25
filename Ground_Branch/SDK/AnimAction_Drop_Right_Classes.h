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
	 * BlueprintGeneratedClass AnimAction_Drop_Right.AnimAction_Drop_Right_C
	 * Size -> 0x0014 (FullSize[0x012C] - InheritedSize[0x0118])
	 */
	class UAnimAction_Drop_Right_C : public UGBCharAnimAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimerHandle                                        TimeHandle_Drop;                                         // 0x0120(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      DropTime;                                                // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnMontageEndedEvent(bool bInterrupted);
		void Drop();
		void TriggerAction();
		void ExecuteUbergraph_AnimAction_Drop_Right(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
