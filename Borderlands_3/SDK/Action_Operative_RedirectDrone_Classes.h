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
	 * BlueprintGeneratedClass Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C
	 * Size -> 0x00C0 (FullSize[0x0338] - InheritedSize[0x0278])
	 */
	class UAction_Operative_RedirectDrone_C : public UOakAction_Anim_ActionAbility_GRMLN
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) Transient, DuplicateTransient
		struct FEnvQueryParams                                     FindInstantTargetQuery;                                  // 0x0280(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void AN_RedirectDrone();
		void OnServerBegin(class AActor* Actor);
		void AN_PerformRedirectFeedback();
		void ExecuteUbergraph_Action_Operative_RedirectDrone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
