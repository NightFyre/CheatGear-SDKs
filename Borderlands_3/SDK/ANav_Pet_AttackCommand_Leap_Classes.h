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
	 * BlueprintGeneratedClass ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C
	 * Size -> 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
	 */
	class UANav_Pet_AttackCommand_Leap_C : public UGbxAction_NavJump
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) Transient, DuplicateTransient
		class AActor*                                              NewPet;                                                  // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Notify_Landed();
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_ANav_Pet_AttackCommand_Leap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
