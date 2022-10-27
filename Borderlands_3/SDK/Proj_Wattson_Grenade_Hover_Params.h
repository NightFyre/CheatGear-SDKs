#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.UserConstructionScript
	 */
	struct AProj_Wattson_Grenade_Hover_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.TL_Hover__FinishedFunc
	 */
	struct AProj_Wattson_Grenade_Hover_C_TL_Hover__FinishedFunc_Params
	{	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.TL_Hover__UpdateFunc
	 */
	struct AProj_Wattson_Grenade_Hover_C_TL_Hover__UpdateFunc_Params
	{	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.GbxAsyncRequest_Miss_75E6A60F49F25A5F3C7939850ECEB48E
	 */
	struct AProj_Wattson_Grenade_Hover_C_GbxAsyncRequest_Miss_75E6A60F49F25A5F3C7939850ECEB48E_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.GbxAsyncRequest_Hit_75E6A60F49F25A5F3C7939850ECEB48E
	 */
	struct AProj_Wattson_Grenade_Hover_C_GbxAsyncRequest_Hit_75E6A60F49F25A5F3C7939850ECEB48E_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Prime
	 */
	struct AProj_Wattson_Grenade_Hover_C_HNT_Prime_Params
	{	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Drop
	 */
	struct AProj_Wattson_Grenade_Hover_C_HNT_Drop_Params
	{	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Throw
	 */
	struct AProj_Wattson_Grenade_Hover_C_HNT_Throw_Params
	{	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.OnExplode
	 */
	struct AProj_Wattson_Grenade_Hover_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ReceiveHit
	 */
	struct AProj_Wattson_Grenade_Hover_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DDKA[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ReceiveBeginPlay
	 */
	struct AProj_Wattson_Grenade_Hover_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ExecuteUbergraph_Proj_Wattson_Grenade_Hover
	 */
	struct AProj_Wattson_Grenade_Hover_C_ExecuteUbergraph_Proj_Wattson_Grenade_Hover_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
