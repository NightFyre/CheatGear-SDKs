#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.AddNewCounter
	 */
	struct UBP_AmmoCount_C_AddNewCounter_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPlus;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VH7J[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Padding;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.Get Counters
	 */
	struct UBP_AmmoCount_C_Get_Counters_Params
	{
	public:
		bool                                                       Chamber;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CD5Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            Counters;                                                // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.HasNotNullCounter
	 */
	struct UBP_AmmoCount_C_HasNotNullCounter_Params
	{
	public:
		TArray<int32_t>                                            Counters;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       HasNotNull;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KU73[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.HandleGrenadeLauncherType
	 */
	struct UBP_AmmoCount_C_HandleGrenadeLauncherType_Params
	{
	public:
		int32_t                                                    CurrentMagIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MagFrac;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAmmoContainerType                                         ContainerType;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsHandled;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DD10[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NextMagIndexOut;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.UpdateSingleLoadReserveTextVisibility
	 */
	struct UBP_AmmoCount_C_UpdateSingleLoadReserveTextVisibility_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetTextForContainer
	 */
	struct UBP_AmmoCount_C_GetTextForContainer_Params
	{
	public:
		EAmmoContainerType                                         Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BQ7R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.OnMagazineScavenged
	 */
	struct UBP_AmmoCount_C_OnMagazineScavenged_Params
	{
	public:
		class AINSSoldier*                                         Soldier;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AItemWeapon*                                         Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.OnUseBegin
	 */
	struct UBP_AmmoCount_C_OnUseBegin_Params
	{
	public:
		class AINSSoldier*                                         Soldier;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              UsingActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUseItem                                                   Item;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A3EY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.OnSoldierSpawned
	 */
	struct UBP_AmmoCount_C_OnSoldierSpawned_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.UpdateLastMagVisibility
	 */
	struct UBP_AmmoCount_C_UpdateLastMagVisibility_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.UpdateAmmoCounter
	 */
	struct UBP_AmmoCount_C_UpdateAmmoCounter_Params
	{
	public:
		TArray<int32_t>                                            NewAmmoCounter;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.Update Representative Ammo Count
	 */
	struct UBP_AmmoCount_C_Update_Representative_Ammo_Count_Params
	{
	public:
		TArray<int32_t>                                            NewCounts;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.UpdateActiveMagAnimation
	 */
	struct UBP_AmmoCount_C_UpdateActiveMagAnimation_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.UpdateActiveMagazine
	 */
	struct UBP_AmmoCount_C_UpdateActiveMagazine_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.SetupMagwellRepresentation
	 */
	struct UBP_AmmoCount_C_SetupMagwellRepresentation_Params
	{
	public:
		EAmmoContainerType                                         Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSetContainerName;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TV81[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.ShouldDisplayRedFlashingMagazine
	 */
	struct UBP_AmmoCount_C_ShouldDisplayRedFlashingMagazine_Params
	{
	public:
		bool                                                       Display;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.OnReloadInterrupted
	 */
	struct UBP_AmmoCount_C_OnReloadInterrupted_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.UpdateAmmoType
	 */
	struct UBP_AmmoCount_C_UpdateAmmoType_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.MakeFiremodeVisible
	 */
	struct UBP_AmmoCount_C_MakeFiremodeVisible_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.ShouldShowReserveMagCount
	 */
	struct UBP_AmmoCount_C_ShouldShowReserveMagCount_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMagMagwellVisibility
	 */
	struct UBP_AmmoCount_C_GetPhysicalMagMagwellVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetAmmoCounterColor
	 */
	struct UBP_AmmoCount_C_GetAmmoCounterColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetSingleLoadReserveText
	 */
	struct UBP_AmmoCount_C_GetSingleLoadReserveText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetSingleLoadReserveVisibility
	 */
	struct UBP_AmmoCount_C_GetSingleLoadReserveVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.CheckMagEmpty
	 */
	struct UBP_AmmoCount_C_CheckMagEmpty_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetMagwellVisibility
	 */
	struct UBP_AmmoCount_C_GetMagwellVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetCountVisibility
	 */
	struct UBP_AmmoCount_C_GetCountVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.FadeInDisplayWithTimeout
	 */
	struct UBP_AmmoCount_C_FadeInDisplayWithTimeout_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.FadeOutDisplay
	 */
	struct UBP_AmmoCount_C_FadeOutDisplay_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.FadeInDisplay
	 */
	struct UBP_AmmoCount_C_FadeInDisplay_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.WeaponIsLoaded
	 */
	struct UBP_AmmoCount_C_WeaponIsLoaded_Params
	{
	public:
		bool                                                       Loaded;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZK75[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetMagazinesToRepresent
	 */
	struct UBP_AmmoCount_C_GetMagazinesToRepresent_Params
	{
	public:
		TArray<float>                                              Magazines;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<EAmmoContainerType>                                 ContainerTypes;                                          // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.UpdateVisibleMagazine
	 */
	struct UBP_AmmoCount_C_UpdateVisibleMagazine_Params
	{
	public:
		int32_t                                                    Entry;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Frac;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAmmoContainerType                                         Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BAEC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.UpdateAmmoRepresentation
	 */
	struct UBP_AmmoCount_C_UpdateAmmoRepresentation_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMag03Visibility
	 */
	struct UBP_AmmoCount_C_GetPhysicalMag03Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMag02Visibility
	 */
	struct UBP_AmmoCount_C_GetPhysicalMag02Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetPhysicalMag01Visibility
	 */
	struct UBP_AmmoCount_C_GetPhysicalMag01Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.GetPlusSignVisibility
	 */
	struct UBP_AmmoCount_C_GetPlusSignVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.Get Ammo Count Text
	 */
	struct UBP_AmmoCount_C_Get_Ammo_Count_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.FirearmFire
	 */
	struct UBP_AmmoCount_C_FirearmFire_Params
	{
	public:
		struct FVector                                             FireOrigin;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FireDirection;                                           // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.ReserveAmmoUpdated
	 */
	struct UBP_AmmoCount_C_ReserveAmmoUpdated_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.FirearmReload
	 */
	struct UBP_AmmoCount_C_FirearmReload_Params
	{
	public:
		bool                                                       DryReload;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SingleReload;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BBNW[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Speed;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.BndEvt__BP_FireMode_K2Node_ComponentBoundEvent_1_UpdateFiremodeContainerVisibility__DelegateSignature
	 */
	struct UBP_AmmoCount_C_BndEvt__BP_FireMode_K2Node_ComponentBoundEvent_1_UpdateFiremodeContainerVisibility__DelegateSignature_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.ActiveAmmoUpdated
	 */
	struct UBP_AmmoCount_C_ActiveAmmoUpdated_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.FirearmDryFire
	 */
	struct UBP_AmmoCount_C_FirearmDryFire_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.FirearmAmmoCheck
	 */
	struct UBP_AmmoCount_C_FirearmAmmoCheck_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.HideAmmoCountInTutorial
	 */
	struct UBP_AmmoCount_C_HideAmmoCountInTutorial_Params
	{
	public:
		class AINSSoldier*                                         Soldier;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AItemBase*                                           Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.BindInventoryEvents
	 */
	struct UBP_AmmoCount_C_BindInventoryEvents_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.WeaponChanged
	 */
	struct UBP_AmmoCount_C_WeaponChanged_Params
	{
	public:
		class AItemEquipable*                                      NewItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AItemEquipable*                                      PreviousItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.PlayGatherAmmoFeedback
	 */
	struct UBP_AmmoCount_C_PlayGatherAmmoFeedback_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.Construct
	 */
	struct UBP_AmmoCount_C_Construct_Params
	{	};

	/**
	 * Function BP_AmmoCount.BP_AmmoCount_C.ExecuteUbergraph_BP_AmmoCount
	 */
	struct UBP_AmmoCount_C_ExecuteUbergraph_BP_AmmoCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
