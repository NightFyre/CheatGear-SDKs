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
	 * 		Name   -> Function AITree_PetLoader.AITree_PetLoader_C.BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAITree_PetLoader_C::BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITree_PetLoader.AITree_PetLoader_C.BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader");
		
		UAITree_PetLoader_C_BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader_Params params {};
		params.AIController = AIController;
		params.Character = Character;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AITree_PetLoader.AITree_PetLoader_C.ExecuteUbergraph_AITree_PetLoader
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITree_PetLoader_C::ExecuteUbergraph_AITree_PetLoader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITree_PetLoader.AITree_PetLoader_C.ExecuteUbergraph_AITree_PetLoader");
		
		UAITree_PetLoader_C_ExecuteUbergraph_AITree_PetLoader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITree_PetLoader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITree_PetLoader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AITree_PetLoader.AITree_PetLoader_C");
		return ptr;
	}

}


