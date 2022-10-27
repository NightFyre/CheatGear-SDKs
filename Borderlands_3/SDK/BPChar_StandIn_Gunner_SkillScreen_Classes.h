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
	 * BlueprintGeneratedClass BPChar_StandIn_Gunner_SkillScreen.BPChar_StandIn_Gunner_SkillScreen_C
	 * Size -> 0x0010 (FullSize[0x23A8] - InheritedSize[0x2398])
	 */
	class ABPChar_StandIn_Gunner_SkillScreen_C : public ABPChar_StandIn_Gunner_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2398(0x0008) Transient, DuplicateTransient
		class UGbxStaticMeshComponent*                             HologramProjector;                                       // 0x23A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void HideHologramProjector();
		void ShowHologramProjector();
		void ExecuteUbergraph_BPChar_StandIn_Gunner_SkillScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
