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
	 * 		Name   -> Function Dodge_PetLoader_Bullet_Moving_L.Dodge_PetLoader_Bullet_Moving_L_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDodge_PetLoader_Bullet_Moving_L_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodge_PetLoader_Bullet_Moving_L.Dodge_PetLoader_Bullet_Moving_L_C.OnBegin");
		
		UDodge_PetLoader_Bullet_Moving_L_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Dodge_PetLoader_Bullet_Moving_L.Dodge_PetLoader_Bullet_Moving_L_C.Loader_JumpEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDodge_PetLoader_Bullet_Moving_L_C::Loader_JumpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodge_PetLoader_Bullet_Moving_L.Dodge_PetLoader_Bullet_Moving_L_C.Loader_JumpEnd");
		
		UDodge_PetLoader_Bullet_Moving_L_C_Loader_JumpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Dodge_PetLoader_Bullet_Moving_L.Dodge_PetLoader_Bullet_Moving_L_C.Loader_JumpStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDodge_PetLoader_Bullet_Moving_L_C::Loader_JumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodge_PetLoader_Bullet_Moving_L.Dodge_PetLoader_Bullet_Moving_L_C.Loader_JumpStart");
		
		UDodge_PetLoader_Bullet_Moving_L_C_Loader_JumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Dodge_PetLoader_Bullet_Moving_L.Dodge_PetLoader_Bullet_Moving_L_C.ExecuteUbergraph_Dodge_PetLoader_Bullet_Moving_L
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDodge_PetLoader_Bullet_Moving_L_C::ExecuteUbergraph_Dodge_PetLoader_Bullet_Moving_L(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodge_PetLoader_Bullet_Moving_L.Dodge_PetLoader_Bullet_Moving_L_C.ExecuteUbergraph_Dodge_PetLoader_Bullet_Moving_L");
		
		UDodge_PetLoader_Bullet_Moving_L_C_ExecuteUbergraph_Dodge_PetLoader_Bullet_Moving_L_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDodge_PetLoader_Bullet_Moving_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodge_PetLoader_Bullet_Moving_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dodge_PetLoader_Bullet_Moving_L.Dodge_PetLoader_Bullet_Moving_L_C");
		return ptr;
	}

}


