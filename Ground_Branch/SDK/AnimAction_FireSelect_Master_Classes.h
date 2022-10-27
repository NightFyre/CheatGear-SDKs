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
	 * BlueprintGeneratedClass AnimAction_FireSelect_Master.AnimAction_FireSelect_Master_C
	 * Size -> 0x0009 (FullSize[0x0121] - InheritedSize[0x0118])
	 */
	class UAnimAction_FireSelect_Master_C : public UGBCharAnimAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient
		EHand                                                      TargetHand;                                              // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TriggerAction();
		void ExecuteUbergraph_AnimAction_FireSelect_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
