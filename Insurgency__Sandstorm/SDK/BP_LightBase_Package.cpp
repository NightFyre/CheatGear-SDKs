/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00CBA850
	 * 		Name   -> Function BP_LightBase.BP_LightBase_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_LightBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightBase.BP_LightBase_C.UserConstructionScript");
		
		ABP_LightBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3DC0
	 * 		Name   -> Function BP_LightBase.BP_LightBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_LightBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightBase.BP_LightBase_C.ReceiveBeginPlay");
		
		ABP_LightBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E37D50
	 * 		Name   -> Function BP_LightBase.BP_LightBase_C.Modulate Lighting Data
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FFLightTemplate                             bpp__LightxTemplate__pfT                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__OverridexWattage__pfT                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFLightTemplate                             bpp__ModulatedxLightxTemplate__pfTT                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__EmissivexStrength__pfT                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_LightBase_C::Modulate_Lighting_Data(struct FFLightTemplate* bpp__LightxTemplate__pfT, float bpp__OverridexWattage__pfT, struct FFLightTemplate* bpp__ModulatedxLightxTemplate__pfTT, float* bpp__EmissivexStrength__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightBase.BP_LightBase_C.Modulate Lighting Data");
		
		ABP_LightBase_C_Modulate_Lighting_Data_Params params {};
		params.bpp__OverridexWattage__pfT = bpp__OverridexWattage__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__LightxTemplate__pfT != nullptr)
			*bpp__LightxTemplate__pfT = params.bpp__LightxTemplate__pfT;
		if (bpp__ModulatedxLightxTemplate__pfTT != nullptr)
			*bpp__ModulatedxLightxTemplate__pfTT = params.bpp__ModulatedxLightxTemplate__pfTT;
		if (bpp__EmissivexStrength__pfT != nullptr)
			*bpp__EmissivexStrength__pfT = params.bpp__EmissivexStrength__pfT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E37CB0
	 * 		Name   -> Function BP_LightBase.BP_LightBase_C.Is Lit
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Lit__pf                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_LightBase_C::Is_Lit(bool* bpp__Lit__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightBase.BP_LightBase_C.Is Lit");
		
		ABP_LightBase_C_Is_Lit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Lit__pf != nullptr)
			*bpp__Lit__pf = params.bpp__Lit__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E37BB0
	 * 		Name   -> Function BP_LightBase.BP_LightBase_C.Configure Light
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ULightComponent*                             bpp__LightxComponent__pfT                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFLightTemplate                             bpp__LightxTemplate__pfT                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_LightBase_C::Configure_Light(class ULightComponent** bpp__LightxComponent__pfT, struct FFLightTemplate* bpp__LightxTemplate__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightBase.BP_LightBase_C.Configure Light");
		
		ABP_LightBase_C_Configure_Light_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__LightxComponent__pfT != nullptr)
			*bpp__LightxComponent__pfT = params.bpp__LightxComponent__pfT;
		if (bpp__LightxTemplate__pfT != nullptr)
			*bpp__LightxTemplate__pfT = params.bpp__LightxTemplate__pfT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB39A0
	 * 		Name   -> Function BP_LightBase.BP_LightBase_C.Apply Lighting Settings
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_LightBase_C::Apply_Lighting_Settings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightBase.BP_LightBase_C.Apply Lighting Settings");
		
		ABP_LightBase_C_Apply_Lighting_Settings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LightBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LightBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_LightBase.BP_LightBase_C");
		return ptr;
	}

}


