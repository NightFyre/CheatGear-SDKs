#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BP_ContextWidgetPrereq_ExcludeSquadLeader.BP_ContextWidgetPrereq_ExcludeSquadLeader_C
	 * Size -> 0x0011 (FullSize[0x0041] - InheritedSize[0x0030])
	 */
	class UBP_ContextWidgetPrereq_ExcludeSquadLeader_C : public UDFContextualWidgetPrerequisiteBase
	{
	public:
		class AHDSquadState*                                       MemberSQState;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHDPlayerState*                                      MemberPSToTest;                                          // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInitialized;                                            // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsValidContext(bool* bValidData);
		bool SatisfiesPrerequisite();
		void SetupContext(class AHDSquadState* InMemberSQState, class AHDPlayerState* InMemberPSToTest);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
