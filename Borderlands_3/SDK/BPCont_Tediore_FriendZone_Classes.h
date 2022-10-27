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
	 * BlueprintGeneratedClass BPCont_Tediore_FriendZone.BPCont_Tediore_FriendZone_C
	 * Size -> 0x001F (FullSize[0x0790] - InheritedSize[0x0771])
	 */
	class ABPCont_Tediore_FriendZone_C : public ABPCont_AI_C
	{
	public:
		unsigned char                                              UnknownData_2LVY[0x7];                                   // 0x0771(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0778(0x0008) Transient, DuplicateTransient
		bool                                                       bCanShoot;                                               // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GVNE[0x7];                                   // 0x0781(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                bCanWalk;                                                // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret(class UTargetingComponent* TargetingComponent);
		void ExecuteUbergraph_BPCont_Tediore_FriendZone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
