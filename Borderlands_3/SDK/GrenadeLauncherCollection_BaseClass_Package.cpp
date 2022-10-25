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
	 * 		Name   -> Function GrenadeLauncherCollection_BaseClass.GrenadeLauncherCollection_BaseClass_C.GetParticleEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     ContextObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UParticleSystem* UGrenadeLauncherCollection_BaseClass_C::GetParticleEffect(class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrenadeLauncherCollection_BaseClass.GrenadeLauncherCollection_BaseClass_C.GetParticleEffect");
		
		UGrenadeLauncherCollection_BaseClass_C_GetParticleEffect_Params params {};
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrenadeLauncherCollection_BaseClass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrenadeLauncherCollection_BaseClass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GrenadeLauncherCollection_BaseClass.GrenadeLauncherCollection_BaseClass_C");
		return ptr;
	}

}


