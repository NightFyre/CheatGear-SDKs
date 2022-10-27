/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Humanoid_Preview.BP_Humanoid_Preview_C.ExecuteUbergraph_BP_Humanoid_Preview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Humanoid_Preview_C::ExecuteUbergraph_BP_Humanoid_Preview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Humanoid_Preview.BP_Humanoid_Preview_C.ExecuteUbergraph_BP_Humanoid_Preview");
		
		UBP_Humanoid_Preview_C_ExecuteUbergraph_BP_Humanoid_Preview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Humanoid_Preview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Humanoid_Preview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Humanoid_Preview.BP_Humanoid_Preview_C");
		return ptr;
	}

}


