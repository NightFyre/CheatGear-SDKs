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
	 * Function BP_LightBase.BP_LightBase_C.UserConstructionScript
	 */
	struct ABP_LightBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_LightBase.BP_LightBase_C.ReceiveBeginPlay
	 */
	struct ABP_LightBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_LightBase.BP_LightBase_C.Modulate Lighting Data
	 */
	struct ABP_LightBase_C_Modulate_Lighting_Data_Params
	{
	public:
		struct FFLightTemplate                                     bpp__LightxTemplate__pfT;                                // 0x0000(0x0058)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__OverridexWattage__pfT;                              // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RF10[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFLightTemplate                                     bpp__ModulatedxLightxTemplate__pfTT;                     // 0x0060(0x0058)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__EmissivexStrength__pfT;                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_LightBase.BP_LightBase_C.Is Lit
	 */
	struct ABP_LightBase_C_Is_Lit_Params
	{
	public:
		bool                                                       bpp__Lit__pf;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_LightBase.BP_LightBase_C.Configure Light
	 */
	struct ABP_LightBase_C_Configure_Light_Params
	{
	public:
		class ULightComponent*                                     bpp__LightxComponent__pfT;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFLightTemplate                                     bpp__LightxTemplate__pfT;                                // 0x0008(0x0058)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_LightBase.BP_LightBase_C.Apply Lighting Settings
	 */
	struct ABP_LightBase_C_Apply_Lighting_Settings_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
