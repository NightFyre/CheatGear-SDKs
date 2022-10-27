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
	 * BlueprintGeneratedClass Action_Beastmaster_StandIn_GravTrap.Action_Beastmaster_StandIn_GravTrap_C
	 * Size -> 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
	 */
	class UAction_Beastmaster_StandIn_GravTrap_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient
		class ABPChar_StandIn_Beastmaster_SkillScreen_C*           StandInRef;                                              // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_Action_Beastmaster_StandIn_GravTrap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
