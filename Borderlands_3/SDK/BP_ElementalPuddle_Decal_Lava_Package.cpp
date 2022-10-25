/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ElementalPuddle_Decal_Lava_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C.UserConstructionScript");
		
		ABP_ElementalPuddle_Decal_Lava_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ElementalPuddle_Decal_Lava_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ElementalPuddle_Decal_Lava_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C");
		return ptr;
	}

}


