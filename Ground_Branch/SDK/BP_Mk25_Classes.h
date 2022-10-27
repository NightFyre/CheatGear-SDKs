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
	 * BlueprintGeneratedClass BP_Mk25.BP_Mk25_C
	 * Size -> 0x0038 (FullSize[0x06A0] - InheritedSize[0x0668])
	 */
	class ABP_Mk25_C : public ABP_Handgun_Master_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGBRailComponent*                                    BottomRail;                                              // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBFrontSightPostComponent*                          FrontSightPost;                                          // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBSightComponent*                                   IronSight;                                               // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBEjectComponent*                                   Eject_Mk25;                                              // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBExternalMagazineComponent*                        Magazine_Mk25;                                           // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBBarrelComponent*                                  Barrel_Mk25;                                             // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void BndEvt__IronSight_K2Node_ComponentBoundEvent_2_OnSightZeroing__DelegateSignature(class UGBSightComponent* SightComponent, class AGBItem* OwningItem, const struct FVector& RelativeZeroLocation, const struct FVector& RelativeLocationOffset, const struct FRotator& RelativeRotationOffset);
		void BndEvt__FrontSightPost_K2Node_ComponentBoundEvent_3_OnRelativeLocationOffset__DelegateSignature(class UGBFrontSightPostComponent* FrontSightPostComponent, float RelativeLocationOffset);
		void ExecuteUbergraph_BP_Mk25(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
