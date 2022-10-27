#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.ShouldUseMirroredLowerBodyLoco
	 */
	struct ABP_HDWeaponBase_C_ShouldUseMirroredLowerBodyLoco_Params
	{
	public:
		bool                                                       bOutUseMirrored;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.GetLocoTPPAnimSet
	 */
	struct ABP_HDWeaponBase_C_GetLocoTPPAnimSet_Params
	{
	public:
		TMap<class FName, class UAnimSequenceBase*>                OutAnimSet;                                              // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.GetLocoAnimSet
	 */
	struct ABP_HDWeaponBase_C_GetLocoAnimSet_Params
	{
	public:
		TMap<class FName, class UAnimSequenceBase*>                OutAnimSet;                                              // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.CanFire
	 */
	struct ABP_HDWeaponBase_C_CanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.InternalSetVisibilityForAttachment
	 */
	struct ABP_HDWeaponBase_C_InternalSetVisibilityForAttachment_Params
	{
	public:
		class USceneComponent*                                     Attachment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFirstPerson;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.UpdateAttachmentVisibility
	 */
	struct ABP_HDWeaponBase_C_UpdateAttachmentVisibility_Params
	{
	public:
		bool                                                       bFirstPerson;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.RemoveLegacyLocomotionAnims
	 */
	struct ABP_HDWeaponBase_C_RemoveLegacyLocomotionAnims_Params
	{
	public:
		bool                                                       bFPP;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.GetLegacyLocomotionAnims
	 */
	struct ABP_HDWeaponBase_C_GetLegacyLocomotionAnims_Params
	{
	public:
		bool                                                       bFPP;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AE1F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FName, class UAnimSequenceBase*>                ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.UserConstructionScript
	 */
	struct ABP_HDWeaponBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.CycleSight
	 */
	struct ABP_HDWeaponBase_C_CycleSight_Params
	{	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.SetCurrentSight
	 */
	struct ABP_HDWeaponBase_C_SetCurrentSight_Params
	{
	public:
		class USceneComponent*                                     Sight;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.ReceiveFire
	 */
	struct ABP_HDWeaponBase_C_ReceiveFire_Params
	{	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.ReceiveVisibilityChanged
	 */
	struct ABP_HDWeaponBase_C_ReceiveVisibilityChanged_Params
	{
	public:
		bool                                                       bFirstPerson;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.ExecuteUbergraph_BP_HDWeaponBase
	 */
	struct ABP_HDWeaponBase_C_ExecuteUbergraph_BP_HDWeaponBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDWeaponBase.BP_HDWeaponBase_C.OnUpdateAttachments__DelegateSignature
	 */
	struct ABP_HDWeaponBase_C_OnUpdateAttachments__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
