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
	 * 		Name   -> Function BPContextResolver_PlayerInventory.BPContextResolver_PlayerInventory_C.GetContextForAttribute
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxAttributeData*                           Attribute                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextSource                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<class UObject*> UBPContextResolver_PlayerInventory_C::GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPContextResolver_PlayerInventory.BPContextResolver_PlayerInventory_C.GetContextForAttribute");
		
		UBPContextResolver_PlayerInventory_C_GetContextForAttribute_Params params {};
		params.Attribute = Attribute;
		params.ContextSource = ContextSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPContextResolver_PlayerInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPContextResolver_PlayerInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPContextResolver_PlayerInventory.BPContextResolver_PlayerInventory_C");
		return ptr;
	}

}


